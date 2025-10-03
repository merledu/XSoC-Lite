/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project. */

module kybertop (
    input logic clk,
    input logic rst_n,
    input logic enable,
    input logic key_enable,
    input logic encryption_enable,
    input logic decryption_enable,
    input logic signed [31:0] data_Req,
    input logic signed [31:0] addr_Req,
    input logic wen_Req,
    output logic key_done,
    output logic encryption_done,
    output logic decryption_done,
    input logic [7:0] bytelane_Req,
    output logic signed [31:0] data_Resp
);

logic signed [31:0] secretkey [1:0][3:0];
logic signed [31:0] result [1:0][3:0];
logic signed [31:0] public_key [1:0][3:0][3:0];
logic signed [31:0] A_reg [3:0][3:0];
logic signed [31:0] s_reg [1:0][3:0];
logic signed [31:0] e_reg [1:0][3:0];
logic signed [31:0] ciphertext[1:0][1:0][3:0];
logic signed [31:0] r [1:0][3:0];
logic signed [31:0] e1 [1:0][3:0];
logic signed [31:0] e2 [3:0];
logic signed [31:0] decimal_value;
logic signed [3:0] m_b;
logic signed [31:0] message;

// Key Generation Input Registers
logic signed [31:0] A_t000, A_t001, A_t002, A_t003;
logic signed [31:0] A_t010, A_t011, A_t012, A_t013;
logic signed [31:0] A_t020, A_t021, A_t022, A_t023;
logic signed [31:0] A_t030, A_t031, A_t032, A_t033;

logic signed [31:0] s_00, s_01, s_02, s_03;
logic signed [31:0] s_10, s_11, s_12, s_13;

logic signed [31:0] e_00, e_01, e_02, e_03;
logic signed [31:0] e_10, e_11, e_12, e_13;

// Encrypt Input Registers
logic signed [31:0] r_00, r_01, r_02, r_03;
logic signed [31:0] r_10, r_11, r_12, r_13;

logic signed [31:0] e1_00, e1_01, e1_02, e1_03;
logic signed [31:0] e1_10, e1_11, e1_12, e1_13;

logic signed [31:0] e2_0, e2_1, e2_2, e2_3;

// Decryption Input Registers
logic signed [31:0] ciphertext000, ciphertext001, ciphertext002, ciphertext003;
logic signed [31:0] ciphertext010, ciphertext011, ciphertext012, ciphertext013;
logic signed [31:0] ciphertext100, ciphertext101, ciphertext102, ciphertext103;

KeyGeneration keygen (
    .clk(clk),
    .rst_n(rst_n),
    .key_enable(key_enable),
    .A(A_reg),
    .secret_key(s_reg),
    .e(e_reg),
    .secretkey(secretkey),
    .result(result),
    .combined_output(public_key),
    .key_done(key_done) // Updated to key_done
);

Encrypt encryption (
    .clk(clk),
    .rst_n(rst_n),
    .encryption_enable(encryption_enable),
    .message(message),
    .combined_output(public_key),
    .r(r),
    .e1(e1),
    .e2(e2),
    .ciphertext(ciphertext),
    .encryption_done(encryption_done) // Updated to encryption_done
);

Decrypt decryption (
    .clk(clk),
    .rst_n(rst_n),
    .decryption_enable(decryption_enable),
    .ciphertext(ciphertext),
    .secret_key(secretkey),
    .m_b(m_b),
    .decimal_value(decimal_value),
    .decryption_done(decryption_done) // Updated to decrypt_done
);

always_ff @(posedge clk) begin
    if (!rst_n) begin
        // Reset only internal/input registers
        for (int i = 0; i < 2; i++) begin
            for (int j = 0; j < 4; j++) begin
                s_reg[i][j] <= 32'b0;
                e_reg[i][j] <= 32'b0;
                r[i][j] <= 32'b0;
                e1[i][j] <= 32'b0;
            end
        end

        for (int i = 0; i < 4; i++) begin
            for (int j = 0; j < 4; j++) begin
                A_reg[i][j] <= 32'b0;
            end
        end

        for (int i = 0; i < 4; i++) begin
            e2[i] <= 32'b0;
        end

        data_Resp <= 32'b0;
        message <= 32'b0;

        // Reset temporary registers
        A_t000 <= 32'b0; A_t001 <= 32'b0; A_t002 <= 32'b0; A_t003 <= 32'b0;
        A_t010 <= 32'b0; A_t011 <= 32'b0; A_t012 <= 32'b0; A_t013 <= 32'b0;
        A_t020 <= 32'b0; A_t021 <= 32'b0; A_t022 <= 32'b0; A_t023 <= 32'b0;
        A_t030 <= 32'b0; A_t031 <= 32'b0; A_t032 <= 32'b0; A_t033 <= 32'b0;

        s_00 <= 32'b0; s_01 <= 32'b0; s_02 <= 32'b0; s_03 <= 32'b0;
        s_10 <= 32'b0; s_11 <= 32'b0; s_12 <= 32'b0; s_13 <= 32'b0;

        e_00 <= 32'b0; e_01 <= 32'b0; e_02 <= 32'b0; e_03 <= 32'b0;
        e_10 <= 32'b0; e_11 <= 32'b0; e_12 <= 32'b0; e_13 <= 32'b0;

        r_00 <= 32'b0; r_01 <= 32'b0; r_02 <= 32'b0; r_03 <= 32'b0;
        r_10 <= 32'b0; r_11 <= 32'b0; r_12 <= 32'b0; r_13 <= 32'b0;

        e1_00 <= 32'b0; e1_01 <= 32'b0; e1_02 <= 32'b0; e1_03 <= 32'b0;
        e1_10 <= 32'b0; e1_11 <= 32'b0; e1_12 <= 32'b0; e1_13 <= 32'b0;

        e2_0 <= 32'b0; e2_1 <= 32'b0; e2_2 <= 32'b0; e2_3 <= 32'b0;

        ciphertext000 <= 32'b0; ciphertext001 <= 32'b0; ciphertext002 <= 32'b0; ciphertext003 <= 32'b0;
        ciphertext010 <= 32'b0; ciphertext011 <= 32'b0; ciphertext012 <= 32'b0; ciphertext013 <= 32'b0;
        ciphertext100 <= 32'b0; ciphertext101 <= 32'b0; ciphertext102 <= 32'b0; ciphertext103 <= 32'b0;

    end else if (wen_Req && enable) begin
      //  data_Resp <= 1;
        $display("checking");
        if (enable) begin
            if (addr_Req == 'h40007000) begin
                A_t000 <= data_Req;
            end else if (addr_Req == 'h40007004) begin
                A_t001 <= data_Req;
            end else if (addr_Req == 'h40007008) begin
                A_t002 <= data_Req;
            end else if (addr_Req == 'h4000700C) begin
                A_t003 <= data_Req;
            end else if (addr_Req == 'h40007010) begin
                A_t010 <= data_Req;
            end else if (addr_Req == 'h40007014) begin
                A_t011 <= data_Req;
            end else if (addr_Req == 'h40007018) begin
                A_t012 <= data_Req;
            end else if (addr_Req == 'h4000701C) begin
                A_t013 <= data_Req;
            end else if (addr_Req == 'h40007020) begin
                A_t020 <= data_Req;
            end else if (addr_Req == 'h40007024) begin
                A_t021 <= data_Req;
            end else if (addr_Req == 'h40007028) begin
                A_t022 <= data_Req;
            end else if (addr_Req == 'h4000702C) begin
                A_t023 <= data_Req;
            end else if (addr_Req == 'h40007030) begin
                A_t030 <= data_Req;
            end else if (addr_Req == 'h40007034) begin
                A_t031 <= data_Req;
            end else if (addr_Req == 'h40007038) begin
                A_t032 <= data_Req;
            end else if (addr_Req == 'h4000703C) begin
                A_t033 <= data_Req;
            end else if (addr_Req == 'h40007040) begin
                s_00 <= data_Req;
            end else if (addr_Req == 'h40007044) begin
                s_01 <= data_Req;
            end else if (addr_Req == 'h40007048) begin
                s_02 <= data_Req;
            end else if (addr_Req == 'h4000704C) begin
                s_03 <= data_Req;
            end else if (addr_Req == 'h40007050) begin
                s_10 <= data_Req;
            end else if (addr_Req == 'h40007054) begin
                s_11 <= data_Req;
            end else if (addr_Req == 'h40007058) begin
                s_12 <= data_Req;
            end else if (addr_Req == 'h4000705C) begin
                s_13 <= data_Req;
            end else if (addr_Req == 'h40007060) begin
                e_00 <= data_Req;
            end else if (addr_Req == 'h40007064) begin
                e_01 <= data_Req;
            end else if (addr_Req == 'h40007068) begin
                e_02 <= data_Req;
            end else if (addr_Req == 'h4000706C) begin
                e_03 <= data_Req;
            end else if (addr_Req == 'h40007070) begin
                e_10 <= data_Req;
            end else if (addr_Req == 'h40007074) begin
                e_11 <= data_Req;
            end else if (addr_Req == 'h40007078) begin
                e_12 <= data_Req;
            end else if (addr_Req == 'h4000707C) begin
                e_13 <= data_Req;
            end else if (addr_Req == 'h40007164) begin
                // Key generation inputs
                A_reg[0][0] <= A_t000;
                A_reg[0][1] <= A_t001;
                A_reg[0][2] <= A_t002;
                A_reg[0][3] <= A_t003;
                A_reg[1][0] <= A_t010;
                A_reg[1][1] <= A_t011;
                A_reg[1][2] <= A_t012;
                A_reg[1][3] <= A_t013;
                A_reg[2][0] <= A_t020;
                A_reg[2][1] <= A_t021;
                A_reg[2][2] <= A_t022;
                A_reg[2][3] <= A_t023;
                A_reg[3][0] <= A_t030;
                A_reg[3][1] <= A_t031;
                A_reg[3][2] <= A_t032;
                A_reg[3][3] <= A_t033;

                s_reg[0][0] <= s_00;
                s_reg[0][1] <= s_01;
                s_reg[0][2] <= s_02;
                s_reg[0][3] <= s_03;
                s_reg[1][0] <= s_10;
                s_reg[1][1] <= s_11;
                s_reg[1][2] <= s_12;
                s_reg[1][3] <= s_13;

                e_reg[0][0] <= e_00;
                e_reg[0][1] <= e_01;
                e_reg[0][2] <= e_02;
                e_reg[0][3] <= e_03;
                e_reg[1][0] <= e_10;
                e_reg[1][1] <= e_11;
                e_reg[1][2] <= e_12;
                e_reg[1][3] <= e_13;
            end
        end
        if (enable) begin
            if (addr_Req == 'h40007080) begin
                message <= data_Req;
            end else if (addr_Req == 'h40007084) begin
                r_00 <= data_Req;
            end else if (addr_Req == 'h40007088) begin
                r_01 <= data_Req;
            end else if (addr_Req == 'h4000708C) begin
                r_02 <= data_Req;
            end else if (addr_Req == 'h40007090) begin
                r_03 <= data_Req;
            end else if (addr_Req == 'h40007094) begin
                r_10 <= data_Req;
            end else if (addr_Req == 'h40007098) begin
                r_11 <= data_Req;
            end else if (addr_Req == 'h4000709C) begin
                r_12 <= data_Req;
            end else if (addr_Req == 'h400070A0) begin
                r_13 <= data_Req;
            end else if (addr_Req == 'h400070A4) begin
                e1_00 <= data_Req;
            end else if (addr_Req == 'h400070A8) begin
                e1_01 <= data_Req;
            end else if (addr_Req == 'h400070AC) begin
                e1_02 <= data_Req;
            end else if (addr_Req == 'h400070B0) begin
                e1_03 <= data_Req;
            end else if (addr_Req == 'h400070B4) begin
                e1_10 <= data_Req;
            end else if (addr_Req == 'h400070B8) begin
                e1_11 <= data_Req;
            end else if (addr_Req == 'h400070BC) begin
                e1_12 <= data_Req;
            end else if (addr_Req == 'h400070C0) begin
                e1_13 <= data_Req;
            end else if (addr_Req == 'h400070C4) begin
                e2_0 <= data_Req;
            end else if (addr_Req == 'h400070C8) begin
                e2_1 <= data_Req;
            end else if (addr_Req == 'h400070CC) begin
                e2_2 <= data_Req;
            end else if (addr_Req == 'h400070D0) begin
                e2_3 <= data_Req;
            end else if (addr_Req == 'h40007168) begin
                // Encrypt inputs
                r[0][0] <= r_00;
                r[0][1] <= r_01;
                r[0][2] <= r_02;
                r[0][3] <= r_03;
                r[1][0] <= r_10;
                r[1][1] <= r_11;
                r[1][2] <= r_12;
                r[1][3] <= r_13;

                e1[0][0] <= e1_00;
                e1[0][1] <= e1_01;
                e1[0][2] <= e1_02;
                e1[0][3] <= e1_03;
                e1[1][0] <= e1_10;
                e1[1][1] <= e1_11;
                e1[1][2] <= e1_12;
                e1[1][3] <= e1_13;

                e2[0] <= e2_0;
                e2[1] <= e2_1;
                e2[2] <= e2_2;
                e2[3] <= e2_3;

                // Store Encrypt output in temporary registers
                ciphertext000 <= ciphertext[0][0][0];
                ciphertext001 <= ciphertext[0][0][1];
                ciphertext002 <= ciphertext[0][0][2];
                ciphertext003 <= ciphertext[0][0][3];
                ciphertext010 <= ciphertext[0][1][0];
                ciphertext011 <= ciphertext[0][1][1];
                ciphertext012 <= ciphertext[0][1][2];
                ciphertext013 <= ciphertext[0][1][3];
                ciphertext100 <= ciphertext[1][0][0];
                ciphertext101 <= ciphertext[1][0][1];
                ciphertext102 <= ciphertext[1][0][2];
                ciphertext103 <= ciphertext[1][0][3];
            end
        end
        if (decryption_enable && addr_Req == 'h4000716C) begin
            // No ciphertext assignments here; Decrypt uses ciphertext directly
            // Decryption trigger (no action needed beyond enable_decrypt)
        end
    end else if (wen_Req == 1'b0) begin 
        case (addr_Req)
            // Public Key (2x4x4 = 32 words) starting at 0x40007200
            'h40007200: data_Resp <= public_key[0][0][0];
            'h40007204: data_Resp <= public_key[0][0][1];
            'h40007208: data_Resp <= public_key[0][0][2];
            'h4000720C: data_Resp <= public_key[0][0][3];
            'h40007210: data_Resp <= public_key[0][1][0];
            'h40007214: data_Resp <= public_key[0][1][1];
            'h40007218: data_Resp <= public_key[0][1][2];
            'h4000721C: data_Resp <= public_key[0][1][3];
            'h40007220: data_Resp <= public_key[0][2][0];
            'h40007224: data_Resp <= public_key[0][2][1];
            'h40007228: data_Resp <= public_key[0][2][2];
            'h4000722C: data_Resp <= public_key[0][2][3];
            'h40007230: data_Resp <= public_key[0][3][0];
            'h40007234: data_Resp <= public_key[0][3][1];
            'h40007238: data_Resp <= public_key[0][3][2];
            'h4000723C: data_Resp <= public_key[0][3][3];
            'h40007240: data_Resp <= public_key[1][0][0];
            'h40007244: data_Resp <= public_key[1][0][1];
            'h40007248: data_Resp <= public_key[1][0][2];
            'h4000724C: data_Resp <= public_key[1][0][3];
            'h40007250: data_Resp <= public_key[1][1][0];
            'h40007254: data_Resp <= public_key[1][1][1];
            'h40007258: data_Resp <= public_key[1][1][2];
            'h4000725C: data_Resp <= public_key[1][1][3];
            'h40007260: data_Resp <= public_key[1][2][0];
            'h40007264: data_Resp <= public_key[1][2][1];
            'h40007268: data_Resp <= public_key[1][2][2];
            'h4000726C: data_Resp <= public_key[1][2][3];
            'h40007270: data_Resp <= public_key[1][3][0];
            'h40007274: data_Resp <= public_key[1][3][1];
            'h40007278: data_Resp <= public_key[1][3][2];
            'h4000727C: data_Resp <= public_key[1][3][3];

            // Ciphertext (2x2x4 = 16 words) starting at 0x40007280
            'h40007280: data_Resp <= ciphertext[0][0][0];
            'h40007284: data_Resp <= ciphertext[0][0][1];
            'h40007288: data_Resp <= ciphertext[0][0][2];
            'h4000728C: data_Resp <= ciphertext[0][0][3];
            'h40007290: data_Resp <= ciphertext[0][1][0];
            'h40007294: data_Resp <= ciphertext[0][1][1];
            'h40007298: data_Resp <= ciphertext[0][1][2];
            'h4000729C: data_Resp <= ciphertext[0][1][3];
            'h400072A0: data_Resp <= ciphertext[1][0][0];
            'h400072A4: data_Resp <= ciphertext[1][0][1];
            'h400072A8: data_Resp <= ciphertext[1][0][2];
            'h400072AC: data_Resp <= ciphertext[1][0][3];
            'h400072B0: data_Resp <= ciphertext[1][1][0];
            'h400072B4: data_Resp <= ciphertext[1][1][1];
            'h400072B8: data_Resp <= ciphertext[1][1][2];
            'h400072BC: data_Resp <= ciphertext[1][1][3];

            // Decrypted message, value, m_b
            'h400072C0: data_Resp <= message;
            'h400072C4: data_Resp <= decimal_value;
            'h400072C8: data_Resp <= {{28{m_b[3]}}, m_b}; // Sign-extend m_b to 32 bits

            default: data_Resp <= 32'b0;
        endcase
    end
end
endmodule