module InstructionFetch(
  input         clock,
  input         reset,
  input  [31:0] io_address,
  output [31:0] io_instruction,
  input         io_stall,
  input         io_coreInstrReq_ready,
  output        io_coreInstrReq_valid,
  output [31:0] io_coreInstrReq_bits_addrRequest,
  output        io_coreInstrResp_ready,
  input         io_coreInstrResp_valid,
  input  [31:0] io_coreInstrResp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state_reg; // @[InstructionFetch.scala 19:36]
  wire  _next_state_T_3 = state_reg == 2'h0 | state_reg == 2'h2 & io_coreInstrResp_valid; // @[InstructionFetch.scala 21:26]
  wire  _next_state_T_4 = state_reg == 2'h1; // @[InstructionFetch.scala 22:17]
  wire  _next_state_T_6 = ~io_stall; // @[InstructionFetch.scala 22:54]
  wire  _next_state_T_7 = state_reg == 2'h1 & io_coreInstrReq_ready & ~io_stall; // @[InstructionFetch.scala 22:51]
  wire [1:0] _next_state_T_8 = _next_state_T_7 ? 2'h2 : state_reg; // @[Mux.scala 101:16]
  wire [1:0] next_state = _next_state_T_3 ? 2'h1 : _next_state_T_8; // @[Mux.scala 101:16]
  wire [30:0] _io_coreInstrReq_bits_addrRequest_T_1 = {1'h0,io_address[31:2]}; // @[Cat.scala 33:92]
  wire [30:0] _io_coreInstrReq_bits_addrRequest_T_2 = io_coreInstrReq_ready ? _io_coreInstrReq_bits_addrRequest_T_1 : 31'h0
    ; // @[InstructionFetch.scala 33:42]
  assign io_instruction = io_coreInstrResp_valid ? io_coreInstrResp_bits_dataResponse : 32'h0; // @[InstructionFetch.scala 40:24]
  assign io_coreInstrReq_valid = _next_state_T_4 & _next_state_T_6; // @[InstructionFetch.scala 38:48]
  assign io_coreInstrReq_bits_addrRequest = {{1'd0}, _io_coreInstrReq_bits_addrRequest_T_2}; // @[InstructionFetch.scala 33:36]
  assign io_coreInstrResp_ready = state_reg == 2'h2; // @[InstructionFetch.scala 25:39]
  always @(posedge clock) begin
    if (reset) begin // @[InstructionFetch.scala 19:36]
      state_reg <= 2'h0; // @[InstructionFetch.scala 19:36]
    end else if (_next_state_T_3) begin // @[Mux.scala 101:16]
      state_reg <= 2'h1;
    end else if (_next_state_T_7) begin // @[Mux.scala 101:16]
      state_reg <= 2'h2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_reg = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CSRRegFile(
  input         clock,
  input         reset,
  input  [31:0] io_MISA_i_value,
  input  [31:0] io_MHARTID_i_value,
  input  [1:0]  io_CSR_i_opr,
  output [31:0] io_CSR_o_data,
  input  [31:0] io_CSR_i_data,
  input  [11:0] io_CSR_i_addr,
  input         io_CSR_i_w_en,
  input         io_FCSR_except_0,
  input         io_FCSR_except_1,
  input         io_FCSR_except_2,
  input         io_FCSR_except_3,
  input         io_FCSR_except_4,
  output        io_FCSR_nx,
  output        io_FCSR_uf,
  output        io_FCSR_of,
  output        io_FCSR_dz,
  output        io_FCSR_nv,
  output [2:0]  io_FCSR_frm
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] MISA_REG; // @[CSRRegFile.scala 18:38]
  reg [31:0] MHARTID_REG; // @[CSRRegFile.scala 19:38]
  reg [31:0] MCAUSE_REG; // @[CSRRegFile.scala 20:38]
  reg [31:0] MTVEC_REG; // @[CSRRegFile.scala 21:38]
  reg [31:0] MEPC_REG; // @[CSRRegFile.scala 22:38]
  reg [31:0] MIE_REG; // @[CSRRegFile.scala 23:38]
  reg  MSTATUS_TW_REG; // @[CSRRegFile.scala 26:38]
  reg  MSTATUS_MPRV_REG; // @[CSRRegFile.scala 27:38]
  reg [1:0] MSTATUS_MPP_REG; // @[CSRRegFile.scala 28:38]
  reg  MSTATUS_MPIE_REG; // @[CSRRegFile.scala 29:38]
  reg  MSTATUS_MIE_REG; // @[CSRRegFile.scala 30:38]
  reg  FCSR_NX_REG; // @[CSRRegFile.scala 33:38]
  reg  FCSR_UF_REG; // @[CSRRegFile.scala 34:38]
  reg  FCSR_OF_REG; // @[CSRRegFile.scala 35:38]
  reg  FCSR_DZ_REG; // @[CSRRegFile.scala 36:38]
  reg  FCSR_NV_REG; // @[CSRRegFile.scala 37:38]
  reg [2:0] FCSR_FRM_REG; // @[CSRRegFile.scala 38:38]
  wire [10:0] MSTATUS_WIRE_lo = {3'h0,MSTATUS_MPIE_REG,3'h0,MSTATUS_MIE_REG,3'h0}; // @[Cat.scala 33:92]
  wire [31:0] MSTATUS_WIRE = {10'h0,MSTATUS_TW_REG,3'h0,MSTATUS_MPRV_REG,4'h0,MSTATUS_MPP_REG,MSTATUS_WIRE_lo}; // @[Cat.scala 33:92]
  wire [31:0] FFLAGS_WIRE = {27'h0,FCSR_NV_REG,FCSR_DZ_REG,FCSR_OF_REG,FCSR_UF_REG,FCSR_NX_REG}; // @[Cat.scala 33:92]
  wire [31:0] FRM_WIRE = {29'h0,FCSR_FRM_REG}; // @[Cat.scala 33:92]
  wire [31:0] FCSR_WIRE = {24'h0,FCSR_FRM_REG,FCSR_NV_REG,FCSR_DZ_REG,FCSR_OF_REG,FCSR_UF_REG,FCSR_NX_REG}; // @[Cat.scala 33:92]
  wire [31:0] _r_data_T_1 = 12'h301 == io_CSR_i_addr ? MISA_REG : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _r_data_T_3 = 12'hf14 == io_CSR_i_addr ? MHARTID_REG : _r_data_T_1; // @[Mux.scala 81:58]
  wire  _r_data_T_4 = 12'h300 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_5 = 12'h300 == io_CSR_i_addr ? MSTATUS_WIRE : _r_data_T_3; // @[Mux.scala 81:58]
  wire  _r_data_T_6 = 12'h342 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_7 = 12'h342 == io_CSR_i_addr ? MCAUSE_REG : _r_data_T_5; // @[Mux.scala 81:58]
  wire  _r_data_T_8 = 12'h305 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_9 = 12'h305 == io_CSR_i_addr ? MTVEC_REG : _r_data_T_7; // @[Mux.scala 81:58]
  wire  _r_data_T_10 = 12'h341 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_11 = 12'h341 == io_CSR_i_addr ? MEPC_REG : _r_data_T_9; // @[Mux.scala 81:58]
  wire  _r_data_T_12 = 12'h304 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_13 = 12'h304 == io_CSR_i_addr ? MIE_REG : _r_data_T_11; // @[Mux.scala 81:58]
  wire  _r_data_T_14 = 12'h1 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_15 = 12'h1 == io_CSR_i_addr ? FFLAGS_WIRE : _r_data_T_13; // @[Mux.scala 81:58]
  wire  _r_data_T_16 = 12'h2 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] _r_data_T_17 = 12'h2 == io_CSR_i_addr ? FRM_WIRE : _r_data_T_15; // @[Mux.scala 81:58]
  wire  _r_data_T_18 = 12'h3 == io_CSR_i_addr; // @[Mux.scala 81:61]
  wire [31:0] r_data = 12'h3 == io_CSR_i_addr ? FCSR_WIRE : _r_data_T_17; // @[Mux.scala 81:58]
  wire [31:0] set_data = r_data | io_CSR_i_data; // @[CSRRegFile.scala 113:29]
  wire [31:0] _clear_data_T = ~io_CSR_i_data; // @[CSRRegFile.scala 114:31]
  wire [31:0] clear_data = r_data & _clear_data_T; // @[CSRRegFile.scala 114:29]
  wire [31:0] _w_data_T_1 = 2'h1 == io_CSR_i_opr ? io_CSR_i_data : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _w_data_T_3 = 2'h2 == io_CSR_i_opr ? set_data : _w_data_T_1; // @[Mux.scala 81:58]
  wire [31:0] w_data = 2'h3 == io_CSR_i_opr ? clear_data : _w_data_T_3; // @[Mux.scala 81:58]
  wire [2:0] _GEN_0 = _r_data_T_16 ? w_data[2:0] : FCSR_FRM_REG; // @[CSRRegFile.scala 125:30 161:34 38:38]
  wire  _GEN_1 = _r_data_T_14 ? w_data[0] : FCSR_NX_REG | io_FCSR_except_0; // @[CSRRegFile.scala 125:30 154:34 51:17]
  wire  _GEN_2 = _r_data_T_14 ? w_data[1] : FCSR_UF_REG | io_FCSR_except_1; // @[CSRRegFile.scala 125:30 155:34 51:17]
  wire  _GEN_3 = _r_data_T_14 ? w_data[2] : FCSR_OF_REG | io_FCSR_except_2; // @[CSRRegFile.scala 125:30 156:34 51:17]
  wire  _GEN_4 = _r_data_T_14 ? w_data[3] : FCSR_DZ_REG | io_FCSR_except_3; // @[CSRRegFile.scala 125:30 157:34 51:17]
  wire  _GEN_5 = _r_data_T_14 ? w_data[4] : FCSR_NV_REG | io_FCSR_except_4; // @[CSRRegFile.scala 125:30 158:34 51:17]
  wire [2:0] _GEN_6 = _r_data_T_14 ? FCSR_FRM_REG : _GEN_0; // @[CSRRegFile.scala 125:30 38:38]
  wire  _GEN_7 = _r_data_T_18 ? w_data[0] : _GEN_1; // @[CSRRegFile.scala 125:30 146:34]
  wire  _GEN_8 = _r_data_T_18 ? w_data[1] : _GEN_2; // @[CSRRegFile.scala 125:30 147:34]
  wire  _GEN_9 = _r_data_T_18 ? w_data[2] : _GEN_3; // @[CSRRegFile.scala 125:30 148:34]
  wire  _GEN_10 = _r_data_T_18 ? w_data[3] : _GEN_4; // @[CSRRegFile.scala 125:30 149:34]
  wire  _GEN_11 = _r_data_T_18 ? w_data[4] : _GEN_5; // @[CSRRegFile.scala 125:30 150:34]
  wire [2:0] _GEN_12 = _r_data_T_18 ? w_data[7:5] : _GEN_6; // @[CSRRegFile.scala 125:30 151:34]
  wire [31:0] _GEN_13 = _r_data_T_12 ? w_data : MIE_REG; // @[CSRRegFile.scala 125:30 143:34 23:38]
  wire  _GEN_14 = _r_data_T_12 ? FCSR_NX_REG | io_FCSR_except_0 : _GEN_7; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_15 = _r_data_T_12 ? FCSR_UF_REG | io_FCSR_except_1 : _GEN_8; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_16 = _r_data_T_12 ? FCSR_OF_REG | io_FCSR_except_2 : _GEN_9; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_17 = _r_data_T_12 ? FCSR_DZ_REG | io_FCSR_except_3 : _GEN_10; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_18 = _r_data_T_12 ? FCSR_NV_REG | io_FCSR_except_4 : _GEN_11; // @[CSRRegFile.scala 125:30 51:17]
  wire [2:0] _GEN_19 = _r_data_T_12 ? FCSR_FRM_REG : _GEN_12; // @[CSRRegFile.scala 125:30 38:38]
  wire [31:0] _GEN_20 = _r_data_T_10 ? w_data : MEPC_REG; // @[CSRRegFile.scala 125:30 140:34 22:38]
  wire [31:0] _GEN_21 = _r_data_T_10 ? MIE_REG : _GEN_13; // @[CSRRegFile.scala 125:30 23:38]
  wire  _GEN_22 = _r_data_T_10 ? FCSR_NX_REG | io_FCSR_except_0 : _GEN_14; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_23 = _r_data_T_10 ? FCSR_UF_REG | io_FCSR_except_1 : _GEN_15; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_24 = _r_data_T_10 ? FCSR_OF_REG | io_FCSR_except_2 : _GEN_16; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_25 = _r_data_T_10 ? FCSR_DZ_REG | io_FCSR_except_3 : _GEN_17; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_26 = _r_data_T_10 ? FCSR_NV_REG | io_FCSR_except_4 : _GEN_18; // @[CSRRegFile.scala 125:30 51:17]
  wire [2:0] _GEN_27 = _r_data_T_10 ? FCSR_FRM_REG : _GEN_19; // @[CSRRegFile.scala 125:30 38:38]
  wire [31:0] _GEN_28 = _r_data_T_8 ? w_data : MTVEC_REG; // @[CSRRegFile.scala 125:30 137:34 21:38]
  wire [31:0] _GEN_29 = _r_data_T_8 ? MEPC_REG : _GEN_20; // @[CSRRegFile.scala 125:30 22:38]
  wire [31:0] _GEN_30 = _r_data_T_8 ? MIE_REG : _GEN_21; // @[CSRRegFile.scala 125:30 23:38]
  wire  _GEN_31 = _r_data_T_8 ? FCSR_NX_REG | io_FCSR_except_0 : _GEN_22; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_32 = _r_data_T_8 ? FCSR_UF_REG | io_FCSR_except_1 : _GEN_23; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_33 = _r_data_T_8 ? FCSR_OF_REG | io_FCSR_except_2 : _GEN_24; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_34 = _r_data_T_8 ? FCSR_DZ_REG | io_FCSR_except_3 : _GEN_25; // @[CSRRegFile.scala 125:30 51:17]
  wire  _GEN_35 = _r_data_T_8 ? FCSR_NV_REG | io_FCSR_except_4 : _GEN_26; // @[CSRRegFile.scala 125:30 51:17]
  wire [2:0] _GEN_36 = _r_data_T_8 ? FCSR_FRM_REG : _GEN_27; // @[CSRRegFile.scala 125:30 38:38]
  assign io_CSR_o_data = 12'h3 == io_CSR_i_addr ? FCSR_WIRE : _r_data_T_17; // @[Mux.scala 81:58]
  assign io_FCSR_nx = FCSR_NX_REG; // @[CSRRegFile.scala 53:29]
  assign io_FCSR_uf = FCSR_UF_REG; // @[CSRRegFile.scala 54:29]
  assign io_FCSR_of = FCSR_OF_REG; // @[CSRRegFile.scala 55:29]
  assign io_FCSR_dz = FCSR_DZ_REG; // @[CSRRegFile.scala 56:29]
  assign io_FCSR_nv = FCSR_NV_REG; // @[CSRRegFile.scala 57:29]
  assign io_FCSR_frm = FCSR_FRM_REG; // @[CSRRegFile.scala 58:29]
  always @(posedge clock) begin
    if (reset) begin // @[CSRRegFile.scala 18:38]
      MISA_REG <= 32'h0; // @[CSRRegFile.scala 18:38]
    end else begin
      MISA_REG <= io_MISA_i_value; // @[CSRRegFile.scala 41:29]
    end
    if (reset) begin // @[CSRRegFile.scala 19:38]
      MHARTID_REG <= 32'h0; // @[CSRRegFile.scala 19:38]
    end else begin
      MHARTID_REG <= io_MHARTID_i_value; // @[CSRRegFile.scala 42:29]
    end
    if (reset) begin // @[CSRRegFile.scala 20:38]
      MCAUSE_REG <= 32'h0; // @[CSRRegFile.scala 20:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 125:30]
        if (_r_data_T_6) begin // @[CSRRegFile.scala 125:30]
          MCAUSE_REG <= w_data; // @[CSRRegFile.scala 134:34]
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 21:38]
      MTVEC_REG <= 32'h0; // @[CSRRegFile.scala 21:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 125:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 125:30]
          MTVEC_REG <= _GEN_28;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 22:38]
      MEPC_REG <= 32'h0; // @[CSRRegFile.scala 22:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 125:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 125:30]
          MEPC_REG <= _GEN_29;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 23:38]
      MIE_REG <= 32'h0; // @[CSRRegFile.scala 23:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 125:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 125:30]
          MIE_REG <= _GEN_30;
        end
      end
    end
    if (reset) begin // @[CSRRegFile.scala 26:38]
      MSTATUS_TW_REG <= 1'h0; // @[CSRRegFile.scala 26:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        MSTATUS_TW_REG <= w_data[21]; // @[CSRRegFile.scala 127:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 27:38]
      MSTATUS_MPRV_REG <= 1'h0; // @[CSRRegFile.scala 27:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        MSTATUS_MPRV_REG <= w_data[17]; // @[CSRRegFile.scala 128:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 28:38]
      MSTATUS_MPP_REG <= 2'h0; // @[CSRRegFile.scala 28:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        MSTATUS_MPP_REG <= w_data[12:11]; // @[CSRRegFile.scala 129:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 29:38]
      MSTATUS_MPIE_REG <= 1'h0; // @[CSRRegFile.scala 29:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        MSTATUS_MPIE_REG <= w_data[7]; // @[CSRRegFile.scala 130:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 30:38]
      MSTATUS_MIE_REG <= 1'h0; // @[CSRRegFile.scala 30:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        MSTATUS_MIE_REG <= w_data[3]; // @[CSRRegFile.scala 131:34]
      end
    end
    if (reset) begin // @[CSRRegFile.scala 33:38]
      FCSR_NX_REG <= 1'h0; // @[CSRRegFile.scala 33:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        FCSR_NX_REG <= FCSR_NX_REG | io_FCSR_except_0; // @[CSRRegFile.scala 51:17]
      end else if (_r_data_T_6) begin // @[CSRRegFile.scala 125:30]
        FCSR_NX_REG <= FCSR_NX_REG | io_FCSR_except_0; // @[CSRRegFile.scala 51:17]
      end else begin
        FCSR_NX_REG <= _GEN_31;
      end
    end else begin
      FCSR_NX_REG <= FCSR_NX_REG | io_FCSR_except_0; // @[CSRRegFile.scala 51:17]
    end
    if (reset) begin // @[CSRRegFile.scala 34:38]
      FCSR_UF_REG <= 1'h0; // @[CSRRegFile.scala 34:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        FCSR_UF_REG <= FCSR_UF_REG | io_FCSR_except_1; // @[CSRRegFile.scala 51:17]
      end else if (_r_data_T_6) begin // @[CSRRegFile.scala 125:30]
        FCSR_UF_REG <= FCSR_UF_REG | io_FCSR_except_1; // @[CSRRegFile.scala 51:17]
      end else begin
        FCSR_UF_REG <= _GEN_32;
      end
    end else begin
      FCSR_UF_REG <= FCSR_UF_REG | io_FCSR_except_1; // @[CSRRegFile.scala 51:17]
    end
    if (reset) begin // @[CSRRegFile.scala 35:38]
      FCSR_OF_REG <= 1'h0; // @[CSRRegFile.scala 35:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        FCSR_OF_REG <= FCSR_OF_REG | io_FCSR_except_2; // @[CSRRegFile.scala 51:17]
      end else if (_r_data_T_6) begin // @[CSRRegFile.scala 125:30]
        FCSR_OF_REG <= FCSR_OF_REG | io_FCSR_except_2; // @[CSRRegFile.scala 51:17]
      end else begin
        FCSR_OF_REG <= _GEN_33;
      end
    end else begin
      FCSR_OF_REG <= FCSR_OF_REG | io_FCSR_except_2; // @[CSRRegFile.scala 51:17]
    end
    if (reset) begin // @[CSRRegFile.scala 36:38]
      FCSR_DZ_REG <= 1'h0; // @[CSRRegFile.scala 36:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        FCSR_DZ_REG <= FCSR_DZ_REG | io_FCSR_except_3; // @[CSRRegFile.scala 51:17]
      end else if (_r_data_T_6) begin // @[CSRRegFile.scala 125:30]
        FCSR_DZ_REG <= FCSR_DZ_REG | io_FCSR_except_3; // @[CSRRegFile.scala 51:17]
      end else begin
        FCSR_DZ_REG <= _GEN_34;
      end
    end else begin
      FCSR_DZ_REG <= FCSR_DZ_REG | io_FCSR_except_3; // @[CSRRegFile.scala 51:17]
    end
    if (reset) begin // @[CSRRegFile.scala 37:38]
      FCSR_NV_REG <= 1'h0; // @[CSRRegFile.scala 37:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (_r_data_T_4) begin // @[CSRRegFile.scala 125:30]
        FCSR_NV_REG <= FCSR_NV_REG | io_FCSR_except_4; // @[CSRRegFile.scala 51:17]
      end else if (_r_data_T_6) begin // @[CSRRegFile.scala 125:30]
        FCSR_NV_REG <= FCSR_NV_REG | io_FCSR_except_4; // @[CSRRegFile.scala 51:17]
      end else begin
        FCSR_NV_REG <= _GEN_35;
      end
    end else begin
      FCSR_NV_REG <= FCSR_NV_REG | io_FCSR_except_4; // @[CSRRegFile.scala 51:17]
    end
    if (reset) begin // @[CSRRegFile.scala 38:38]
      FCSR_FRM_REG <= 3'h0; // @[CSRRegFile.scala 38:38]
    end else if (io_CSR_i_w_en) begin // @[CSRRegFile.scala 124:24]
      if (!(_r_data_T_4)) begin // @[CSRRegFile.scala 125:30]
        if (!(_r_data_T_6)) begin // @[CSRRegFile.scala 125:30]
          FCSR_FRM_REG <= _GEN_36;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  MISA_REG = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  MHARTID_REG = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  MCAUSE_REG = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  MTVEC_REG = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  MEPC_REG = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  MIE_REG = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  MSTATUS_TW_REG = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  MSTATUS_MPRV_REG = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  MSTATUS_MPP_REG = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  MSTATUS_MPIE_REG = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  MSTATUS_MIE_REG = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  FCSR_NX_REG = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  FCSR_UF_REG = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  FCSR_OF_REG = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  FCSR_DZ_REG = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  FCSR_NV_REG = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  FCSR_FRM_REG = _RAND_16[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CSR(
  input         clock,
  input         reset,
  input  [31:0] io_i_data,
  input  [4:0]  io_i_imm,
  output [31:0] io_o_data,
  input  [2:0]  io_i_opr,
  input  [11:0] io_i_addr,
  input         io_i_w_en,
  input         io_f_except_0,
  input         io_f_except_1,
  input         io_f_except_2,
  input         io_f_except_3,
  input         io_f_except_4,
  output [31:0] io_fcsr_o_data
);
  wire  csrRegFile_clock; // @[CSR.scala 21:28]
  wire  csrRegFile_reset; // @[CSR.scala 21:28]
  wire [31:0] csrRegFile_io_MISA_i_value; // @[CSR.scala 21:28]
  wire [31:0] csrRegFile_io_MHARTID_i_value; // @[CSR.scala 21:28]
  wire [1:0] csrRegFile_io_CSR_i_opr; // @[CSR.scala 21:28]
  wire [31:0] csrRegFile_io_CSR_o_data; // @[CSR.scala 21:28]
  wire [31:0] csrRegFile_io_CSR_i_data; // @[CSR.scala 21:28]
  wire [11:0] csrRegFile_io_CSR_i_addr; // @[CSR.scala 21:28]
  wire  csrRegFile_io_CSR_i_w_en; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_except_0; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_except_1; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_except_2; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_except_3; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_except_4; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_nx; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_uf; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_of; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_dz; // @[CSR.scala 21:28]
  wire  csrRegFile_io_FCSR_nv; // @[CSR.scala 21:28]
  wire [2:0] csrRegFile_io_FCSR_frm; // @[CSR.scala 21:28]
  wire [2:0] io_fcsr_o_data_lo = {csrRegFile_io_FCSR_of,csrRegFile_io_FCSR_uf,csrRegFile_io_FCSR_nx}; // @[Cat.scala 33:92]
  wire [28:0] io_fcsr_o_data_hi = {24'h0,csrRegFile_io_FCSR_frm,csrRegFile_io_FCSR_nv,csrRegFile_io_FCSR_dz}; // @[Cat.scala 33:92]
  CSRRegFile csrRegFile ( // @[CSR.scala 21:28]
    .clock(csrRegFile_clock),
    .reset(csrRegFile_reset),
    .io_MISA_i_value(csrRegFile_io_MISA_i_value),
    .io_MHARTID_i_value(csrRegFile_io_MHARTID_i_value),
    .io_CSR_i_opr(csrRegFile_io_CSR_i_opr),
    .io_CSR_o_data(csrRegFile_io_CSR_o_data),
    .io_CSR_i_data(csrRegFile_io_CSR_i_data),
    .io_CSR_i_addr(csrRegFile_io_CSR_i_addr),
    .io_CSR_i_w_en(csrRegFile_io_CSR_i_w_en),
    .io_FCSR_except_0(csrRegFile_io_FCSR_except_0),
    .io_FCSR_except_1(csrRegFile_io_FCSR_except_1),
    .io_FCSR_except_2(csrRegFile_io_FCSR_except_2),
    .io_FCSR_except_3(csrRegFile_io_FCSR_except_3),
    .io_FCSR_except_4(csrRegFile_io_FCSR_except_4),
    .io_FCSR_nx(csrRegFile_io_FCSR_nx),
    .io_FCSR_uf(csrRegFile_io_FCSR_uf),
    .io_FCSR_of(csrRegFile_io_FCSR_of),
    .io_FCSR_dz(csrRegFile_io_FCSR_dz),
    .io_FCSR_nv(csrRegFile_io_FCSR_nv),
    .io_FCSR_frm(csrRegFile_io_FCSR_frm)
  );
  assign io_o_data = csrRegFile_io_CSR_o_data; // @[CSR.scala 32:37]
  assign io_fcsr_o_data = {io_fcsr_o_data_hi,io_fcsr_o_data_lo}; // @[Cat.scala 33:92]
  assign csrRegFile_clock = clock;
  assign csrRegFile_reset = reset;
  assign csrRegFile_io_MISA_i_value = 32'h0; // @[CSR.scala 26:37]
  assign csrRegFile_io_MHARTID_i_value = 32'h0; // @[CSR.scala 27:37]
  assign csrRegFile_io_CSR_i_opr = io_i_opr[1:0]; // @[CSR.scala 25:37]
  assign csrRegFile_io_CSR_i_data = io_i_opr[2] ? {{27'd0}, io_i_imm} : io_i_data; // @[CSR.scala 24:43]
  assign csrRegFile_io_CSR_i_addr = io_i_addr; // @[CSR.scala 28:37]
  assign csrRegFile_io_CSR_i_w_en = io_i_w_en; // @[CSR.scala 29:37]
  assign csrRegFile_io_FCSR_except_0 = io_f_except_0; // @[CSR.scala 30:37]
  assign csrRegFile_io_FCSR_except_1 = io_f_except_1; // @[CSR.scala 30:37]
  assign csrRegFile_io_FCSR_except_2 = io_f_except_2; // @[CSR.scala 30:37]
  assign csrRegFile_io_FCSR_except_3 = io_f_except_3; // @[CSR.scala 30:37]
  assign csrRegFile_io_FCSR_except_4 = io_f_except_4; // @[CSR.scala 30:37]
endmodule
module CSRController(
  input        io_regWrExecute,
  input  [4:0] io_rdSelExecute,
  input        io_csrWrExecute,
  input        io_regWrMemory,
  input  [4:0] io_rdSelMemory,
  input        io_csrWrMemory,
  input        io_regWrWriteback,
  input  [4:0] io_rdSelWriteback,
  input        io_csrWrWriteback,
  input  [4:0] io_rs1SelDecode,
  input        io_csrInstDecode,
  output [2:0] io_forwardRS1
);
  wire  _hazard_DecEx_T = io_regWrExecute & io_csrInstDecode; // @[CSRController.scala 33:44]
  wire  _hazard_DecEx_T_3 = |io_rdSelExecute; // @[CSRController.scala 36:44]
  wire  _hazard_DecEx_T_4 = _hazard_DecEx_T & _hazard_DecEx_T_3; // @[CSRController.scala 35:46]
  wire  _hazard_DecEx_T_5 = ~io_csrWrExecute; // @[CSRController.scala 37:28]
  wire  _hazard_DecEx_T_6 = _hazard_DecEx_T_4 & _hazard_DecEx_T_5; // @[CSRController.scala 36:48]
  wire  _hazard_DecEx_T_7 = io_rdSelExecute == io_rs1SelDecode; // @[CSRController.scala 38:44]
  wire  hazard_DecEx = _hazard_DecEx_T_6 & _hazard_DecEx_T_7; // @[CSRController.scala 37:45]
  wire  _hazard_DecMem_T = io_regWrMemory & io_csrInstDecode; // @[CSRController.scala 42:44]
  wire  _hazard_DecMem_T_3 = |io_rdSelMemory; // @[CSRController.scala 45:43]
  wire  _hazard_DecMem_T_4 = _hazard_DecMem_T & _hazard_DecMem_T_3; // @[CSRController.scala 44:46]
  wire  _hazard_DecMem_T_5 = ~io_csrWrMemory; // @[CSRController.scala 46:28]
  wire  _hazard_DecMem_T_6 = _hazard_DecMem_T_4 & _hazard_DecMem_T_5; // @[CSRController.scala 45:47]
  wire  _hazard_DecMem_T_7 = io_rdSelMemory == io_rs1SelDecode; // @[CSRController.scala 47:43]
  wire  _hazard_DecMem_T_8 = _hazard_DecMem_T_6 & _hazard_DecMem_T_7; // @[CSRController.scala 46:44]
  wire  _hazard_DecMem_T_9 = ~hazard_DecEx; // @[CSRController.scala 48:28]
  wire  hazard_DecMem = _hazard_DecMem_T_8 & _hazard_DecMem_T_9; // @[CSRController.scala 47:63]
  wire  _hazard_DecWb_T = io_regWrWriteback & io_csrInstDecode; // @[CSRController.scala 52:46]
  wire  _hazard_DecWb_T_3 = |io_rdSelWriteback; // @[CSRController.scala 55:46]
  wire  _hazard_DecWb_T_4 = _hazard_DecWb_T & _hazard_DecWb_T_3; // @[CSRController.scala 54:46]
  wire  _hazard_DecWb_T_5 = ~io_csrWrWriteback; // @[CSRController.scala 56:28]
  wire  _hazard_DecWb_T_6 = _hazard_DecWb_T_4 & _hazard_DecWb_T_5; // @[CSRController.scala 55:50]
  wire  _hazard_DecWb_T_7 = io_rdSelWriteback == io_rs1SelDecode; // @[CSRController.scala 57:46]
  wire  _hazard_DecWb_T_8 = _hazard_DecWb_T_6 & _hazard_DecWb_T_7; // @[CSRController.scala 56:47]
  wire  _hazard_DecWb_T_10 = _hazard_DecWb_T_8 & _hazard_DecMem_T_9; // @[CSRController.scala 57:66]
  wire  hazard_DecWb = _hazard_DecWb_T_10 & hazard_DecMem; // @[CSRController.scala 58:42]
  wire  _csrHazard_DecEx_T_5 = _hazard_DecEx_T_4 & io_csrWrExecute; // @[CSRController.scala 66:48]
  wire  csrHazard_DecEx = _csrHazard_DecEx_T_5 & _hazard_DecEx_T_7; // @[CSRController.scala 67:44]
  wire  _csrHazard_DecMem_T_5 = _hazard_DecMem_T_4 & io_csrWrMemory; // @[CSRController.scala 75:47]
  wire  _csrHazard_DecMem_T_7 = _csrHazard_DecMem_T_5 & _hazard_DecMem_T_7; // @[CSRController.scala 76:43]
  wire  _csrHazard_DecMem_T_8 = ~csrHazard_DecEx; // @[CSRController.scala 78:28]
  wire  csrHazard_DecMem = _csrHazard_DecMem_T_7 & _csrHazard_DecMem_T_8; // @[CSRController.scala 77:63]
  wire  _csrHazard_DecWb_T_5 = _hazard_DecWb_T_4 & io_csrWrWriteback; // @[CSRController.scala 85:50]
  wire  _csrHazard_DecWb_T_7 = _csrHazard_DecWb_T_5 & _hazard_DecWb_T_7; // @[CSRController.scala 86:46]
  wire  _csrHazard_DecWb_T_9 = _csrHazard_DecWb_T_7 & _csrHazard_DecMem_T_8; // @[CSRController.scala 87:66]
  wire  csrHazard_DecWb = _csrHazard_DecWb_T_9 & csrHazard_DecMem; // @[CSRController.scala 88:45]
  wire [1:0] _io_forwardRS1_T_3 = hazard_DecMem ? 2'h2 : {{1'd0}, hazard_DecEx}; // @[Mux.scala 81:58]
  wire [1:0] _io_forwardRS1_T_5 = hazard_DecWb ? 2'h3 : _io_forwardRS1_T_3; // @[Mux.scala 81:58]
  wire [2:0] _io_forwardRS1_T_7 = csrHazard_DecEx ? 3'h4 : {{1'd0}, _io_forwardRS1_T_5}; // @[Mux.scala 81:58]
  wire [2:0] _io_forwardRS1_T_9 = csrHazard_DecMem ? 3'h5 : _io_forwardRS1_T_7; // @[Mux.scala 81:58]
  assign io_forwardRS1 = csrHazard_DecWb ? 3'h6 : _io_forwardRS1_T_9; // @[Mux.scala 81:58]
endmodule
module HazardUnit(
  input        io_taken,
  input  [1:0] io_jump,
  output       io_pc_write,
  output       io_ifid_flush
);
  assign io_pc_write = 1'h1; // @[HazardUnit.scala 26:26]
  assign io_ifid_flush = io_taken | io_jump != 2'h0; // @[HazardUnit.scala 57:17]
endmodule
module Control(
  input  [31:0] io_in,
  output        io_aluSrc,
  output [1:0]  io_memToReg,
  output        io_regWrite,
  output        io_memRead,
  output        io_memWrite,
  output        io_branch,
  output [1:0]  io_aluOp,
  output [1:0]  io_jump,
  output [1:0]  io_aluSrc1,
  output        io_f_read_0,
  output        io_f_read_1,
  output        io_f_read_2,
  output        io_f_wr
);
  wire [31:0] _signals_T = io_in & 32'h7f; // @[Lookup.scala 31:38]
  wire  _signals_T_1 = 32'h33 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_3 = 32'h13 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_5 = 32'h73 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_7 = 32'h3 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_9 = 32'h23 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_11 = 32'h63 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_13 = 32'h37 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_15 = 32'h17 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_17 = 32'h6f == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_19 = 32'h67 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_21 = 32'h7 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_23 = 32'h27 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_25 = 32'h43 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_27 = 32'h47 == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_29 = 32'h4b == _signals_T; // @[Lookup.scala 31:38]
  wire  _signals_T_31 = 32'h4f == _signals_T; // @[Lookup.scala 31:38]
  wire [31:0] _signals_T_32 = io_in & 32'hfe00007f; // @[Lookup.scala 31:38]
  wire  _signals_T_33 = 32'h53 == _signals_T_32; // @[Lookup.scala 31:38]
  wire  _signals_T_35 = 32'h8000053 == _signals_T_32; // @[Lookup.scala 31:38]
  wire  _signals_T_37 = 32'h10000053 == _signals_T_32; // @[Lookup.scala 31:38]
  wire  _signals_T_39 = 32'h18000053 == _signals_T_32; // @[Lookup.scala 31:38]
  wire  _signals_T_41 = 32'h58000053 == _signals_T_32; // @[Lookup.scala 31:38]
  wire [31:0] _signals_T_42 = io_in & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _signals_T_43 = 32'h20000053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_45 = 32'h20001053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_47 = 32'h20002053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_49 = 32'h28000053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_51 = 32'h28001053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire [31:0] _signals_T_52 = io_in & 32'hfff0007f; // @[Lookup.scala 31:38]
  wire  _signals_T_53 = 32'hd0000053 == _signals_T_52; // @[Lookup.scala 31:38]
  wire  _signals_T_55 = 32'hd0100053 == _signals_T_52; // @[Lookup.scala 31:38]
  wire  _signals_T_57 = 32'hf0000053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_59 = 32'hc0000053 == _signals_T_52; // @[Lookup.scala 31:38]
  wire  _signals_T_61 = 32'hc0100053 == _signals_T_52; // @[Lookup.scala 31:38]
  wire  _signals_T_63 = 32'he0000053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_65 = 32'ha0002053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_67 = 32'ha0001053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_69 = 32'ha0000053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_71 = 32'he0001053 == _signals_T_42; // @[Lookup.scala 31:38]
  wire  _signals_T_96 = _signals_T_23 ? 1'h0 : _signals_T_25 | (_signals_T_27 | (_signals_T_29 | (_signals_T_31 | (
    _signals_T_33 | (_signals_T_35 | (_signals_T_37 | (_signals_T_39 | (_signals_T_41 | (_signals_T_43 | (_signals_T_45
     | (_signals_T_47 | (_signals_T_49 | (_signals_T_51 | (_signals_T_53 | (_signals_T_55 | (_signals_T_57 | (
    _signals_T_59 | (_signals_T_61 | (_signals_T_63 | (_signals_T_65 | (_signals_T_67 | (_signals_T_69 | _signals_T_71))
    )))))))))))))))))))); // @[Lookup.scala 34:39]
  wire  _signals_T_97 = _signals_T_21 ? 1'h0 : _signals_T_96; // @[Lookup.scala 34:39]
  wire  _signals_T_98 = _signals_T_19 ? 1'h0 : _signals_T_97; // @[Lookup.scala 34:39]
  wire  _signals_T_99 = _signals_T_17 ? 1'h0 : _signals_T_98; // @[Lookup.scala 34:39]
  wire  _signals_T_100 = _signals_T_15 ? 1'h0 : _signals_T_99; // @[Lookup.scala 34:39]
  wire  _signals_T_101 = _signals_T_13 ? 1'h0 : _signals_T_100; // @[Lookup.scala 34:39]
  wire  _signals_T_103 = _signals_T_9 ? 1'h0 : _signals_T_11 | _signals_T_101; // @[Lookup.scala 34:39]
  wire  _signals_T_104 = _signals_T_7 ? 1'h0 : _signals_T_103; // @[Lookup.scala 34:39]
  wire  _signals_T_105 = _signals_T_5 ? 1'h0 : _signals_T_104; // @[Lookup.scala 34:39]
  wire  _signals_T_106 = _signals_T_3 ? 1'h0 : _signals_T_105; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_133 = _signals_T_19 ? 2'h2 : {{1'd0}, _signals_T_21}; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_134 = _signals_T_17 ? 2'h2 : _signals_T_133; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_135 = _signals_T_15 ? 2'h0 : _signals_T_134; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_136 = _signals_T_13 ? 2'h0 : _signals_T_135; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_137 = _signals_T_11 ? 2'h0 : _signals_T_136; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_138 = _signals_T_9 ? 2'h0 : _signals_T_137; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_139 = _signals_T_7 ? 2'h1 : _signals_T_138; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_140 = _signals_T_5 ? 2'h0 : _signals_T_139; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_141 = _signals_T_3 ? 2'h0 : _signals_T_140; // @[Lookup.scala 34:39]
  wire  _signals_T_149 = _signals_T_57 ? 1'h0 : _signals_T_59 | (_signals_T_61 | (_signals_T_63 | (_signals_T_65 | (
    _signals_T_67 | (_signals_T_69 | _signals_T_71))))); // @[Lookup.scala 34:39]
  wire  _signals_T_150 = _signals_T_55 ? 1'h0 : _signals_T_149; // @[Lookup.scala 34:39]
  wire  _signals_T_151 = _signals_T_53 ? 1'h0 : _signals_T_150; // @[Lookup.scala 34:39]
  wire  _signals_T_152 = _signals_T_51 ? 1'h0 : _signals_T_151; // @[Lookup.scala 34:39]
  wire  _signals_T_153 = _signals_T_49 ? 1'h0 : _signals_T_152; // @[Lookup.scala 34:39]
  wire  _signals_T_154 = _signals_T_47 ? 1'h0 : _signals_T_153; // @[Lookup.scala 34:39]
  wire  _signals_T_155 = _signals_T_45 ? 1'h0 : _signals_T_154; // @[Lookup.scala 34:39]
  wire  _signals_T_156 = _signals_T_43 ? 1'h0 : _signals_T_155; // @[Lookup.scala 34:39]
  wire  _signals_T_157 = _signals_T_41 ? 1'h0 : _signals_T_156; // @[Lookup.scala 34:39]
  wire  _signals_T_158 = _signals_T_39 ? 1'h0 : _signals_T_157; // @[Lookup.scala 34:39]
  wire  _signals_T_159 = _signals_T_37 ? 1'h0 : _signals_T_158; // @[Lookup.scala 34:39]
  wire  _signals_T_160 = _signals_T_35 ? 1'h0 : _signals_T_159; // @[Lookup.scala 34:39]
  wire  _signals_T_161 = _signals_T_33 ? 1'h0 : _signals_T_160; // @[Lookup.scala 34:39]
  wire  _signals_T_162 = _signals_T_31 ? 1'h0 : _signals_T_161; // @[Lookup.scala 34:39]
  wire  _signals_T_163 = _signals_T_29 ? 1'h0 : _signals_T_162; // @[Lookup.scala 34:39]
  wire  _signals_T_164 = _signals_T_27 ? 1'h0 : _signals_T_163; // @[Lookup.scala 34:39]
  wire  _signals_T_165 = _signals_T_25 ? 1'h0 : _signals_T_164; // @[Lookup.scala 34:39]
  wire  _signals_T_166 = _signals_T_23 ? 1'h0 : _signals_T_165; // @[Lookup.scala 34:39]
  wire  _signals_T_167 = _signals_T_21 ? 1'h0 : _signals_T_166; // @[Lookup.scala 34:39]
  wire  _signals_T_172 = _signals_T_11 ? 1'h0 : _signals_T_13 | (_signals_T_15 | (_signals_T_17 | (_signals_T_19 |
    _signals_T_167))); // @[Lookup.scala 34:39]
  wire  _signals_T_173 = _signals_T_9 ? 1'h0 : _signals_T_172; // @[Lookup.scala 34:39]
  wire  _signals_T_203 = _signals_T_19 ? 1'h0 : _signals_T_21; // @[Lookup.scala 34:39]
  wire  _signals_T_204 = _signals_T_17 ? 1'h0 : _signals_T_203; // @[Lookup.scala 34:39]
  wire  _signals_T_205 = _signals_T_15 ? 1'h0 : _signals_T_204; // @[Lookup.scala 34:39]
  wire  _signals_T_206 = _signals_T_13 ? 1'h0 : _signals_T_205; // @[Lookup.scala 34:39]
  wire  _signals_T_207 = _signals_T_11 ? 1'h0 : _signals_T_206; // @[Lookup.scala 34:39]
  wire  _signals_T_208 = _signals_T_9 ? 1'h0 : _signals_T_207; // @[Lookup.scala 34:39]
  wire  _signals_T_210 = _signals_T_5 ? 1'h0 : _signals_T_7 | _signals_T_208; // @[Lookup.scala 34:39]
  wire  _signals_T_211 = _signals_T_3 ? 1'h0 : _signals_T_210; // @[Lookup.scala 34:39]
  wire  _signals_T_237 = _signals_T_21 ? 1'h0 : _signals_T_23; // @[Lookup.scala 34:39]
  wire  _signals_T_238 = _signals_T_19 ? 1'h0 : _signals_T_237; // @[Lookup.scala 34:39]
  wire  _signals_T_239 = _signals_T_17 ? 1'h0 : _signals_T_238; // @[Lookup.scala 34:39]
  wire  _signals_T_240 = _signals_T_15 ? 1'h0 : _signals_T_239; // @[Lookup.scala 34:39]
  wire  _signals_T_241 = _signals_T_13 ? 1'h0 : _signals_T_240; // @[Lookup.scala 34:39]
  wire  _signals_T_242 = _signals_T_11 ? 1'h0 : _signals_T_241; // @[Lookup.scala 34:39]
  wire  _signals_T_244 = _signals_T_7 ? 1'h0 : _signals_T_9 | _signals_T_242; // @[Lookup.scala 34:39]
  wire  _signals_T_245 = _signals_T_5 ? 1'h0 : _signals_T_244; // @[Lookup.scala 34:39]
  wire  _signals_T_246 = _signals_T_3 ? 1'h0 : _signals_T_245; // @[Lookup.scala 34:39]
  wire  _signals_T_278 = _signals_T_9 ? 1'h0 : _signals_T_11; // @[Lookup.scala 34:39]
  wire  _signals_T_279 = _signals_T_7 ? 1'h0 : _signals_T_278; // @[Lookup.scala 34:39]
  wire  _signals_T_280 = _signals_T_5 ? 1'h0 : _signals_T_279; // @[Lookup.scala 34:39]
  wire  _signals_T_281 = _signals_T_3 ? 1'h0 : _signals_T_280; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_308 = _signals_T_19 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_309 = _signals_T_17 ? 2'h1 : _signals_T_308; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_310 = _signals_T_15 ? 2'h0 : _signals_T_309; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_311 = _signals_T_13 ? 2'h0 : _signals_T_310; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_312 = _signals_T_11 ? 2'h0 : _signals_T_311; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_313 = _signals_T_9 ? 2'h0 : _signals_T_312; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_314 = _signals_T_7 ? 2'h0 : _signals_T_313; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_315 = _signals_T_5 ? 2'h0 : _signals_T_314; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_316 = _signals_T_3 ? 2'h0 : _signals_T_315; // @[Lookup.scala 34:39]
  wire  _signals_T_347 = _signals_T_11 ? 1'h0 : _signals_T_101; // @[Lookup.scala 34:39]
  wire  _signals_T_348 = _signals_T_9 ? 1'h0 : _signals_T_347; // @[Lookup.scala 34:39]
  wire  _signals_T_349 = _signals_T_7 ? 1'h0 : _signals_T_348; // @[Lookup.scala 34:39]
  wire  _signals_T_350 = _signals_T_5 | _signals_T_349; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_351 = _signals_T_3 ? 2'h2 : {{1'd0}, _signals_T_350}; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_381 = _signals_T_13 ? 2'h2 : {{1'd0}, _signals_T_15}; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_382 = _signals_T_11 ? 2'h0 : _signals_T_381; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_383 = _signals_T_9 ? 2'h0 : _signals_T_382; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_384 = _signals_T_7 ? 2'h0 : _signals_T_383; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_385 = _signals_T_5 ? 2'h0 : _signals_T_384; // @[Lookup.scala 34:39]
  wire [1:0] _signals_T_386 = _signals_T_3 ? 2'h0 : _signals_T_385; // @[Lookup.scala 34:39]
  assign io_aluSrc = _signals_T_1 | _signals_T_106; // @[Lookup.scala 34:39]
  assign io_memToReg = _signals_T_1 ? 2'h0 : _signals_T_141; // @[Lookup.scala 34:39]
  assign io_regWrite = _signals_T_1 | (_signals_T_3 | (_signals_T_5 | (_signals_T_7 | _signals_T_173))); // @[Lookup.scala 34:39]
  assign io_memRead = _signals_T_1 ? 1'h0 : _signals_T_211; // @[Lookup.scala 34:39]
  assign io_memWrite = _signals_T_1 ? 1'h0 : _signals_T_246; // @[Lookup.scala 34:39]
  assign io_branch = _signals_T_1 ? 1'h0 : _signals_T_281; // @[Lookup.scala 34:39]
  assign io_aluOp = _signals_T_1 ? 2'h2 : _signals_T_351; // @[Lookup.scala 34:39]
  assign io_jump = _signals_T_1 ? 2'h0 : _signals_T_316; // @[Lookup.scala 34:39]
  assign io_aluSrc1 = _signals_T_1 ? 2'h0 : _signals_T_386; // @[Lookup.scala 34:39]
  assign io_f_read_0 = _signals_T_25 | _signals_T_27 | _signals_T_29 | _signals_T_31 | _signals_T_33 | _signals_T_35 |
    _signals_T_37 | _signals_T_39 | _signals_T_41 | _signals_T_43 | _signals_T_45 | _signals_T_47 | _signals_T_49 |
    _signals_T_51 | _signals_T_59 | _signals_T_61 | _signals_T_63 | _signals_T_65 | _signals_T_67 | _signals_T_69 |
    _signals_T_71; // @[Control.scala 273:18]
  assign io_f_read_1 = _signals_T_23 | _signals_T_25 | _signals_T_27 | _signals_T_29 | _signals_T_31 | _signals_T_33 |
    _signals_T_35 | _signals_T_37 | _signals_T_39 | _signals_T_43 | _signals_T_45 | _signals_T_47 | _signals_T_49 |
    _signals_T_51 | _signals_T_65 | _signals_T_67 | _signals_T_69; // @[Control.scala 273:18]
  assign io_f_read_2 = _signals_T_25 | _signals_T_27 | _signals_T_29 | _signals_T_31; // @[Control.scala 273:18]
  assign io_f_wr = _signals_T_21 | _signals_T_25 | _signals_T_27 | _signals_T_29 | _signals_T_31 | _signals_T_33 |
    _signals_T_35 | _signals_T_37 | _signals_T_39 | _signals_T_41 | _signals_T_43 | _signals_T_45 | _signals_T_47 |
    _signals_T_49 | _signals_T_51 | _signals_T_53 | _signals_T_55 | _signals_T_57; // @[Control.scala 280:16]
endmodule
module Registers(
  input         clock,
  input         reset,
  input  [4:0]  io_readAddress_0,
  input  [4:0]  io_readAddress_1,
  input  [4:0]  io_readAddress_2,
  input         io_writeEnable_0,
  input         io_writeEnable_1,
  input  [4:0]  io_writeAddress,
  input  [31:0] io_writeData,
  input         io_f_read_0,
  input         io_f_read_1,
  input         io_f_read_2,
  output [31:0] io_readData_0,
  output [31:0] io_readData_1,
  output [31:0] io_readData_2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] i_reg_0; // @[Registers.scala 17:22]
  reg [31:0] i_reg_1; // @[Registers.scala 17:22]
  reg [31:0] i_reg_2; // @[Registers.scala 17:22]
  reg [31:0] i_reg_3; // @[Registers.scala 17:22]
  reg [31:0] i_reg_4; // @[Registers.scala 17:22]
  reg [31:0] i_reg_5; // @[Registers.scala 17:22]
  reg [31:0] i_reg_6; // @[Registers.scala 17:22]
  reg [31:0] i_reg_7; // @[Registers.scala 17:22]
  reg [31:0] i_reg_8; // @[Registers.scala 17:22]
  reg [31:0] i_reg_9; // @[Registers.scala 17:22]
  reg [31:0] i_reg_10; // @[Registers.scala 17:22]
  reg [31:0] i_reg_11; // @[Registers.scala 17:22]
  reg [31:0] i_reg_12; // @[Registers.scala 17:22]
  reg [31:0] i_reg_13; // @[Registers.scala 17:22]
  reg [31:0] i_reg_14; // @[Registers.scala 17:22]
  reg [31:0] i_reg_15; // @[Registers.scala 17:22]
  reg [31:0] i_reg_16; // @[Registers.scala 17:22]
  reg [31:0] i_reg_17; // @[Registers.scala 17:22]
  reg [31:0] i_reg_18; // @[Registers.scala 17:22]
  reg [31:0] i_reg_19; // @[Registers.scala 17:22]
  reg [31:0] i_reg_20; // @[Registers.scala 17:22]
  reg [31:0] i_reg_21; // @[Registers.scala 17:22]
  reg [31:0] i_reg_22; // @[Registers.scala 17:22]
  reg [31:0] i_reg_23; // @[Registers.scala 17:22]
  reg [31:0] i_reg_24; // @[Registers.scala 17:22]
  reg [31:0] i_reg_25; // @[Registers.scala 17:22]
  reg [31:0] i_reg_26; // @[Registers.scala 17:22]
  reg [31:0] i_reg_27; // @[Registers.scala 17:22]
  reg [31:0] i_reg_28; // @[Registers.scala 17:22]
  reg [31:0] i_reg_29; // @[Registers.scala 17:22]
  reg [31:0] i_reg_30; // @[Registers.scala 17:22]
  reg [31:0] i_reg_31; // @[Registers.scala 17:22]
  reg [31:0] f_reg_0; // @[Registers.scala 18:30]
  reg [31:0] f_reg_1; // @[Registers.scala 18:30]
  reg [31:0] f_reg_2; // @[Registers.scala 18:30]
  reg [31:0] f_reg_3; // @[Registers.scala 18:30]
  reg [31:0] f_reg_4; // @[Registers.scala 18:30]
  reg [31:0] f_reg_5; // @[Registers.scala 18:30]
  reg [31:0] f_reg_6; // @[Registers.scala 18:30]
  reg [31:0] f_reg_7; // @[Registers.scala 18:30]
  reg [31:0] f_reg_8; // @[Registers.scala 18:30]
  reg [31:0] f_reg_9; // @[Registers.scala 18:30]
  reg [31:0] f_reg_10; // @[Registers.scala 18:30]
  reg [31:0] f_reg_11; // @[Registers.scala 18:30]
  reg [31:0] f_reg_12; // @[Registers.scala 18:30]
  reg [31:0] f_reg_13; // @[Registers.scala 18:30]
  reg [31:0] f_reg_14; // @[Registers.scala 18:30]
  reg [31:0] f_reg_15; // @[Registers.scala 18:30]
  reg [31:0] f_reg_16; // @[Registers.scala 18:30]
  reg [31:0] f_reg_17; // @[Registers.scala 18:30]
  reg [31:0] f_reg_18; // @[Registers.scala 18:30]
  reg [31:0] f_reg_19; // @[Registers.scala 18:30]
  reg [31:0] f_reg_20; // @[Registers.scala 18:30]
  reg [31:0] f_reg_21; // @[Registers.scala 18:30]
  reg [31:0] f_reg_22; // @[Registers.scala 18:30]
  reg [31:0] f_reg_23; // @[Registers.scala 18:30]
  reg [31:0] f_reg_24; // @[Registers.scala 18:30]
  reg [31:0] f_reg_25; // @[Registers.scala 18:30]
  reg [31:0] f_reg_26; // @[Registers.scala 18:30]
  reg [31:0] f_reg_27; // @[Registers.scala 18:30]
  reg [31:0] f_reg_28; // @[Registers.scala 18:30]
  reg [31:0] f_reg_29; // @[Registers.scala 18:30]
  reg [31:0] f_reg_30; // @[Registers.scala 18:30]
  reg [31:0] f_reg_31; // @[Registers.scala 18:30]
  wire  _io_readData_0_T = io_readAddress_0 != 5'h0; // @[Registers.scala 35:26]
  wire [31:0] _GEN_129 = 5'h1 == io_readAddress_0 ? i_reg_1 : i_reg_0; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_130 = 5'h2 == io_readAddress_0 ? i_reg_2 : _GEN_129; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_131 = 5'h3 == io_readAddress_0 ? i_reg_3 : _GEN_130; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_132 = 5'h4 == io_readAddress_0 ? i_reg_4 : _GEN_131; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_133 = 5'h5 == io_readAddress_0 ? i_reg_5 : _GEN_132; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_134 = 5'h6 == io_readAddress_0 ? i_reg_6 : _GEN_133; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_135 = 5'h7 == io_readAddress_0 ? i_reg_7 : _GEN_134; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_136 = 5'h8 == io_readAddress_0 ? i_reg_8 : _GEN_135; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_137 = 5'h9 == io_readAddress_0 ? i_reg_9 : _GEN_136; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_138 = 5'ha == io_readAddress_0 ? i_reg_10 : _GEN_137; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_139 = 5'hb == io_readAddress_0 ? i_reg_11 : _GEN_138; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_140 = 5'hc == io_readAddress_0 ? i_reg_12 : _GEN_139; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_141 = 5'hd == io_readAddress_0 ? i_reg_13 : _GEN_140; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_142 = 5'he == io_readAddress_0 ? i_reg_14 : _GEN_141; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_143 = 5'hf == io_readAddress_0 ? i_reg_15 : _GEN_142; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_144 = 5'h10 == io_readAddress_0 ? i_reg_16 : _GEN_143; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_145 = 5'h11 == io_readAddress_0 ? i_reg_17 : _GEN_144; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_146 = 5'h12 == io_readAddress_0 ? i_reg_18 : _GEN_145; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_147 = 5'h13 == io_readAddress_0 ? i_reg_19 : _GEN_146; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_148 = 5'h14 == io_readAddress_0 ? i_reg_20 : _GEN_147; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_149 = 5'h15 == io_readAddress_0 ? i_reg_21 : _GEN_148; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_150 = 5'h16 == io_readAddress_0 ? i_reg_22 : _GEN_149; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_151 = 5'h17 == io_readAddress_0 ? i_reg_23 : _GEN_150; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_152 = 5'h18 == io_readAddress_0 ? i_reg_24 : _GEN_151; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_153 = 5'h19 == io_readAddress_0 ? i_reg_25 : _GEN_152; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_154 = 5'h1a == io_readAddress_0 ? i_reg_26 : _GEN_153; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_155 = 5'h1b == io_readAddress_0 ? i_reg_27 : _GEN_154; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_156 = 5'h1c == io_readAddress_0 ? i_reg_28 : _GEN_155; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_157 = 5'h1d == io_readAddress_0 ? i_reg_29 : _GEN_156; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_158 = 5'h1e == io_readAddress_0 ? i_reg_30 : _GEN_157; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_159 = 5'h1f == io_readAddress_0 ? i_reg_31 : _GEN_158; // @[Mux.scala 101:{16,16}]
  wire [31:0] _io_readData_0_T_1 = _io_readData_0_T ? _GEN_159 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _GEN_161 = 5'h1 == io_readAddress_0 ? f_reg_1 : f_reg_0; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_162 = 5'h2 == io_readAddress_0 ? f_reg_2 : _GEN_161; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_163 = 5'h3 == io_readAddress_0 ? f_reg_3 : _GEN_162; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_164 = 5'h4 == io_readAddress_0 ? f_reg_4 : _GEN_163; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_165 = 5'h5 == io_readAddress_0 ? f_reg_5 : _GEN_164; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_166 = 5'h6 == io_readAddress_0 ? f_reg_6 : _GEN_165; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_167 = 5'h7 == io_readAddress_0 ? f_reg_7 : _GEN_166; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_168 = 5'h8 == io_readAddress_0 ? f_reg_8 : _GEN_167; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_169 = 5'h9 == io_readAddress_0 ? f_reg_9 : _GEN_168; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_170 = 5'ha == io_readAddress_0 ? f_reg_10 : _GEN_169; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_171 = 5'hb == io_readAddress_0 ? f_reg_11 : _GEN_170; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_172 = 5'hc == io_readAddress_0 ? f_reg_12 : _GEN_171; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_173 = 5'hd == io_readAddress_0 ? f_reg_13 : _GEN_172; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_174 = 5'he == io_readAddress_0 ? f_reg_14 : _GEN_173; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_175 = 5'hf == io_readAddress_0 ? f_reg_15 : _GEN_174; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_176 = 5'h10 == io_readAddress_0 ? f_reg_16 : _GEN_175; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_177 = 5'h11 == io_readAddress_0 ? f_reg_17 : _GEN_176; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_178 = 5'h12 == io_readAddress_0 ? f_reg_18 : _GEN_177; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_179 = 5'h13 == io_readAddress_0 ? f_reg_19 : _GEN_178; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_180 = 5'h14 == io_readAddress_0 ? f_reg_20 : _GEN_179; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_181 = 5'h15 == io_readAddress_0 ? f_reg_21 : _GEN_180; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_182 = 5'h16 == io_readAddress_0 ? f_reg_22 : _GEN_181; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_183 = 5'h17 == io_readAddress_0 ? f_reg_23 : _GEN_182; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_184 = 5'h18 == io_readAddress_0 ? f_reg_24 : _GEN_183; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_185 = 5'h19 == io_readAddress_0 ? f_reg_25 : _GEN_184; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_186 = 5'h1a == io_readAddress_0 ? f_reg_26 : _GEN_185; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_187 = 5'h1b == io_readAddress_0 ? f_reg_27 : _GEN_186; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_188 = 5'h1c == io_readAddress_0 ? f_reg_28 : _GEN_187; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_189 = 5'h1d == io_readAddress_0 ? f_reg_29 : _GEN_188; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_190 = 5'h1e == io_readAddress_0 ? f_reg_30 : _GEN_189; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_191 = 5'h1f == io_readAddress_0 ? f_reg_31 : _GEN_190; // @[Mux.scala 101:{16,16}]
  wire  _io_readData_1_T = io_readAddress_1 != 5'h0; // @[Registers.scala 35:26]
  wire [31:0] _GEN_193 = 5'h1 == io_readAddress_1 ? i_reg_1 : i_reg_0; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_194 = 5'h2 == io_readAddress_1 ? i_reg_2 : _GEN_193; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_195 = 5'h3 == io_readAddress_1 ? i_reg_3 : _GEN_194; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_196 = 5'h4 == io_readAddress_1 ? i_reg_4 : _GEN_195; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_197 = 5'h5 == io_readAddress_1 ? i_reg_5 : _GEN_196; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_198 = 5'h6 == io_readAddress_1 ? i_reg_6 : _GEN_197; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_199 = 5'h7 == io_readAddress_1 ? i_reg_7 : _GEN_198; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_200 = 5'h8 == io_readAddress_1 ? i_reg_8 : _GEN_199; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_201 = 5'h9 == io_readAddress_1 ? i_reg_9 : _GEN_200; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_202 = 5'ha == io_readAddress_1 ? i_reg_10 : _GEN_201; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_203 = 5'hb == io_readAddress_1 ? i_reg_11 : _GEN_202; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_204 = 5'hc == io_readAddress_1 ? i_reg_12 : _GEN_203; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_205 = 5'hd == io_readAddress_1 ? i_reg_13 : _GEN_204; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_206 = 5'he == io_readAddress_1 ? i_reg_14 : _GEN_205; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_207 = 5'hf == io_readAddress_1 ? i_reg_15 : _GEN_206; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_208 = 5'h10 == io_readAddress_1 ? i_reg_16 : _GEN_207; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_209 = 5'h11 == io_readAddress_1 ? i_reg_17 : _GEN_208; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_210 = 5'h12 == io_readAddress_1 ? i_reg_18 : _GEN_209; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_211 = 5'h13 == io_readAddress_1 ? i_reg_19 : _GEN_210; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_212 = 5'h14 == io_readAddress_1 ? i_reg_20 : _GEN_211; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_213 = 5'h15 == io_readAddress_1 ? i_reg_21 : _GEN_212; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_214 = 5'h16 == io_readAddress_1 ? i_reg_22 : _GEN_213; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_215 = 5'h17 == io_readAddress_1 ? i_reg_23 : _GEN_214; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_216 = 5'h18 == io_readAddress_1 ? i_reg_24 : _GEN_215; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_217 = 5'h19 == io_readAddress_1 ? i_reg_25 : _GEN_216; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_218 = 5'h1a == io_readAddress_1 ? i_reg_26 : _GEN_217; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_219 = 5'h1b == io_readAddress_1 ? i_reg_27 : _GEN_218; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_220 = 5'h1c == io_readAddress_1 ? i_reg_28 : _GEN_219; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_221 = 5'h1d == io_readAddress_1 ? i_reg_29 : _GEN_220; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_222 = 5'h1e == io_readAddress_1 ? i_reg_30 : _GEN_221; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_223 = 5'h1f == io_readAddress_1 ? i_reg_31 : _GEN_222; // @[Mux.scala 101:{16,16}]
  wire [31:0] _io_readData_1_T_1 = _io_readData_1_T ? _GEN_223 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _GEN_225 = 5'h1 == io_readAddress_1 ? f_reg_1 : f_reg_0; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_226 = 5'h2 == io_readAddress_1 ? f_reg_2 : _GEN_225; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_227 = 5'h3 == io_readAddress_1 ? f_reg_3 : _GEN_226; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_228 = 5'h4 == io_readAddress_1 ? f_reg_4 : _GEN_227; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_229 = 5'h5 == io_readAddress_1 ? f_reg_5 : _GEN_228; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_230 = 5'h6 == io_readAddress_1 ? f_reg_6 : _GEN_229; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_231 = 5'h7 == io_readAddress_1 ? f_reg_7 : _GEN_230; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_232 = 5'h8 == io_readAddress_1 ? f_reg_8 : _GEN_231; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_233 = 5'h9 == io_readAddress_1 ? f_reg_9 : _GEN_232; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_234 = 5'ha == io_readAddress_1 ? f_reg_10 : _GEN_233; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_235 = 5'hb == io_readAddress_1 ? f_reg_11 : _GEN_234; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_236 = 5'hc == io_readAddress_1 ? f_reg_12 : _GEN_235; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_237 = 5'hd == io_readAddress_1 ? f_reg_13 : _GEN_236; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_238 = 5'he == io_readAddress_1 ? f_reg_14 : _GEN_237; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_239 = 5'hf == io_readAddress_1 ? f_reg_15 : _GEN_238; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_240 = 5'h10 == io_readAddress_1 ? f_reg_16 : _GEN_239; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_241 = 5'h11 == io_readAddress_1 ? f_reg_17 : _GEN_240; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_242 = 5'h12 == io_readAddress_1 ? f_reg_18 : _GEN_241; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_243 = 5'h13 == io_readAddress_1 ? f_reg_19 : _GEN_242; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_244 = 5'h14 == io_readAddress_1 ? f_reg_20 : _GEN_243; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_245 = 5'h15 == io_readAddress_1 ? f_reg_21 : _GEN_244; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_246 = 5'h16 == io_readAddress_1 ? f_reg_22 : _GEN_245; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_247 = 5'h17 == io_readAddress_1 ? f_reg_23 : _GEN_246; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_248 = 5'h18 == io_readAddress_1 ? f_reg_24 : _GEN_247; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_249 = 5'h19 == io_readAddress_1 ? f_reg_25 : _GEN_248; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_250 = 5'h1a == io_readAddress_1 ? f_reg_26 : _GEN_249; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_251 = 5'h1b == io_readAddress_1 ? f_reg_27 : _GEN_250; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_252 = 5'h1c == io_readAddress_1 ? f_reg_28 : _GEN_251; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_253 = 5'h1d == io_readAddress_1 ? f_reg_29 : _GEN_252; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_254 = 5'h1e == io_readAddress_1 ? f_reg_30 : _GEN_253; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_255 = 5'h1f == io_readAddress_1 ? f_reg_31 : _GEN_254; // @[Mux.scala 101:{16,16}]
  wire [31:0] _GEN_257 = 5'h1 == io_readAddress_2 ? f_reg_1 : f_reg_0; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_258 = 5'h2 == io_readAddress_2 ? f_reg_2 : _GEN_257; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_259 = 5'h3 == io_readAddress_2 ? f_reg_3 : _GEN_258; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_260 = 5'h4 == io_readAddress_2 ? f_reg_4 : _GEN_259; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_261 = 5'h5 == io_readAddress_2 ? f_reg_5 : _GEN_260; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_262 = 5'h6 == io_readAddress_2 ? f_reg_6 : _GEN_261; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_263 = 5'h7 == io_readAddress_2 ? f_reg_7 : _GEN_262; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_264 = 5'h8 == io_readAddress_2 ? f_reg_8 : _GEN_263; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_265 = 5'h9 == io_readAddress_2 ? f_reg_9 : _GEN_264; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_266 = 5'ha == io_readAddress_2 ? f_reg_10 : _GEN_265; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_267 = 5'hb == io_readAddress_2 ? f_reg_11 : _GEN_266; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_268 = 5'hc == io_readAddress_2 ? f_reg_12 : _GEN_267; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_269 = 5'hd == io_readAddress_2 ? f_reg_13 : _GEN_268; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_270 = 5'he == io_readAddress_2 ? f_reg_14 : _GEN_269; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_271 = 5'hf == io_readAddress_2 ? f_reg_15 : _GEN_270; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_272 = 5'h10 == io_readAddress_2 ? f_reg_16 : _GEN_271; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_273 = 5'h11 == io_readAddress_2 ? f_reg_17 : _GEN_272; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_274 = 5'h12 == io_readAddress_2 ? f_reg_18 : _GEN_273; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_275 = 5'h13 == io_readAddress_2 ? f_reg_19 : _GEN_274; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_276 = 5'h14 == io_readAddress_2 ? f_reg_20 : _GEN_275; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_277 = 5'h15 == io_readAddress_2 ? f_reg_21 : _GEN_276; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_278 = 5'h16 == io_readAddress_2 ? f_reg_22 : _GEN_277; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_279 = 5'h17 == io_readAddress_2 ? f_reg_23 : _GEN_278; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_280 = 5'h18 == io_readAddress_2 ? f_reg_24 : _GEN_279; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_281 = 5'h19 == io_readAddress_2 ? f_reg_25 : _GEN_280; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_282 = 5'h1a == io_readAddress_2 ? f_reg_26 : _GEN_281; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_283 = 5'h1b == io_readAddress_2 ? f_reg_27 : _GEN_282; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_284 = 5'h1c == io_readAddress_2 ? f_reg_28 : _GEN_283; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_285 = 5'h1d == io_readAddress_2 ? f_reg_29 : _GEN_284; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_286 = 5'h1e == io_readAddress_2 ? f_reg_30 : _GEN_285; // @[Registers.scala 39:{26,26}]
  wire [31:0] _GEN_287 = 5'h1f == io_readAddress_2 ? f_reg_31 : _GEN_286; // @[Registers.scala 39:{26,26}]
  assign io_readData_0 = io_f_read_0 ? _GEN_191 : _io_readData_0_T_1; // @[Mux.scala 101:16]
  assign io_readData_1 = io_f_read_1 ? _GEN_255 : _io_readData_1_T_1; // @[Mux.scala 101:16]
  assign io_readData_2 = io_f_read_2 ? _GEN_287 : 32'h0; // @[Registers.scala 39:26]
  always @(posedge clock) begin
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_0 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h0 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_0 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_1 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_1 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_2 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h2 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_2 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_3 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h3 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_3 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_4 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h4 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_4 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_5 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h5 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_5 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_6 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h6 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_6 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_7 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h7 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_7 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_8 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h8 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_8 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_9 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h9 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_9 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_10 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'ha == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_10 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_11 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'hb == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_11 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_12 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'hc == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_12 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_13 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'hd == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_13 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_14 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'he == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_14 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_15 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'hf == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_15 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_16 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h10 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_16 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_17 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h11 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_17 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_18 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h12 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_18 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_19 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h13 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_19 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_20 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h14 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_20 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_21 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h15 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_21 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_22 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h16 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_22 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_23 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h17 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_23 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_24 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h18 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_24 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_25 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h19 == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_25 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_26 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1a == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_26 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_27 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1b == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_27 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_28 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1c == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_28 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_29 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1d == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_29 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_30 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1e == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_30 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (reset) begin // @[Registers.scala 17:22]
      i_reg_31 <= 32'h0; // @[Registers.scala 17:22]
    end else if (io_writeEnable_0 & io_writeAddress != 5'h0) begin // @[Registers.scala 20:57]
      if (5'h1f == io_writeAddress) begin // @[Registers.scala 21:28]
        i_reg_31 <= io_writeData; // @[Registers.scala 21:28]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h0 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_0 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_1 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h2 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_2 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h3 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_3 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h4 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_4 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h5 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_5 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h6 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_6 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h7 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_7 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h8 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_8 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h9 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_9 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'ha == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_10 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'hb == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_11 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'hc == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_12 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'hd == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_13 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'he == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_14 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'hf == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_15 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h10 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_16 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h11 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_17 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h12 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_18 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h13 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_19 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h14 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_20 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h15 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_21 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h16 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_22 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h17 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_23 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h18 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_24 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h19 == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_25 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1a == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_26 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1b == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_27 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1c == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_28 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1d == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_29 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1e == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_30 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
    if (io_writeEnable_1) begin // @[Registers.scala 25:30]
      if (5'h1f == io_writeAddress) begin // @[Registers.scala 26:34]
        f_reg_31 <= io_writeData; // @[Registers.scala 26:34]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  i_reg_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  i_reg_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  i_reg_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  i_reg_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  i_reg_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  i_reg_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  i_reg_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  i_reg_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  i_reg_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  i_reg_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  i_reg_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  i_reg_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  i_reg_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  i_reg_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  i_reg_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  i_reg_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  i_reg_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  i_reg_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  i_reg_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  i_reg_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  i_reg_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  i_reg_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  i_reg_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  i_reg_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  i_reg_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  i_reg_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  i_reg_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  i_reg_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  i_reg_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  i_reg_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  i_reg_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  i_reg_31 = _RAND_31[31:0];
  _RAND_32 = {1{`RANDOM}};
  f_reg_0 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  f_reg_1 = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  f_reg_2 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  f_reg_3 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  f_reg_4 = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  f_reg_5 = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  f_reg_6 = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  f_reg_7 = _RAND_39[31:0];
  _RAND_40 = {1{`RANDOM}};
  f_reg_8 = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  f_reg_9 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  f_reg_10 = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  f_reg_11 = _RAND_43[31:0];
  _RAND_44 = {1{`RANDOM}};
  f_reg_12 = _RAND_44[31:0];
  _RAND_45 = {1{`RANDOM}};
  f_reg_13 = _RAND_45[31:0];
  _RAND_46 = {1{`RANDOM}};
  f_reg_14 = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  f_reg_15 = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  f_reg_16 = _RAND_48[31:0];
  _RAND_49 = {1{`RANDOM}};
  f_reg_17 = _RAND_49[31:0];
  _RAND_50 = {1{`RANDOM}};
  f_reg_18 = _RAND_50[31:0];
  _RAND_51 = {1{`RANDOM}};
  f_reg_19 = _RAND_51[31:0];
  _RAND_52 = {1{`RANDOM}};
  f_reg_20 = _RAND_52[31:0];
  _RAND_53 = {1{`RANDOM}};
  f_reg_21 = _RAND_53[31:0];
  _RAND_54 = {1{`RANDOM}};
  f_reg_22 = _RAND_54[31:0];
  _RAND_55 = {1{`RANDOM}};
  f_reg_23 = _RAND_55[31:0];
  _RAND_56 = {1{`RANDOM}};
  f_reg_24 = _RAND_56[31:0];
  _RAND_57 = {1{`RANDOM}};
  f_reg_25 = _RAND_57[31:0];
  _RAND_58 = {1{`RANDOM}};
  f_reg_26 = _RAND_58[31:0];
  _RAND_59 = {1{`RANDOM}};
  f_reg_27 = _RAND_59[31:0];
  _RAND_60 = {1{`RANDOM}};
  f_reg_28 = _RAND_60[31:0];
  _RAND_61 = {1{`RANDOM}};
  f_reg_29 = _RAND_61[31:0];
  _RAND_62 = {1{`RANDOM}};
  f_reg_30 = _RAND_62[31:0];
  _RAND_63 = {1{`RANDOM}};
  f_reg_31 = _RAND_63[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ImmediateGen(
  input  [31:0] io_instruction,
  output [31:0] io_out
);
  wire [6:0] opcode = io_instruction[6:0]; // @[ImmediateGen.scala 11:30]
  wire  _T_10 = opcode == 7'h3 | opcode == 7'hf | opcode == 7'h13 | opcode == 7'h1b | opcode == 7'h67 | opcode == 7'h73; // @[ImmediateGen.scala 15:97]
  wire  _T_12 = _T_10 | opcode == 7'h7; // @[ImmediateGen.scala 16:5]
  wire [11:0] imm_i = io_instruction[31:20]; // @[ImmediateGen.scala 18:31]
  wire [19:0] _ext_i_T_2 = imm_i[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_i = {_ext_i_T_2,imm_i}; // @[Cat.scala 33:92]
  wire [19:0] imm_u = io_instruction[31:12]; // @[ImmediateGen.scala 25:31]
  wire [31:0] ext_u = {imm_u,12'h0}; // @[Cat.scala 33:92]
  wire  _T_16 = opcode == 7'h23; // @[ImmediateGen.scala 31:13]
  wire  _T_18 = _T_16 | opcode == 7'h27; // @[ImmediateGen.scala 32:5]
  wire [11:0] imm_s = {io_instruction[31:25],io_instruction[11:7]}; // @[Cat.scala 33:92]
  wire [19:0] _ext_s_T_2 = imm_s[11] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_s = {_ext_s_T_2,io_instruction[31:25],io_instruction[11:7]}; // @[Cat.scala 33:92]
  wire [11:0] imm_sb = {io_instruction[31],io_instruction[7],io_instruction[30:25],io_instruction[11:8]}; // @[Cat.scala 33:92]
  wire [18:0] _ext_sb_T_2 = imm_sb[11] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_sb = {_ext_sb_T_2,io_instruction[31],io_instruction[7],io_instruction[30:25],io_instruction[11:8],1'h0
    }; // @[Cat.scala 33:92]
  wire [19:0] imm_uj = {io_instruction[31],io_instruction[19:12],io_instruction[20],io_instruction[30:21]}; // @[Cat.scala 33:92]
  wire [10:0] _ext_uj_T_2 = imm_uj[19] ? 11'h7ff : 11'h0; // @[Bitwise.scala 77:12]
  wire [31:0] ext_uj = {_ext_uj_T_2,io_instruction[31],io_instruction[19:12],io_instruction[20],io_instruction[30:21],1'h0
    }; // @[Cat.scala 33:92]
  wire [31:0] _GEN_0 = opcode == 7'h63 ? ext_sb : ext_uj; // @[ImmediateGen.scala 39:30 47:12 59:12]
  wire [31:0] _GEN_1 = _T_18 ? ext_s : _GEN_0; // @[ImmediateGen.scala 33:5 36:12]
  wire [31:0] _GEN_2 = opcode == 7'h17 | opcode == 7'h37 ? ext_u : _GEN_1; // @[ImmediateGen.scala 24:49 27:12]
  assign io_out = _T_12 ? ext_i : _GEN_2; // @[ImmediateGen.scala 17:5 20:12]
endmodule
module BranchUnit(
  input         io_branch,
  input  [2:0]  io_funct3,
  input  [31:0] io_rd1,
  input  [31:0] io_rd2,
  output        io_taken
);
  wire  _check_T_9 = io_rd1 >= io_rd2; // @[BranchUnit.scala 27:32]
  wire  _GEN_1 = 3'h6 == io_funct3 ? io_rd1 < io_rd2 : _check_T_9; // @[BranchUnit.scala 21:21 26:21]
  wire  _GEN_2 = 3'h5 == io_funct3 ? $signed(io_rd1) >= $signed(io_rd2) : _GEN_1; // @[BranchUnit.scala 21:21 25:21]
  wire  _GEN_3 = 3'h4 == io_funct3 ? $signed(io_rd1) < $signed(io_rd2) : _GEN_2; // @[BranchUnit.scala 21:21 24:21]
  wire  _GEN_4 = 3'h1 == io_funct3 ? io_rd1 != io_rd2 : _GEN_3; // @[BranchUnit.scala 21:21 23:21]
  wire  check = 3'h0 == io_funct3 ? io_rd1 == io_rd2 : _GEN_4; // @[BranchUnit.scala 21:21 22:21]
  assign io_taken = check & io_branch; // @[BranchUnit.scala 30:21]
endmodule
module InstructionDecode(
  input         clock,
  input         reset,
  input  [31:0] io_id_instruction,
  input  [31:0] io_writeData,
  input  [4:0]  io_writeReg,
  input  [31:0] io_pcAddress,
  input         io_ctl_writeEnable_0,
  input         io_ctl_writeEnable_1,
  input         io_ex_mem_mem_read,
  input  [4:0]  io_id_ex_rd,
  input  [4:0]  io_ex_mem_rd,
  input  [31:0] io_ex_mem_ins,
  input  [31:0] io_mem_wb_ins,
  input  [31:0] io_ex_ins,
  input  [31:0] io_ex_result,
  input  [31:0] io_ex_mem_result,
  input  [31:0] io_mem_wb_result,
  input         io_id_ex_regWr,
  input         io_ex_mem_regWr,
  input         io_csr_Ex,
  input         io_csr_Mem,
  input         io_csr_Wb,
  input  [31:0] io_csr_Ex_data,
  input  [31:0] io_csr_Mem_data,
  input  [31:0] io_csr_Wb_data,
  input  [31:0] io_dmem_data,
  input         io_ex_stall,
  output [31:0] io_immediate,
  output [4:0]  io_writeRegAddress,
  output [31:0] io_readData1,
  output [31:0] io_readData2,
  output [6:0]  io_func7,
  output [2:0]  io_func3,
  output        io_ctl_aluSrc,
  output [1:0]  io_ctl_memToReg,
  output        io_ctl_regWrite_0,
  output        io_ctl_regWrite_1,
  output        io_ctl_memRead,
  output        io_ctl_memWrite,
  output        io_ctl_branch,
  output [1:0]  io_ctl_aluOp,
  output [1:0]  io_ctl_jump,
  output [1:0]  io_ctl_aluSrc1,
  output        io_hdu_pcWrite,
  output        io_pcSrc,
  output [31:0] io_pcPlusOffset,
  output        io_ifid_flush,
  output        io_stall,
  output [31:0] io_csr_o_data,
  output        io_is_csr,
  output [31:0] io_fcsr_o_data,
  input         io_f_read_reg_0_0,
  input         io_f_read_reg_1_0,
  input         io_f_read_reg_1_1,
  input         io_f_read_reg_2_0,
  input         io_f_read_reg_2_1,
  input         io_f_except_0_0,
  input         io_f_except_0_1,
  input         io_f_except_0_2,
  input         io_f_except_0_3,
  input         io_f_except_0_4,
  input         io_f_except_1_0,
  input         io_f_except_1_1,
  input         io_f_except_1_2,
  input         io_f_except_1_3,
  input         io_f_except_1_4,
  input         io_f_except_2_0,
  input         io_f_except_2_1,
  input         io_f_except_2_2,
  input         io_f_except_2_3,
  input         io_f_except_2_4,
  input         io_is_f_in_0,
  input         io_is_f_in_1,
  input         io_is_f_in_2,
  output        io_f_read_0,
  output        io_f_read_1,
  output        io_f_read_2,
  output [31:0] io_readData3,
  output        io_is_f,
  output [4:0]  io_raddr_0,
  output [4:0]  io_raddr_1,
  output [4:0]  io_raddr_2,
  output [31:0] io_rd_wdata
);
  wire  csr_clock; // @[InstructionDecode.scala 103:35]
  wire  csr_reset; // @[InstructionDecode.scala 103:35]
  wire [31:0] csr_io_i_data; // @[InstructionDecode.scala 103:35]
  wire [4:0] csr_io_i_imm; // @[InstructionDecode.scala 103:35]
  wire [31:0] csr_io_o_data; // @[InstructionDecode.scala 103:35]
  wire [2:0] csr_io_i_opr; // @[InstructionDecode.scala 103:35]
  wire [11:0] csr_io_i_addr; // @[InstructionDecode.scala 103:35]
  wire  csr_io_i_w_en; // @[InstructionDecode.scala 103:35]
  wire  csr_io_f_except_0; // @[InstructionDecode.scala 103:35]
  wire  csr_io_f_except_1; // @[InstructionDecode.scala 103:35]
  wire  csr_io_f_except_2; // @[InstructionDecode.scala 103:35]
  wire  csr_io_f_except_3; // @[InstructionDecode.scala 103:35]
  wire  csr_io_f_except_4; // @[InstructionDecode.scala 103:35]
  wire [31:0] csr_io_fcsr_o_data; // @[InstructionDecode.scala 103:35]
  wire  csrController_io_regWrExecute; // @[InstructionDecode.scala 122:45]
  wire [4:0] csrController_io_rdSelExecute; // @[InstructionDecode.scala 122:45]
  wire  csrController_io_csrWrExecute; // @[InstructionDecode.scala 122:45]
  wire  csrController_io_regWrMemory; // @[InstructionDecode.scala 122:45]
  wire [4:0] csrController_io_rdSelMemory; // @[InstructionDecode.scala 122:45]
  wire  csrController_io_csrWrMemory; // @[InstructionDecode.scala 122:45]
  wire  csrController_io_regWrWriteback; // @[InstructionDecode.scala 122:45]
  wire [4:0] csrController_io_rdSelWriteback; // @[InstructionDecode.scala 122:45]
  wire  csrController_io_csrWrWriteback; // @[InstructionDecode.scala 122:45]
  wire [4:0] csrController_io_rs1SelDecode; // @[InstructionDecode.scala 122:45]
  wire  csrController_io_csrInstDecode; // @[InstructionDecode.scala 122:45]
  wire [2:0] csrController_io_forwardRS1; // @[InstructionDecode.scala 122:45]
  wire  hdu_io_taken; // @[InstructionDecode.scala 139:19]
  wire [1:0] hdu_io_jump; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_pc_write; // @[InstructionDecode.scala 139:19]
  wire  hdu_io_ifid_flush; // @[InstructionDecode.scala 139:19]
  wire [31:0] control_io_in; // @[InstructionDecode.scala 154:23]
  wire  control_io_aluSrc; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_memToReg; // @[InstructionDecode.scala 154:23]
  wire  control_io_regWrite; // @[InstructionDecode.scala 154:23]
  wire  control_io_memRead; // @[InstructionDecode.scala 154:23]
  wire  control_io_memWrite; // @[InstructionDecode.scala 154:23]
  wire  control_io_branch; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_aluOp; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_jump; // @[InstructionDecode.scala 154:23]
  wire [1:0] control_io_aluSrc1; // @[InstructionDecode.scala 154:23]
  wire  control_io_f_read_0; // @[InstructionDecode.scala 154:23]
  wire  control_io_f_read_1; // @[InstructionDecode.scala 154:23]
  wire  control_io_f_read_2; // @[InstructionDecode.scala 154:23]
  wire  control_io_f_wr; // @[InstructionDecode.scala 154:23]
  wire  registers_clock; // @[InstructionDecode.scala 180:25]
  wire  registers_reset; // @[InstructionDecode.scala 180:25]
  wire [4:0] registers_io_readAddress_0; // @[InstructionDecode.scala 180:25]
  wire [4:0] registers_io_readAddress_1; // @[InstructionDecode.scala 180:25]
  wire [4:0] registers_io_readAddress_2; // @[InstructionDecode.scala 180:25]
  wire  registers_io_writeEnable_0; // @[InstructionDecode.scala 180:25]
  wire  registers_io_writeEnable_1; // @[InstructionDecode.scala 180:25]
  wire [4:0] registers_io_writeAddress; // @[InstructionDecode.scala 180:25]
  wire [31:0] registers_io_writeData; // @[InstructionDecode.scala 180:25]
  wire  registers_io_f_read_0; // @[InstructionDecode.scala 180:25]
  wire  registers_io_f_read_1; // @[InstructionDecode.scala 180:25]
  wire  registers_io_f_read_2; // @[InstructionDecode.scala 180:25]
  wire [31:0] registers_io_readData_0; // @[InstructionDecode.scala 180:25]
  wire [31:0] registers_io_readData_1; // @[InstructionDecode.scala 180:25]
  wire [31:0] registers_io_readData_2; // @[InstructionDecode.scala 180:25]
  wire [31:0] immediate_io_instruction; // @[InstructionDecode.scala 247:25]
  wire [31:0] immediate_io_out; // @[InstructionDecode.scala 247:25]
  wire  bu_io_branch; // @[InstructionDecode.scala 283:18]
  wire [2:0] bu_io_funct3; // @[InstructionDecode.scala 283:18]
  wire [31:0] bu_io_rd1; // @[InstructionDecode.scala 283:18]
  wire [31:0] bu_io_rd2; // @[InstructionDecode.scala 283:18]
  wire  bu_io_taken; // @[InstructionDecode.scala 283:18]
  wire  _is_f_T_13 = io_id_instruction[6:0] == 7'h53; // @[InstructionDecode.scala 98:35]
  wire  _io_csr_o_data_T_4 = io_id_instruction[31:20] == 12'h1 | io_id_instruction[31:20] == 12'h3; // @[InstructionDecode.scala 115:79]
  wire [4:0] _io_csr_o_data_T_5 = {io_f_except_0_4,io_f_except_0_3,io_f_except_0_2,io_f_except_0_1,io_f_except_0_0}; // @[InstructionDecode.scala 116:91]
  wire [4:0] _io_csr_o_data_T_6 = io_is_f_in_0 ? _io_csr_o_data_T_5 : 5'h0; // @[InstructionDecode.scala 116:52]
  wire [4:0] _io_csr_o_data_T_7 = {io_f_except_1_4,io_f_except_1_3,io_f_except_1_2,io_f_except_1_1,io_f_except_1_0}; // @[InstructionDecode.scala 116:91]
  wire [4:0] _io_csr_o_data_T_8 = io_is_f_in_1 ? _io_csr_o_data_T_7 : 5'h0; // @[InstructionDecode.scala 116:52]
  wire [4:0] _io_csr_o_data_T_9 = {io_f_except_2_4,io_f_except_2_3,io_f_except_2_2,io_f_except_2_1,io_f_except_2_0}; // @[InstructionDecode.scala 116:91]
  wire [4:0] _io_csr_o_data_T_10 = io_is_f_in_2 ? _io_csr_o_data_T_9 : 5'h0; // @[InstructionDecode.scala 116:52]
  wire [4:0] _io_csr_o_data_T_11 = _io_csr_o_data_T_6 | _io_csr_o_data_T_8; // @[InstructionDecode.scala 117:53]
  wire [4:0] _io_csr_o_data_T_12 = _io_csr_o_data_T_11 | _io_csr_o_data_T_10; // @[InstructionDecode.scala 117:53]
  wire [31:0] _GEN_17 = {{27'd0}, _io_csr_o_data_T_12}; // @[InstructionDecode.scala 115:141]
  wire [31:0] _io_csr_o_data_T_13 = csr_io_o_data | _GEN_17; // @[InstructionDecode.scala 115:141]
  wire  _T = io_id_instruction != 32'h13; // @[InstructionDecode.scala 163:44]
  wire [4:0] registerRs1 = io_id_instruction[19:15]; // @[InstructionDecode.scala 182:48]
  wire [4:0] registerRs2 = io_id_instruction[24:20]; // @[InstructionDecode.scala 183:38]
  wire [4:0] registerRs3 = io_id_instruction[31:27]; // @[InstructionDecode.scala 184:50]
  wire [31:0] writeData = io_csr_Wb ? io_csr_Wb_data : io_writeData; // @[InstructionDecode.scala 187:32]
  wire  _T_2 = io_writeReg == io_id_instruction[19:15]; // @[InstructionDecode.scala 201:18]
  wire  _T_3 = ~control_io_f_read_0; // @[InstructionDecode.scala 203:40]
  wire  _T_6 = io_ctl_writeEnable_0 & ~control_io_f_read_0 | io_ctl_writeEnable_1 & control_io_f_read_0; // @[InstructionDecode.scala 203:67]
  wire  _T_7 = _T_2 & _T_6; // @[InstructionDecode.scala 202:5]
  wire  _T_8 = io_id_instruction[19:15] == 5'h0; // @[InstructionDecode.scala 208:20]
  wire  _T_10 = _T_8 & _T_3; // @[InstructionDecode.scala 209:7]
  wire [31:0] _GEN_2 = _T_10 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 210:7 211:17 213:17]
  wire [31:0] readData1 = _T_7 ? _GEN_2 : registers_io_readData_0; // @[InstructionDecode.scala 206:5 216:15]
  wire  _T_11 = io_writeReg == registerRs2; // @[InstructionDecode.scala 220:18]
  wire  _T_12 = ~control_io_f_read_1; // @[InstructionDecode.scala 222:40]
  wire  _T_15 = io_ctl_writeEnable_0 & ~control_io_f_read_1 | io_ctl_writeEnable_1 & control_io_f_read_1; // @[InstructionDecode.scala 222:67]
  wire  _T_16 = _T_11 & _T_15; // @[InstructionDecode.scala 221:5]
  wire  _T_17 = registerRs2 == 5'h0; // @[InstructionDecode.scala 227:20]
  wire  _T_19 = _T_17 & _T_12; // @[InstructionDecode.scala 228:7]
  wire [31:0] _GEN_4 = _T_19 ? 32'h0 : io_writeData; // @[InstructionDecode.scala 229:7 230:17 232:17]
  wire [31:0] readData2 = _T_16 ? _GEN_4 : registers_io_readData_1; // @[InstructionDecode.scala 225:5 235:15]
  wire  _io_readData3_T_2 = io_writeReg == registerRs3 & (io_ctl_writeEnable_1 & control_io_f_read_2); // @[InstructionDecode.scala 240:41]
  wire  _T_21 = io_id_instruction[19:15] == io_ex_mem_ins[11:7]; // @[InstructionDecode.scala 256:18]
  wire  _T_23 = _T_21 & ~io_f_read_reg_1_0; // @[InstructionDecode.scala 257:5]
  wire  _T_25 = io_id_instruction[19:15] == io_mem_wb_ins[11:7]; // @[InstructionDecode.scala 261:18]
  wire  _T_27 = _T_25 & ~io_f_read_reg_2_0; // @[InstructionDecode.scala 262:5]
  wire [31:0] _GEN_6 = _T_27 ? io_mem_wb_result : readData1; // @[InstructionDecode.scala 263:5 264:12 266:12]
  wire [31:0] input1 = _T_23 ? io_ex_mem_result : _GEN_6; // @[InstructionDecode.scala 258:5 259:12]
  wire  _T_29 = registerRs2 == io_ex_mem_ins[11:7]; // @[InstructionDecode.scala 269:18]
  wire  _T_31 = _T_29 & ~io_f_read_reg_1_1; // @[InstructionDecode.scala 270:5]
  wire  _T_33 = registerRs2 == io_mem_wb_ins[11:7]; // @[InstructionDecode.scala 274:18]
  wire  _T_35 = _T_33 & ~io_f_read_reg_2_1; // @[InstructionDecode.scala 275:5]
  wire [31:0] _GEN_8 = _T_35 ? io_mem_wb_result : readData2; // @[InstructionDecode.scala 276:5 277:12 279:12]
  wire  _T_37 = io_id_instruction[19:15] == io_ex_ins[11:7]; // @[InstructionDecode.scala 294:18]
  wire  _T_39 = _T_37 & ~io_f_read_reg_0_0; // @[InstructionDecode.scala 295:5]
  wire [31:0] j_offset = _T_39 ? io_ex_result : input1; // @[InstructionDecode.scala 296:5 297:14]
  wire [31:0] _io_pcPlusOffset_T_1 = io_pcAddress + io_immediate; // @[InstructionDecode.scala 314:37]
  wire [31:0] _io_pcPlusOffset_T_3 = j_offset + io_immediate; // @[InstructionDecode.scala 316:35]
  wire [31:0] _io_pcPlusOffset_T_5 = io_pcAddress + immediate_io_out; // @[InstructionDecode.scala 319:39]
  wire [31:0] _GEN_13 = io_ctl_jump == 2'h2 ? _io_pcPlusOffset_T_3 : _io_pcPlusOffset_T_5; // @[InstructionDecode.scala 315:35 316:23 319:23]
  wire  _T_56 = io_func3 == 3'h5; // @[InstructionDecode.scala 335:61]
  wire  _T_57 = io_id_instruction[6:0] == 7'h13 & io_func3 == 3'h5; // @[InstructionDecode.scala 335:49]
  wire  _T_58 = io_id_instruction[6:0] == 7'h33 | _T_57; // @[InstructionDecode.scala 334:47]
  wire  _T_61 = _T_58 | _is_f_T_13; // @[InstructionDecode.scala 336:7]
  wire [31:0] _T_62 = io_ex_mem_mem_read ? io_dmem_data : io_ex_mem_result; // @[InstructionDecode.scala 347:15]
  wire [31:0] _csr_io_i_data_T_1 = 3'h1 == csrController_io_forwardRS1 ? io_ex_result : registers_io_readData_0; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_3 = 3'h2 == csrController_io_forwardRS1 ? _T_62 : _csr_io_i_data_T_1; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_5 = 3'h3 == csrController_io_forwardRS1 ? io_writeData : _csr_io_i_data_T_3; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_7 = 3'h4 == csrController_io_forwardRS1 ? io_csr_Ex_data : _csr_io_i_data_T_5; // @[Mux.scala 81:58]
  wire [31:0] _csr_io_i_data_T_9 = 3'h5 == csrController_io_forwardRS1 ? io_csr_Mem_data : _csr_io_i_data_T_7; // @[Mux.scala 81:58]
  CSR csr ( // @[InstructionDecode.scala 103:35]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_i_data(csr_io_i_data),
    .io_i_imm(csr_io_i_imm),
    .io_o_data(csr_io_o_data),
    .io_i_opr(csr_io_i_opr),
    .io_i_addr(csr_io_i_addr),
    .io_i_w_en(csr_io_i_w_en),
    .io_f_except_0(csr_io_f_except_0),
    .io_f_except_1(csr_io_f_except_1),
    .io_f_except_2(csr_io_f_except_2),
    .io_f_except_3(csr_io_f_except_3),
    .io_f_except_4(csr_io_f_except_4),
    .io_fcsr_o_data(csr_io_fcsr_o_data)
  );
  CSRController csrController ( // @[InstructionDecode.scala 122:45]
    .io_regWrExecute(csrController_io_regWrExecute),
    .io_rdSelExecute(csrController_io_rdSelExecute),
    .io_csrWrExecute(csrController_io_csrWrExecute),
    .io_regWrMemory(csrController_io_regWrMemory),
    .io_rdSelMemory(csrController_io_rdSelMemory),
    .io_csrWrMemory(csrController_io_csrWrMemory),
    .io_regWrWriteback(csrController_io_regWrWriteback),
    .io_rdSelWriteback(csrController_io_rdSelWriteback),
    .io_csrWrWriteback(csrController_io_csrWrWriteback),
    .io_rs1SelDecode(csrController_io_rs1SelDecode),
    .io_csrInstDecode(csrController_io_csrInstDecode),
    .io_forwardRS1(csrController_io_forwardRS1)
  );
  HazardUnit hdu ( // @[InstructionDecode.scala 139:19]
    .io_taken(hdu_io_taken),
    .io_jump(hdu_io_jump),
    .io_pc_write(hdu_io_pc_write),
    .io_ifid_flush(hdu_io_ifid_flush)
  );
  Control control ( // @[InstructionDecode.scala 154:23]
    .io_in(control_io_in),
    .io_aluSrc(control_io_aluSrc),
    .io_memToReg(control_io_memToReg),
    .io_regWrite(control_io_regWrite),
    .io_memRead(control_io_memRead),
    .io_memWrite(control_io_memWrite),
    .io_branch(control_io_branch),
    .io_aluOp(control_io_aluOp),
    .io_jump(control_io_jump),
    .io_aluSrc1(control_io_aluSrc1),
    .io_f_read_0(control_io_f_read_0),
    .io_f_read_1(control_io_f_read_1),
    .io_f_read_2(control_io_f_read_2),
    .io_f_wr(control_io_f_wr)
  );
  Registers registers ( // @[InstructionDecode.scala 180:25]
    .clock(registers_clock),
    .reset(registers_reset),
    .io_readAddress_0(registers_io_readAddress_0),
    .io_readAddress_1(registers_io_readAddress_1),
    .io_readAddress_2(registers_io_readAddress_2),
    .io_writeEnable_0(registers_io_writeEnable_0),
    .io_writeEnable_1(registers_io_writeEnable_1),
    .io_writeAddress(registers_io_writeAddress),
    .io_writeData(registers_io_writeData),
    .io_f_read_0(registers_io_f_read_0),
    .io_f_read_1(registers_io_f_read_1),
    .io_f_read_2(registers_io_f_read_2),
    .io_readData_0(registers_io_readData_0),
    .io_readData_1(registers_io_readData_1),
    .io_readData_2(registers_io_readData_2)
  );
  ImmediateGen immediate ( // @[InstructionDecode.scala 247:25]
    .io_instruction(immediate_io_instruction),
    .io_out(immediate_io_out)
  );
  BranchUnit bu ( // @[InstructionDecode.scala 283:18]
    .io_branch(bu_io_branch),
    .io_funct3(bu_io_funct3),
    .io_rd1(bu_io_rd1),
    .io_rd2(bu_io_rd2),
    .io_taken(bu_io_taken)
  );
  assign io_immediate = immediate_io_out; // @[InstructionDecode.scala 249:16]
  assign io_writeRegAddress = io_id_instruction[11:7]; // @[InstructionDecode.scala 331:42]
  assign io_readData1 = _T_7 ? _GEN_2 : registers_io_readData_0; // @[InstructionDecode.scala 206:5 216:15]
  assign io_readData2 = _T_16 ? _GEN_4 : registers_io_readData_1; // @[InstructionDecode.scala 225:5 235:15]
  assign io_func7 = _T_61 ? io_id_instruction[31:25] : 7'h0; // @[InstructionDecode.scala 337:4 338:14 340:14]
  assign io_func3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 332:32]
  assign io_ctl_aluSrc = control_io_aluSrc; // @[InstructionDecode.scala 157:17]
  assign io_ctl_memToReg = control_io_memToReg; // @[InstructionDecode.scala 161:19]
  assign io_ctl_regWrite_0 = io_id_instruction != 32'h13 & control_io_regWrite; // @[InstructionDecode.scala 163:57 165:24 168:24]
  assign io_ctl_regWrite_1 = _T & control_io_f_wr; // @[InstructionDecode.scala 171:30]
  assign io_ctl_memRead = control_io_memRead; // @[InstructionDecode.scala 160:18]
  assign io_ctl_memWrite = io_id_instruction != 32'h13 & control_io_memWrite; // @[InstructionDecode.scala 163:57 164:21 167:21]
  assign io_ctl_branch = control_io_branch; // @[InstructionDecode.scala 159:17]
  assign io_ctl_aluOp = control_io_aluOp; // @[InstructionDecode.scala 156:16]
  assign io_ctl_jump = control_io_jump; // @[InstructionDecode.scala 162:15]
  assign io_ctl_aluSrc1 = control_io_aluSrc1; // @[InstructionDecode.scala 158:18]
  assign io_hdu_pcWrite = hdu_io_pc_write; // @[InstructionDecode.scala 150:18]
  assign io_pcSrc = bu_io_taken | io_ctl_jump != 2'h0; // @[InstructionDecode.scala 322:20]
  assign io_pcPlusOffset = io_ctl_jump == 2'h1 ? _io_pcPlusOffset_T_1 : _GEN_13; // @[InstructionDecode.scala 313:29 314:21]
  assign io_ifid_flush = hdu_io_ifid_flush; // @[InstructionDecode.scala 329:17]
  assign io_stall = io_func7 == 7'h1 & (io_func3 == 3'h4 | _T_56 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[InstructionDecode.scala 343:32]
  assign io_csr_o_data = _io_csr_o_data_T_4 ? _io_csr_o_data_T_13 : csr_io_o_data; // @[Mux.scala 101:16]
  assign io_is_csr = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 113:64]
  assign io_fcsr_o_data = csr_io_fcsr_o_data; // @[InstructionDecode.scala 119:37]
  assign io_f_read_0 = control_io_f_read_0; // @[InstructionDecode.scala 176:19]
  assign io_f_read_1 = control_io_f_read_1; // @[InstructionDecode.scala 176:19]
  assign io_f_read_2 = control_io_f_read_2; // @[InstructionDecode.scala 176:19]
  assign io_readData3 = _io_readData3_T_2 ? io_writeData : registers_io_readData_2; // @[InstructionDecode.scala 239:28]
  assign io_is_f = io_id_instruction[6:0] == 7'h7 | io_id_instruction[6:0] == 7'h27 | io_id_instruction[6:0] == 7'h43 |
    io_id_instruction[6:0] == 7'h47 | io_id_instruction[6:0] == 7'h4b | io_id_instruction[6:0] == 7'h4f |
    io_id_instruction[6:0] == 7'h53; // @[InstructionDecode.scala 98:53]
  assign io_raddr_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 365:33]
  assign io_raddr_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 183:38]
  assign io_raddr_2 = io_writeReg; // @[InstructionDecode.scala 365:33]
  assign io_rd_wdata = writeData; // @[InstructionDecode.scala 367:21]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_i_data = 3'h6 == csrController_io_forwardRS1 ? io_csr_Wb_data : _csr_io_i_data_T_9; // @[Mux.scala 81:58]
  assign csr_io_i_imm = io_id_instruction[19:15]; // @[InstructionDecode.scala 107:57]
  assign csr_io_i_opr = io_id_instruction[14:12]; // @[InstructionDecode.scala 108:57]
  assign csr_io_i_addr = io_id_instruction[31:20]; // @[InstructionDecode.scala 109:57]
  assign csr_io_i_w_en = io_is_csr & io_id_instruction[19:15] != 5'h0; // @[InstructionDecode.scala 110:54]
  assign csr_io_f_except_0 = io_f_except_2_0; // @[InstructionDecode.scala 111:37]
  assign csr_io_f_except_1 = io_f_except_2_1; // @[InstructionDecode.scala 111:37]
  assign csr_io_f_except_2 = io_f_except_2_2; // @[InstructionDecode.scala 111:37]
  assign csr_io_f_except_3 = io_f_except_2_3; // @[InstructionDecode.scala 111:37]
  assign csr_io_f_except_4 = io_f_except_2_4; // @[InstructionDecode.scala 111:37]
  assign csrController_io_regWrExecute = io_id_ex_regWr; // @[InstructionDecode.scala 124:42]
  assign csrController_io_rdSelExecute = io_id_ex_rd; // @[InstructionDecode.scala 125:42]
  assign csrController_io_csrWrExecute = io_csr_Ex; // @[InstructionDecode.scala 126:42]
  assign csrController_io_regWrMemory = io_ex_mem_regWr; // @[InstructionDecode.scala 127:42]
  assign csrController_io_rdSelMemory = io_ex_mem_rd; // @[InstructionDecode.scala 128:42]
  assign csrController_io_csrWrMemory = io_csr_Mem; // @[InstructionDecode.scala 129:42]
  assign csrController_io_regWrWriteback = io_ctl_writeEnable_0; // @[InstructionDecode.scala 130:42]
  assign csrController_io_rdSelWriteback = io_writeReg; // @[InstructionDecode.scala 131:42]
  assign csrController_io_csrWrWriteback = io_csr_Wb; // @[InstructionDecode.scala 132:42]
  assign csrController_io_rs1SelDecode = io_id_instruction[19:15]; // @[InstructionDecode.scala 133:62]
  assign csrController_io_csrInstDecode = io_id_instruction[6:0] == 7'h73; // @[InstructionDecode.scala 134:69]
  assign hdu_io_taken = bu_io_taken; // @[InstructionDecode.scala 289:16]
  assign hdu_io_jump = io_ctl_jump; // @[InstructionDecode.scala 148:15]
  assign control_io_in = io_id_instruction; // @[InstructionDecode.scala 155:17]
  assign registers_clock = clock;
  assign registers_reset = reset;
  assign registers_io_readAddress_0 = io_id_instruction[19:15]; // @[InstructionDecode.scala 188:31]
  assign registers_io_readAddress_1 = io_id_instruction[24:20]; // @[InstructionDecode.scala 183:38]
  assign registers_io_readAddress_2 = io_id_instruction[31:27]; // @[InstructionDecode.scala 184:50]
  assign registers_io_writeEnable_0 = io_ctl_writeEnable_0 | ~io_ex_stall & io_csr_Wb; // @[InstructionDecode.scala 190:56]
  assign registers_io_writeEnable_1 = io_ctl_writeEnable_1; // @[InstructionDecode.scala 196:33]
  assign registers_io_writeAddress = io_writeReg; // @[InstructionDecode.scala 191:29]
  assign registers_io_writeData = writeData; // @[InstructionDecode.scala 192:26]
  assign registers_io_f_read_0 = control_io_f_read_0; // @[InstructionDecode.scala 195:29]
  assign registers_io_f_read_1 = control_io_f_read_1; // @[InstructionDecode.scala 195:29]
  assign registers_io_f_read_2 = control_io_f_read_2; // @[InstructionDecode.scala 195:29]
  assign immediate_io_instruction = io_id_instruction; // @[InstructionDecode.scala 248:28]
  assign bu_io_branch = io_ctl_branch; // @[InstructionDecode.scala 284:16]
  assign bu_io_funct3 = io_id_instruction[14:12]; // @[InstructionDecode.scala 285:36]
  assign bu_io_rd1 = _T_23 ? io_ex_mem_result : _GEN_6; // @[InstructionDecode.scala 258:5 259:12]
  assign bu_io_rd2 = _T_31 ? io_ex_mem_result : _GEN_8; // @[InstructionDecode.scala 271:5 272:12]
endmodule
module ALU(
  input  [31:0] io_input1,
  input  [31:0] io_input2,
  input  [3:0]  io_aluCtl,
  output [31:0] io_result
);
  wire  _io_result_T = io_aluCtl == 4'h0; // @[ALU.scala 17:18]
  wire [31:0] _io_result_T_1 = io_input1 & io_input2; // @[ALU.scala 17:41]
  wire  _io_result_T_2 = io_aluCtl == 4'h1; // @[ALU.scala 18:18]
  wire [31:0] _io_result_T_3 = io_input1 | io_input2; // @[ALU.scala 18:41]
  wire  _io_result_T_4 = io_aluCtl == 4'h2; // @[ALU.scala 19:18]
  wire [31:0] _io_result_T_6 = io_input1 + io_input2; // @[ALU.scala 19:41]
  wire  _io_result_T_7 = io_aluCtl == 4'h3; // @[ALU.scala 20:18]
  wire [31:0] _io_result_T_9 = io_input1 - io_input2; // @[ALU.scala 20:41]
  wire  _io_result_T_10 = io_aluCtl == 4'h4; // @[ALU.scala 21:18]
  wire  _io_result_T_13 = $signed(io_input1) < $signed(io_input2); // @[ALU.scala 21:48]
  wire  _io_result_T_14 = io_aluCtl == 4'h5; // @[ALU.scala 22:18]
  wire  _io_result_T_15 = io_input1 < io_input2; // @[ALU.scala 22:41]
  wire  _io_result_T_16 = io_aluCtl == 4'h6; // @[ALU.scala 23:18]
  wire [62:0] _GEN_0 = {{31'd0}, io_input1}; // @[ALU.scala 23:41]
  wire [62:0] _io_result_T_18 = _GEN_0 << io_input2[4:0]; // @[ALU.scala 23:41]
  wire  _io_result_T_19 = io_aluCtl == 4'h7; // @[ALU.scala 24:18]
  wire [31:0] _io_result_T_21 = io_input1 >> io_input2[4:0]; // @[ALU.scala 24:41]
  wire  _io_result_T_22 = io_aluCtl == 4'h8; // @[ALU.scala 25:18]
  wire [31:0] _io_result_T_26 = $signed(io_input1) >>> io_input2[4:0]; // @[ALU.scala 25:68]
  wire  _io_result_T_27 = io_aluCtl == 4'h9; // @[ALU.scala 26:18]
  wire [31:0] _io_result_T_28 = io_input1 ^ io_input2; // @[ALU.scala 26:41]
  wire [31:0] _io_result_T_29 = _io_result_T_27 ? _io_result_T_28 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_result_T_30 = _io_result_T_22 ? _io_result_T_26 : _io_result_T_29; // @[Mux.scala 101:16]
  wire [31:0] _io_result_T_31 = _io_result_T_19 ? _io_result_T_21 : _io_result_T_30; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_32 = _io_result_T_16 ? _io_result_T_18 : {{31'd0}, _io_result_T_31}; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_33 = _io_result_T_14 ? {{62'd0}, _io_result_T_15} : _io_result_T_32; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_34 = _io_result_T_10 ? {{62'd0}, _io_result_T_13} : _io_result_T_33; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_35 = _io_result_T_7 ? {{31'd0}, _io_result_T_9} : _io_result_T_34; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_36 = _io_result_T_4 ? {{31'd0}, _io_result_T_6} : _io_result_T_35; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_37 = _io_result_T_2 ? {{31'd0}, _io_result_T_3} : _io_result_T_36; // @[Mux.scala 101:16]
  wire [62:0] _io_result_T_38 = _io_result_T ? {{31'd0}, _io_result_T_1} : _io_result_T_37; // @[Mux.scala 101:16]
  assign io_result = _io_result_T_38[31:0]; // @[ALU.scala 14:13]
endmodule
module AluControl(
  input  [1:0] io_aluOp,
  input        io_f7,
  input  [2:0] io_f3,
  input        io_aluSrc,
  output [3:0] io_out
);
  wire  _T_4 = ~io_f7; // @[AluControl.scala 39:34]
  wire [1:0] _GEN_0 = ~io_aluSrc | ~io_f7 ? 2'h2 : 2'h3; // @[AluControl.scala 39:43 40:18 43:20]
  wire [3:0] _GEN_1 = _T_4 ? 4'h7 : 4'h8; // @[AluControl.scala 56:29 57:18 59:18]
  wire [3:0] _GEN_2 = 3'h4 == io_f3 ? 4'h9 : 4'hf; // @[AluControl.scala 30:10 37:19 69:16]
  wire [3:0] _GEN_3 = 3'h6 == io_f3 ? 4'h1 : _GEN_2; // @[AluControl.scala 37:19 66:16]
  wire [3:0] _GEN_4 = 3'h7 == io_f3 ? 4'h0 : _GEN_3; // @[AluControl.scala 37:19 63:16]
  wire [3:0] _GEN_5 = 3'h5 == io_f3 ? _GEN_1 : _GEN_4; // @[AluControl.scala 37:19]
  wire [3:0] _GEN_6 = 3'h3 == io_f3 ? 4'h5 : _GEN_5; // @[AluControl.scala 37:19 53:16]
  wire [3:0] _GEN_7 = 3'h2 == io_f3 ? 4'h4 : _GEN_6; // @[AluControl.scala 37:19 50:16]
  wire [3:0] _GEN_8 = 3'h1 == io_f3 ? 4'h6 : _GEN_7; // @[AluControl.scala 37:19 47:16]
  wire [3:0] _GEN_9 = 3'h0 == io_f3 ? {{2'd0}, _GEN_0} : _GEN_8; // @[AluControl.scala 37:19]
  wire [3:0] _GEN_10 = io_aluOp == 2'h1 ? 4'hf : _GEN_9; // @[AluControl.scala 34:32 35:12]
  assign io_out = io_aluOp == 2'h0 ? 4'h2 : _GEN_10; // @[AluControl.scala 32:26 33:12]
endmodule
module ForwardingUnit(
  input  [4:0] io_ex_reg_rd,
  input  [4:0] io_mem_reg_rd,
  input  [4:0] io_reg_rs1,
  input  [4:0] io_reg_rs2,
  input        io_ex_regWrite_0,
  input        io_ex_regWrite_1,
  input        io_mem_regWrite_0,
  input        io_mem_regWrite_1,
  output [1:0] io_forwardA,
  output [1:0] io_forwardB,
  input        io_f_read_0,
  input        io_f_read_1,
  input        io_f_read_2,
  input  [4:0] io_reg_rs3,
  output [1:0] io_forwardC
);
  wire  _T = io_reg_rs1 == io_ex_reg_rd; // @[ForwardingUnit.scala 27:17]
  wire  _T_2 = io_ex_regWrite_0 ? io_ex_reg_rd != 5'h0 : 1'h1; // @[ForwardingUnit.scala 28:11]
  wire  _T_3 = _T & _T_2; // @[ForwardingUnit.scala 28:5]
  wire  _T_4 = ~io_f_read_0; // @[ForwardingUnit.scala 30:15]
  wire  _T_7 = ~io_f_read_0 & io_ex_regWrite_0 | io_f_read_0 & io_ex_regWrite_1; // @[ForwardingUnit.scala 30:55]
  wire  _T_8 = _T_3 & _T_7; // @[ForwardingUnit.scala 29:5]
  wire  _T_9 = io_reg_rs1 == io_mem_reg_rd; // @[ForwardingUnit.scala 36:17]
  wire  _T_11 = io_mem_regWrite_0 ? io_mem_reg_rd != 5'h0 : 1'h1; // @[ForwardingUnit.scala 37:11]
  wire  _T_12 = _T_9 & _T_11; // @[ForwardingUnit.scala 37:5]
  wire  _T_16 = _T_4 & io_mem_regWrite_0 | io_f_read_0 & io_mem_regWrite_1; // @[ForwardingUnit.scala 39:56]
  wire  _T_17 = _T_12 & _T_16; // @[ForwardingUnit.scala 38:5]
  wire [1:0] _GEN_0 = _T_17 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 42:5 43:17 45:17]
  wire  _T_18 = io_reg_rs2 == io_ex_reg_rd; // @[ForwardingUnit.scala 49:17]
  wire  _T_21 = _T_18 & _T_2; // @[ForwardingUnit.scala 50:5]
  wire  _T_22 = ~io_f_read_1; // @[ForwardingUnit.scala 52:15]
  wire  _T_25 = ~io_f_read_1 & io_ex_regWrite_0 | io_f_read_1 & io_ex_regWrite_1; // @[ForwardingUnit.scala 52:55]
  wire  _T_26 = _T_21 & _T_25; // @[ForwardingUnit.scala 51:5]
  wire  _T_27 = io_reg_rs2 == io_mem_reg_rd; // @[ForwardingUnit.scala 58:17]
  wire  _T_30 = _T_27 & _T_11; // @[ForwardingUnit.scala 59:5]
  wire  _T_34 = _T_22 & io_mem_regWrite_0 | io_f_read_1 & io_mem_regWrite_1; // @[ForwardingUnit.scala 61:56]
  wire  _T_35 = _T_30 & _T_34; // @[ForwardingUnit.scala 60:5]
  wire [1:0] _GEN_2 = _T_35 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 64:5 65:17 67:17]
  wire  _T_36 = io_reg_rs3 == io_ex_reg_rd; // @[ForwardingUnit.scala 72:23]
  wire  _T_38 = _T_36 & (io_f_read_2 & io_ex_regWrite_1); // @[ForwardingUnit.scala 73:7]
  wire  _T_39 = io_reg_rs3 == io_mem_reg_rd; // @[ForwardingUnit.scala 77:23]
  wire  _T_41 = _T_39 & (io_f_read_2 & io_mem_regWrite_1); // @[ForwardingUnit.scala 78:7]
  wire [1:0] _GEN_4 = _T_41 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 79:7 80:23 82:23]
  assign io_forwardA = _T_8 ? 2'h1 : _GEN_0; // @[ForwardingUnit.scala 33:5 34:17]
  assign io_forwardB = _T_26 ? 2'h1 : _GEN_2; // @[ForwardingUnit.scala 55:5 56:17]
  assign io_forwardC = _T_38 ? 2'h1 : _GEN_4; // @[ForwardingUnit.scala 74:7 75:23]
endmodule
module MDU(
  input         clock,
  input         reset,
  input  [31:0] io_src_a,
  input  [31:0] io_src_b,
  input  [4:0]  io_op,
  input         io_valid,
  output        io_ready,
  output        io_output_valid,
  output [31:0] io_output_bits
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  _result_T = io_op == 5'h0; // @[MDU.scala 34:16]
  wire  _result_T_1 = io_op == 5'h3; // @[MDU.scala 34:33]
  wire  _result_T_2 = io_op == 5'h0 | io_op == 5'h3; // @[MDU.scala 34:24]
  wire [63:0] _result_T_3 = io_src_a * io_src_b; // @[MDU.scala 34:58]
  wire  _result_T_4 = io_op == 5'h2; // @[MDU.scala 35:16]
  wire [32:0] _result_T_6 = {1'b0,$signed(io_src_b)}; // @[MDU.scala 35:66]
  wire [64:0] _result_T_7 = $signed(io_src_a) * $signed(_result_T_6); // @[MDU.scala 35:66]
  wire [63:0] _result_T_10 = _result_T_7[63:0]; // @[MDU.scala 35:78]
  wire  _result_T_11 = io_op == 5'h1; // @[MDU.scala 36:16]
  wire [63:0] _result_T_15 = $signed(io_src_a) * $signed(io_src_b); // @[MDU.scala 36:85]
  wire [63:0] _result_T_16 = _result_T_11 ? _result_T_15 : 64'h0; // @[Mux.scala 101:16]
  wire [63:0] _result_T_17 = _result_T_4 ? _result_T_10 : _result_T_16; // @[Mux.scala 101:16]
  wire [63:0] result = _result_T_2 ? _result_T_3 : _result_T_17; // @[Mux.scala 101:16]
  reg  r_ready; // @[MDU.scala 41:29]
  reg [5:0] r_counter; // @[MDU.scala 42:29]
  reg [31:0] r_dividend; // @[MDU.scala 43:29]
  reg [31:0] r_quotient; // @[MDU.scala 44:29]
  wire  _is_div_rem_u_T = io_op == 5'h5; // @[MDU.scala 48:39]
  wire  _is_div_rem_u_T_1 = io_op == 5'h7; // @[MDU.scala 48:57]
  wire  is_div_rem_u = io_op == 5'h5 | io_op == 5'h7; // @[MDU.scala 48:48]
  wire  _is_div_rem_s_T = io_op == 5'h4; // @[MDU.scala 49:39]
  wire  _is_div_rem_s_T_1 = io_op == 5'h6; // @[MDU.scala 49:56]
  wire  is_div_rem_s = io_op == 5'h4 | io_op == 5'h6; // @[MDU.scala 49:47]
  wire [31:0] _dividend_T_3 = 32'h0 - io_src_a; // @[MDU.scala 51:59]
  wire [31:0] dividend = is_div_rem_s & io_src_a[31] ? _dividend_T_3 : io_src_a; // @[MDU.scala 51:28]
  wire [31:0] _divisor_T_3 = 32'h0 - io_src_b; // @[MDU.scala 52:59]
  wire [31:0] divisor = is_div_rem_s & io_src_b[31] ? _divisor_T_3 : io_src_b; // @[MDU.scala 52:28]
  wire [5:0] _T_4 = r_counter - 6'h1; // @[MDU.scala 59:52]
  wire [94:0] _GEN_30 = {{63'd0}, divisor}; // @[MDU.scala 59:40]
  wire [94:0] _T_5 = _GEN_30 << _T_4; // @[MDU.scala 59:40]
  wire [94:0] _GEN_2 = {{63'd0}, r_dividend}; // @[MDU.scala 59:29]
  wire [94:0] _r_dividend_T_4 = _GEN_2 - _T_5; // @[MDU.scala 60:45]
  wire [63:0] _r_quotient_T_2 = 64'h1 << _T_4; // @[MDU.scala 61:51]
  wire [63:0] _GEN_27 = {{32'd0}, r_quotient}; // @[MDU.scala 61:45]
  wire [63:0] _r_quotient_T_4 = _GEN_27 + _r_quotient_T_2; // @[MDU.scala 61:45]
  wire [94:0] _GEN_0 = _GEN_2 >= _T_5 ? _r_dividend_T_4 : {{63'd0}, r_dividend}; // @[MDU.scala 43:29 59:59 60:31]
  wire [63:0] _GEN_1 = _GEN_2 >= _T_5 ? _r_quotient_T_4 : {{32'd0}, r_quotient}; // @[MDU.scala 44:29 59:59 61:31]
  wire [94:0] _GEN_3 = r_counter != 6'h0 ? _GEN_0 : {{63'd0}, r_dividend}; // @[MDU.scala 43:29 58:38]
  wire [63:0] _GEN_4 = r_counter != 6'h0 ? _GEN_1 : {{32'd0}, r_quotient}; // @[MDU.scala 44:29 58:38]
  wire  _GEN_5 = r_counter != 6'h0 ? r_counter == 6'h1 : r_ready; // @[MDU.scala 58:38 66:24 41:29]
  wire  _GEN_7 = r_counter != 6'h0 ? 1'h0 : 1'h1; // @[MDU.scala 46:21 58:38 68:29]
  wire  _GEN_8 = io_valid ? 1'h0 : _GEN_5; // @[MDU.scala 53:32 54:24]
  wire [94:0] _GEN_10 = io_valid ? {{63'd0}, dividend} : _GEN_3; // @[MDU.scala 53:32 56:24]
  wire [63:0] _GEN_11 = io_valid ? 64'h0 : _GEN_4; // @[MDU.scala 53:32 57:24]
  wire  _GEN_12 = io_valid ? 1'h0 : _GEN_7; // @[MDU.scala 46:21 53:32]
  wire  _GEN_13 = is_div_rem_s | is_div_rem_u ? _GEN_8 : r_ready; // @[MDU.scala 41:29 50:39]
  wire [94:0] _GEN_15 = is_div_rem_s | is_div_rem_u ? _GEN_10 : {{63'd0}, r_dividend}; // @[MDU.scala 43:29 50:39]
  wire [63:0] _GEN_16 = is_div_rem_s | is_div_rem_u ? _GEN_11 : {{32'd0}, r_quotient}; // @[MDU.scala 44:29 50:39]
  wire  _GEN_17 = (is_div_rem_s | is_div_rem_u) & _GEN_12; // @[MDU.scala 46:21 50:39]
  wire [31:0] _io_output_bits_T_8 = 32'h0 - r_quotient; // @[MDU.scala 80:76]
  wire [31:0] _io_output_bits_T_9 = io_src_a[31] != io_src_b[31] & |io_src_b ? _io_output_bits_T_8 : r_quotient; // @[MDU.scala 80:30]
  wire [31:0] _io_output_bits_T_12 = 32'h0 - r_dividend; // @[MDU.scala 84:44]
  wire [31:0] _io_output_bits_T_13 = io_src_a[31] ? _io_output_bits_T_12 : r_dividend; // @[MDU.scala 84:30]
  wire [31:0] _GEN_18 = _is_div_rem_u_T_1 ? r_dividend : 32'h0; // @[MDU.scala 85:31 86:24 88:24]
  wire [31:0] _GEN_19 = _is_div_rem_s_T_1 ? _io_output_bits_T_13 : _GEN_18; // @[MDU.scala 83:30 84:24]
  wire [31:0] _GEN_20 = _is_div_rem_u_T ? r_quotient : _GEN_19; // @[MDU.scala 81:31 82:24]
  wire [31:0] _GEN_21 = _is_div_rem_s_T ? _io_output_bits_T_9 : _GEN_20; // @[MDU.scala 79:30 80:24]
  wire [31:0] _GEN_22 = _result_T_11 | _result_T_1 | _result_T_4 ? result[63:32] : _GEN_21; // @[MDU.scala 76:70 77:24]
  wire  _GEN_23 = _result_T_11 | _result_T_1 | _result_T_4 | _GEN_17; // @[MDU.scala 76:70 78:25]
  wire [94:0] _GEN_28 = reset ? 95'h0 : _GEN_15; // @[MDU.scala 43:{29,29}]
  wire [63:0] _GEN_29 = reset ? 64'h0 : _GEN_16; // @[MDU.scala 44:{29,29}]
  assign io_ready = r_ready; // @[MDU.scala 72:18]
  assign io_output_valid = _result_T | _GEN_23; // @[MDU.scala 73:24 75:25]
  assign io_output_bits = _result_T ? result[31:0] : _GEN_22; // @[MDU.scala 73:24 74:24]
  always @(posedge clock) begin
    r_ready <= reset | _GEN_13; // @[MDU.scala 41:{29,29}]
    if (reset) begin // @[MDU.scala 42:29]
      r_counter <= 6'h20; // @[MDU.scala 42:29]
    end else if (is_div_rem_s | is_div_rem_u) begin // @[MDU.scala 50:39]
      if (io_valid) begin // @[MDU.scala 53:32]
        r_counter <= 6'h20; // @[MDU.scala 55:24]
      end else if (r_counter != 6'h0) begin // @[MDU.scala 58:38]
        r_counter <= _T_4; // @[MDU.scala 65:24]
      end
    end
    r_dividend <= _GEN_28[31:0]; // @[MDU.scala 43:{29,29}]
    r_quotient <= _GEN_29[31:0]; // @[MDU.scala 44:{29,29}]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  r_ready = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  r_counter = _RAND_1[5:0];
  _RAND_2 = {1{`RANDOM}};
  r_dividend = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  r_quotient = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MulAddRecFNToRaw_preMul_e8_s24(
  input  [1:0]  io_op,
  input  [32:0] io_a,
  input  [32:0] io_b,
  input  [32:0] io_c,
  output [23:0] io_mulAddA,
  output [23:0] io_mulAddB,
  output [47:0] io_mulAddC,
  output        io_toPostMul_isSigNaNAny,
  output        io_toPostMul_isNaNAOrB,
  output        io_toPostMul_isInfA,
  output        io_toPostMul_isZeroA,
  output        io_toPostMul_isInfB,
  output        io_toPostMul_isZeroB,
  output        io_toPostMul_signProd,
  output        io_toPostMul_isNaNC,
  output        io_toPostMul_isInfC,
  output        io_toPostMul_isZeroC,
  output [9:0]  io_toPostMul_sExpSum,
  output        io_toPostMul_doSubMags,
  output        io_toPostMul_CIsDominant,
  output [4:0]  io_toPostMul_CDom_CAlignDist,
  output [25:0] io_toPostMul_highAlignedSigC,
  output        io_toPostMul_bit0AlignedSigC
);
  wire [8:0] rawA_exp = io_a[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  rawA_isZero = rawA_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  rawA_isSpecial = rawA_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  rawA__isNaN = rawA_isSpecial & rawA_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawA__sign = io_a[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] rawA__sExp = {1'b0,$signed(rawA_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _rawA_out_sig_T = ~rawA_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] rawA__sig = {1'h0,_rawA_out_sig_T,io_a[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire [8:0] rawB_exp = io_b[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  rawB_isZero = rawB_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  rawB_isSpecial = rawB_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  rawB__isNaN = rawB_isSpecial & rawB_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawB__sign = io_b[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] rawB__sExp = {1'b0,$signed(rawB_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _rawB_out_sig_T = ~rawB_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] rawB__sig = {1'h0,_rawB_out_sig_T,io_b[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire [8:0] rawC_exp = io_c[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  rawC_isZero = rawC_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  rawC_isSpecial = rawC_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  rawC__isNaN = rawC_isSpecial & rawC_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawC__sign = io_c[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] rawC__sExp = {1'b0,$signed(rawC_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _rawC_out_sig_T = ~rawC_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] rawC__sig = {1'h0,_rawC_out_sig_T,io_c[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  signProd = rawA__sign ^ rawB__sign ^ io_op[1]; // @[MulAddRecFN.scala 97:42]
  wire [10:0] _sExpAlignedProd_T = $signed(rawA__sExp) + $signed(rawB__sExp); // @[MulAddRecFN.scala 100:19]
  wire [10:0] sExpAlignedProd = $signed(_sExpAlignedProd_T) - 11'she5; // @[MulAddRecFN.scala 100:32]
  wire  doSubMags = signProd ^ rawC__sign ^ io_op[0]; // @[MulAddRecFN.scala 102:42]
  wire [10:0] _GEN_0 = {{1{rawC__sExp[9]}},rawC__sExp}; // @[MulAddRecFN.scala 106:42]
  wire [10:0] sNatCAlignDist = $signed(sExpAlignedProd) - $signed(_GEN_0); // @[MulAddRecFN.scala 106:42]
  wire [9:0] posNatCAlignDist = sNatCAlignDist[9:0]; // @[MulAddRecFN.scala 107:42]
  wire  isMinCAlign = rawA_isZero | rawB_isZero | $signed(sNatCAlignDist) < 11'sh0; // @[MulAddRecFN.scala 108:50]
  wire  CIsDominant = _rawC_out_sig_T & (isMinCAlign | posNatCAlignDist <= 10'h18); // @[MulAddRecFN.scala 110:23]
  wire [6:0] _CAlignDist_T_2 = posNatCAlignDist < 10'h4a ? posNatCAlignDist[6:0] : 7'h4a; // @[MulAddRecFN.scala 114:16]
  wire [6:0] CAlignDist = isMinCAlign ? 7'h0 : _CAlignDist_T_2; // @[MulAddRecFN.scala 112:12]
  wire [24:0] _mainAlignedSigC_T = ~rawC__sig; // @[MulAddRecFN.scala 120:25]
  wire [24:0] _mainAlignedSigC_T_1 = doSubMags ? _mainAlignedSigC_T : rawC__sig; // @[MulAddRecFN.scala 120:13]
  wire [52:0] _mainAlignedSigC_T_3 = doSubMags ? 53'h1fffffffffffff : 53'h0; // @[Bitwise.scala 77:12]
  wire [77:0] _mainAlignedSigC_T_5 = {_mainAlignedSigC_T_1,_mainAlignedSigC_T_3}; // @[MulAddRecFN.scala 120:94]
  wire [77:0] mainAlignedSigC = $signed(_mainAlignedSigC_T_5) >>> CAlignDist; // @[MulAddRecFN.scala 120:100]
  wire [26:0] _reduced4CExtra_T = {rawC__sig, 2'h0}; // @[MulAddRecFN.scala 122:30]
  wire  reduced4CExtra_reducedVec_0 = |_reduced4CExtra_T[3:0]; // @[primitives.scala 120:54]
  wire  reduced4CExtra_reducedVec_1 = |_reduced4CExtra_T[7:4]; // @[primitives.scala 120:54]
  wire  reduced4CExtra_reducedVec_2 = |_reduced4CExtra_T[11:8]; // @[primitives.scala 120:54]
  wire  reduced4CExtra_reducedVec_3 = |_reduced4CExtra_T[15:12]; // @[primitives.scala 120:54]
  wire  reduced4CExtra_reducedVec_4 = |_reduced4CExtra_T[19:16]; // @[primitives.scala 120:54]
  wire  reduced4CExtra_reducedVec_5 = |_reduced4CExtra_T[23:20]; // @[primitives.scala 120:54]
  wire  reduced4CExtra_reducedVec_6 = |_reduced4CExtra_T[26:24]; // @[primitives.scala 123:57]
  wire [6:0] _reduced4CExtra_T_1 = {reduced4CExtra_reducedVec_6,reduced4CExtra_reducedVec_5,reduced4CExtra_reducedVec_4,
    reduced4CExtra_reducedVec_3,reduced4CExtra_reducedVec_2,reduced4CExtra_reducedVec_1,reduced4CExtra_reducedVec_0}; // @[primitives.scala 124:20]
  wire [32:0] reduced4CExtra_shift = 33'sh100000000 >>> CAlignDist[6:2]; // @[primitives.scala 76:56]
  wire [5:0] _reduced4CExtra_T_18 = {reduced4CExtra_shift[14],reduced4CExtra_shift[15],reduced4CExtra_shift[16],
    reduced4CExtra_shift[17],reduced4CExtra_shift[18],reduced4CExtra_shift[19]}; // @[Cat.scala 33:92]
  wire [6:0] _GEN_1 = {{1'd0}, _reduced4CExtra_T_18}; // @[MulAddRecFN.scala 122:68]
  wire [6:0] _reduced4CExtra_T_19 = _reduced4CExtra_T_1 & _GEN_1; // @[MulAddRecFN.scala 122:68]
  wire  reduced4CExtra = |_reduced4CExtra_T_19; // @[MulAddRecFN.scala 130:11]
  wire  _alignedSigC_T_4 = &mainAlignedSigC[2:0] & ~reduced4CExtra; // @[MulAddRecFN.scala 134:44]
  wire  _alignedSigC_T_7 = |mainAlignedSigC[2:0] | reduced4CExtra; // @[MulAddRecFN.scala 135:44]
  wire  _alignedSigC_T_8 = doSubMags ? _alignedSigC_T_4 : _alignedSigC_T_7; // @[MulAddRecFN.scala 133:16]
  wire [74:0] alignedSigC_hi = mainAlignedSigC[77:3]; // @[Cat.scala 33:92]
  wire [75:0] alignedSigC = {alignedSigC_hi,_alignedSigC_T_8}; // @[Cat.scala 33:92]
  wire  _io_toPostMul_isSigNaNAny_T_2 = rawA__isNaN & ~rawA__sig[22]; // @[common.scala 82:46]
  wire  _io_toPostMul_isSigNaNAny_T_5 = rawB__isNaN & ~rawB__sig[22]; // @[common.scala 82:46]
  wire  _io_toPostMul_isSigNaNAny_T_9 = rawC__isNaN & ~rawC__sig[22]; // @[common.scala 82:46]
  wire [10:0] _io_toPostMul_sExpSum_T_2 = $signed(sExpAlignedProd) - 11'sh18; // @[MulAddRecFN.scala 158:53]
  wire [10:0] _io_toPostMul_sExpSum_T_3 = CIsDominant ? $signed({{1{rawC__sExp[9]}},rawC__sExp}) : $signed(
    _io_toPostMul_sExpSum_T_2); // @[MulAddRecFN.scala 158:12]
  assign io_mulAddA = rawA__sig[23:0]; // @[MulAddRecFN.scala 141:16]
  assign io_mulAddB = rawB__sig[23:0]; // @[MulAddRecFN.scala 142:16]
  assign io_mulAddC = alignedSigC[48:1]; // @[MulAddRecFN.scala 143:30]
  assign io_toPostMul_isSigNaNAny = _io_toPostMul_isSigNaNAny_T_2 | _io_toPostMul_isSigNaNAny_T_5 |
    _io_toPostMul_isSigNaNAny_T_9; // @[MulAddRecFN.scala 146:58]
  assign io_toPostMul_isNaNAOrB = rawA__isNaN | rawB__isNaN; // @[MulAddRecFN.scala 148:42]
  assign io_toPostMul_isInfA = rawA_isSpecial & ~rawA_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign io_toPostMul_isZeroA = rawA_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign io_toPostMul_isInfB = rawB_isSpecial & ~rawB_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign io_toPostMul_isZeroB = rawB_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign io_toPostMul_signProd = rawA__sign ^ rawB__sign ^ io_op[1]; // @[MulAddRecFN.scala 97:42]
  assign io_toPostMul_isNaNC = rawC_isSpecial & rawC_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign io_toPostMul_isInfC = rawC_isSpecial & ~rawC_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign io_toPostMul_isZeroC = rawC_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign io_toPostMul_sExpSum = _io_toPostMul_sExpSum_T_3[9:0]; // @[MulAddRecFN.scala 157:28]
  assign io_toPostMul_doSubMags = signProd ^ rawC__sign ^ io_op[0]; // @[MulAddRecFN.scala 102:42]
  assign io_toPostMul_CIsDominant = _rawC_out_sig_T & (isMinCAlign | posNatCAlignDist <= 10'h18); // @[MulAddRecFN.scala 110:23]
  assign io_toPostMul_CDom_CAlignDist = CAlignDist[4:0]; // @[MulAddRecFN.scala 161:47]
  assign io_toPostMul_highAlignedSigC = alignedSigC[74:49]; // @[MulAddRecFN.scala 163:20]
  assign io_toPostMul_bit0AlignedSigC = alignedSigC[0]; // @[MulAddRecFN.scala 164:48]
endmodule
module MulAddRecFNToRaw_postMul_e8_s24(
  input         io_fromPreMul_isSigNaNAny,
  input         io_fromPreMul_isNaNAOrB,
  input         io_fromPreMul_isInfA,
  input         io_fromPreMul_isZeroA,
  input         io_fromPreMul_isInfB,
  input         io_fromPreMul_isZeroB,
  input         io_fromPreMul_signProd,
  input         io_fromPreMul_isNaNC,
  input         io_fromPreMul_isInfC,
  input         io_fromPreMul_isZeroC,
  input  [9:0]  io_fromPreMul_sExpSum,
  input         io_fromPreMul_doSubMags,
  input         io_fromPreMul_CIsDominant,
  input  [4:0]  io_fromPreMul_CDom_CAlignDist,
  input  [25:0] io_fromPreMul_highAlignedSigC,
  input         io_fromPreMul_bit0AlignedSigC,
  input  [48:0] io_mulAddResult,
  input  [2:0]  io_roundingMode,
  output        io_invalidExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
  wire  roundingMode_min = io_roundingMode == 3'h2; // @[MulAddRecFN.scala 186:45]
  wire  CDom_sign = io_fromPreMul_signProd ^ io_fromPreMul_doSubMags; // @[MulAddRecFN.scala 190:42]
  wire [25:0] _sigSum_T_2 = io_fromPreMul_highAlignedSigC + 26'h1; // @[MulAddRecFN.scala 193:47]
  wire [25:0] _sigSum_T_3 = io_mulAddResult[48] ? _sigSum_T_2 : io_fromPreMul_highAlignedSigC; // @[MulAddRecFN.scala 192:16]
  wire [74:0] sigSum = {_sigSum_T_3,io_mulAddResult[47:0],io_fromPreMul_bit0AlignedSigC}; // @[Cat.scala 33:92]
  wire [1:0] _CDom_sExp_T = {1'b0,$signed(io_fromPreMul_doSubMags)}; // @[MulAddRecFN.scala 203:69]
  wire [9:0] _GEN_0 = {{8{_CDom_sExp_T[1]}},_CDom_sExp_T}; // @[MulAddRecFN.scala 203:43]
  wire [9:0] CDom_sExp = $signed(io_fromPreMul_sExpSum) - $signed(_GEN_0); // @[MulAddRecFN.scala 203:43]
  wire [49:0] _CDom_absSigSum_T_1 = ~sigSum[74:25]; // @[MulAddRecFN.scala 206:13]
  wire [49:0] _CDom_absSigSum_T_5 = {1'h0,io_fromPreMul_highAlignedSigC[25:24],sigSum[72:26]}; // @[MulAddRecFN.scala 209:71]
  wire [49:0] CDom_absSigSum = io_fromPreMul_doSubMags ? _CDom_absSigSum_T_1 : _CDom_absSigSum_T_5; // @[MulAddRecFN.scala 205:12]
  wire [23:0] _CDom_absSigSumExtra_T_1 = ~sigSum[24:1]; // @[MulAddRecFN.scala 215:14]
  wire  _CDom_absSigSumExtra_T_2 = |_CDom_absSigSumExtra_T_1; // @[MulAddRecFN.scala 215:36]
  wire  _CDom_absSigSumExtra_T_4 = |sigSum[25:1]; // @[MulAddRecFN.scala 216:37]
  wire  CDom_absSigSumExtra = io_fromPreMul_doSubMags ? _CDom_absSigSumExtra_T_2 : _CDom_absSigSumExtra_T_4; // @[MulAddRecFN.scala 214:12]
  wire [80:0] _GEN_5 = {{31'd0}, CDom_absSigSum}; // @[MulAddRecFN.scala 219:24]
  wire [80:0] _CDom_mainSig_T = _GEN_5 << io_fromPreMul_CDom_CAlignDist; // @[MulAddRecFN.scala 219:24]
  wire [28:0] CDom_mainSig = _CDom_mainSig_T[49:21]; // @[MulAddRecFN.scala 219:56]
  wire [26:0] _CDom_reduced4SigExtra_T_1 = {CDom_absSigSum[23:0], 3'h0}; // @[MulAddRecFN.scala 222:53]
  wire  CDom_reduced4SigExtra_reducedVec_0 = |_CDom_reduced4SigExtra_T_1[3:0]; // @[primitives.scala 120:54]
  wire  CDom_reduced4SigExtra_reducedVec_1 = |_CDom_reduced4SigExtra_T_1[7:4]; // @[primitives.scala 120:54]
  wire  CDom_reduced4SigExtra_reducedVec_2 = |_CDom_reduced4SigExtra_T_1[11:8]; // @[primitives.scala 120:54]
  wire  CDom_reduced4SigExtra_reducedVec_3 = |_CDom_reduced4SigExtra_T_1[15:12]; // @[primitives.scala 120:54]
  wire  CDom_reduced4SigExtra_reducedVec_4 = |_CDom_reduced4SigExtra_T_1[19:16]; // @[primitives.scala 120:54]
  wire  CDom_reduced4SigExtra_reducedVec_5 = |_CDom_reduced4SigExtra_T_1[23:20]; // @[primitives.scala 120:54]
  wire  CDom_reduced4SigExtra_reducedVec_6 = |_CDom_reduced4SigExtra_T_1[26:24]; // @[primitives.scala 123:57]
  wire [6:0] _CDom_reduced4SigExtra_T_2 = {CDom_reduced4SigExtra_reducedVec_6,CDom_reduced4SigExtra_reducedVec_5,
    CDom_reduced4SigExtra_reducedVec_4,CDom_reduced4SigExtra_reducedVec_3,CDom_reduced4SigExtra_reducedVec_2,
    CDom_reduced4SigExtra_reducedVec_1,CDom_reduced4SigExtra_reducedVec_0}; // @[primitives.scala 124:20]
  wire [2:0] _CDom_reduced4SigExtra_T_4 = ~io_fromPreMul_CDom_CAlignDist[4:2]; // @[primitives.scala 52:21]
  wire [8:0] CDom_reduced4SigExtra_shift = 9'sh100 >>> _CDom_reduced4SigExtra_T_4; // @[primitives.scala 76:56]
  wire [5:0] _CDom_reduced4SigExtra_T_20 = {CDom_reduced4SigExtra_shift[1],CDom_reduced4SigExtra_shift[2],
    CDom_reduced4SigExtra_shift[3],CDom_reduced4SigExtra_shift[4],CDom_reduced4SigExtra_shift[5],
    CDom_reduced4SigExtra_shift[6]}; // @[Cat.scala 33:92]
  wire [6:0] _GEN_1 = {{1'd0}, _CDom_reduced4SigExtra_T_20}; // @[MulAddRecFN.scala 222:72]
  wire [6:0] _CDom_reduced4SigExtra_T_21 = _CDom_reduced4SigExtra_T_2 & _GEN_1; // @[MulAddRecFN.scala 222:72]
  wire  CDom_reduced4SigExtra = |_CDom_reduced4SigExtra_T_21; // @[MulAddRecFN.scala 223:73]
  wire  _CDom_sig_T_4 = |CDom_mainSig[2:0] | CDom_reduced4SigExtra | CDom_absSigSumExtra; // @[MulAddRecFN.scala 226:61]
  wire [26:0] CDom_sig = {CDom_mainSig[28:3],_CDom_sig_T_4}; // @[Cat.scala 33:92]
  wire  notCDom_signSigSum = sigSum[51]; // @[MulAddRecFN.scala 232:36]
  wire [50:0] _notCDom_absSigSum_T_1 = ~sigSum[50:0]; // @[MulAddRecFN.scala 235:13]
  wire [50:0] _GEN_2 = {{50'd0}, io_fromPreMul_doSubMags}; // @[MulAddRecFN.scala 236:41]
  wire [50:0] _notCDom_absSigSum_T_4 = sigSum[50:0] + _GEN_2; // @[MulAddRecFN.scala 236:41]
  wire [50:0] notCDom_absSigSum = notCDom_signSigSum ? _notCDom_absSigSum_T_1 : _notCDom_absSigSum_T_4; // @[MulAddRecFN.scala 234:12]
  wire  notCDom_reduced2AbsSigSum_reducedVec_0 = |notCDom_absSigSum[1:0]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_1 = |notCDom_absSigSum[3:2]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_2 = |notCDom_absSigSum[5:4]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_3 = |notCDom_absSigSum[7:6]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_4 = |notCDom_absSigSum[9:8]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_5 = |notCDom_absSigSum[11:10]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_6 = |notCDom_absSigSum[13:12]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_7 = |notCDom_absSigSum[15:14]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_8 = |notCDom_absSigSum[17:16]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_9 = |notCDom_absSigSum[19:18]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_10 = |notCDom_absSigSum[21:20]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_11 = |notCDom_absSigSum[23:22]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_12 = |notCDom_absSigSum[25:24]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_13 = |notCDom_absSigSum[27:26]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_14 = |notCDom_absSigSum[29:28]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_15 = |notCDom_absSigSum[31:30]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_16 = |notCDom_absSigSum[33:32]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_17 = |notCDom_absSigSum[35:34]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_18 = |notCDom_absSigSum[37:36]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_19 = |notCDom_absSigSum[39:38]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_20 = |notCDom_absSigSum[41:40]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_21 = |notCDom_absSigSum[43:42]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_22 = |notCDom_absSigSum[45:44]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_23 = |notCDom_absSigSum[47:46]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_24 = |notCDom_absSigSum[49:48]; // @[primitives.scala 103:54]
  wire  notCDom_reduced2AbsSigSum_reducedVec_25 = |notCDom_absSigSum[50]; // @[primitives.scala 106:57]
  wire [5:0] notCDom_reduced2AbsSigSum_lo_lo = {notCDom_reduced2AbsSigSum_reducedVec_5,
    notCDom_reduced2AbsSigSum_reducedVec_4,notCDom_reduced2AbsSigSum_reducedVec_3,notCDom_reduced2AbsSigSum_reducedVec_2
    ,notCDom_reduced2AbsSigSum_reducedVec_1,notCDom_reduced2AbsSigSum_reducedVec_0}; // @[primitives.scala 107:20]
  wire [12:0] notCDom_reduced2AbsSigSum_lo = {notCDom_reduced2AbsSigSum_reducedVec_12,
    notCDom_reduced2AbsSigSum_reducedVec_11,notCDom_reduced2AbsSigSum_reducedVec_10,
    notCDom_reduced2AbsSigSum_reducedVec_9,notCDom_reduced2AbsSigSum_reducedVec_8,notCDom_reduced2AbsSigSum_reducedVec_7
    ,notCDom_reduced2AbsSigSum_reducedVec_6,notCDom_reduced2AbsSigSum_lo_lo}; // @[primitives.scala 107:20]
  wire [5:0] notCDom_reduced2AbsSigSum_hi_lo = {notCDom_reduced2AbsSigSum_reducedVec_18,
    notCDom_reduced2AbsSigSum_reducedVec_17,notCDom_reduced2AbsSigSum_reducedVec_16,
    notCDom_reduced2AbsSigSum_reducedVec_15,notCDom_reduced2AbsSigSum_reducedVec_14,
    notCDom_reduced2AbsSigSum_reducedVec_13}; // @[primitives.scala 107:20]
  wire [25:0] notCDom_reduced2AbsSigSum = {notCDom_reduced2AbsSigSum_reducedVec_25,
    notCDom_reduced2AbsSigSum_reducedVec_24,notCDom_reduced2AbsSigSum_reducedVec_23,
    notCDom_reduced2AbsSigSum_reducedVec_22,notCDom_reduced2AbsSigSum_reducedVec_21,
    notCDom_reduced2AbsSigSum_reducedVec_20,notCDom_reduced2AbsSigSum_reducedVec_19,notCDom_reduced2AbsSigSum_hi_lo,
    notCDom_reduced2AbsSigSum_lo}; // @[primitives.scala 107:20]
  wire [4:0] _notCDom_normDistReduced2_T_26 = notCDom_reduced2AbsSigSum[1] ? 5'h18 : 5'h19; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_27 = notCDom_reduced2AbsSigSum[2] ? 5'h17 : _notCDom_normDistReduced2_T_26; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_28 = notCDom_reduced2AbsSigSum[3] ? 5'h16 : _notCDom_normDistReduced2_T_27; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_29 = notCDom_reduced2AbsSigSum[4] ? 5'h15 : _notCDom_normDistReduced2_T_28; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_30 = notCDom_reduced2AbsSigSum[5] ? 5'h14 : _notCDom_normDistReduced2_T_29; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_31 = notCDom_reduced2AbsSigSum[6] ? 5'h13 : _notCDom_normDistReduced2_T_30; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_32 = notCDom_reduced2AbsSigSum[7] ? 5'h12 : _notCDom_normDistReduced2_T_31; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_33 = notCDom_reduced2AbsSigSum[8] ? 5'h11 : _notCDom_normDistReduced2_T_32; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_34 = notCDom_reduced2AbsSigSum[9] ? 5'h10 : _notCDom_normDistReduced2_T_33; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_35 = notCDom_reduced2AbsSigSum[10] ? 5'hf : _notCDom_normDistReduced2_T_34; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_36 = notCDom_reduced2AbsSigSum[11] ? 5'he : _notCDom_normDistReduced2_T_35; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_37 = notCDom_reduced2AbsSigSum[12] ? 5'hd : _notCDom_normDistReduced2_T_36; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_38 = notCDom_reduced2AbsSigSum[13] ? 5'hc : _notCDom_normDistReduced2_T_37; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_39 = notCDom_reduced2AbsSigSum[14] ? 5'hb : _notCDom_normDistReduced2_T_38; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_40 = notCDom_reduced2AbsSigSum[15] ? 5'ha : _notCDom_normDistReduced2_T_39; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_41 = notCDom_reduced2AbsSigSum[16] ? 5'h9 : _notCDom_normDistReduced2_T_40; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_42 = notCDom_reduced2AbsSigSum[17] ? 5'h8 : _notCDom_normDistReduced2_T_41; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_43 = notCDom_reduced2AbsSigSum[18] ? 5'h7 : _notCDom_normDistReduced2_T_42; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_44 = notCDom_reduced2AbsSigSum[19] ? 5'h6 : _notCDom_normDistReduced2_T_43; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_45 = notCDom_reduced2AbsSigSum[20] ? 5'h5 : _notCDom_normDistReduced2_T_44; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_46 = notCDom_reduced2AbsSigSum[21] ? 5'h4 : _notCDom_normDistReduced2_T_45; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_47 = notCDom_reduced2AbsSigSum[22] ? 5'h3 : _notCDom_normDistReduced2_T_46; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_48 = notCDom_reduced2AbsSigSum[23] ? 5'h2 : _notCDom_normDistReduced2_T_47; // @[Mux.scala 47:70]
  wire [4:0] _notCDom_normDistReduced2_T_49 = notCDom_reduced2AbsSigSum[24] ? 5'h1 : _notCDom_normDistReduced2_T_48; // @[Mux.scala 47:70]
  wire [4:0] notCDom_normDistReduced2 = notCDom_reduced2AbsSigSum[25] ? 5'h0 : _notCDom_normDistReduced2_T_49; // @[Mux.scala 47:70]
  wire [5:0] notCDom_nearNormDist = {notCDom_normDistReduced2, 1'h0}; // @[MulAddRecFN.scala 240:56]
  wire [6:0] _notCDom_sExp_T = {1'b0,$signed(notCDom_nearNormDist)}; // @[MulAddRecFN.scala 241:76]
  wire [9:0] _GEN_3 = {{3{_notCDom_sExp_T[6]}},_notCDom_sExp_T}; // @[MulAddRecFN.scala 241:46]
  wire [9:0] notCDom_sExp = $signed(io_fromPreMul_sExpSum) - $signed(_GEN_3); // @[MulAddRecFN.scala 241:46]
  wire [113:0] _GEN_6 = {{63'd0}, notCDom_absSigSum}; // @[MulAddRecFN.scala 243:27]
  wire [113:0] _notCDom_mainSig_T = _GEN_6 << notCDom_nearNormDist; // @[MulAddRecFN.scala 243:27]
  wire [28:0] notCDom_mainSig = _notCDom_mainSig_T[51:23]; // @[MulAddRecFN.scala 243:50]
  wire  notCDom_reduced4SigExtra_reducedVec_0 = |notCDom_reduced2AbsSigSum[1:0]; // @[primitives.scala 103:54]
  wire  notCDom_reduced4SigExtra_reducedVec_1 = |notCDom_reduced2AbsSigSum[3:2]; // @[primitives.scala 103:54]
  wire  notCDom_reduced4SigExtra_reducedVec_2 = |notCDom_reduced2AbsSigSum[5:4]; // @[primitives.scala 103:54]
  wire  notCDom_reduced4SigExtra_reducedVec_3 = |notCDom_reduced2AbsSigSum[7:6]; // @[primitives.scala 103:54]
  wire  notCDom_reduced4SigExtra_reducedVec_4 = |notCDom_reduced2AbsSigSum[9:8]; // @[primitives.scala 103:54]
  wire  notCDom_reduced4SigExtra_reducedVec_5 = |notCDom_reduced2AbsSigSum[11:10]; // @[primitives.scala 103:54]
  wire  notCDom_reduced4SigExtra_reducedVec_6 = |notCDom_reduced2AbsSigSum[12]; // @[primitives.scala 106:57]
  wire [6:0] _notCDom_reduced4SigExtra_T_2 = {notCDom_reduced4SigExtra_reducedVec_6,
    notCDom_reduced4SigExtra_reducedVec_5,notCDom_reduced4SigExtra_reducedVec_4,notCDom_reduced4SigExtra_reducedVec_3,
    notCDom_reduced4SigExtra_reducedVec_2,notCDom_reduced4SigExtra_reducedVec_1,notCDom_reduced4SigExtra_reducedVec_0}; // @[primitives.scala 107:20]
  wire [3:0] _notCDom_reduced4SigExtra_T_4 = ~notCDom_normDistReduced2[4:1]; // @[primitives.scala 52:21]
  wire [16:0] notCDom_reduced4SigExtra_shift = 17'sh10000 >>> _notCDom_reduced4SigExtra_T_4; // @[primitives.scala 76:56]
  wire [5:0] _notCDom_reduced4SigExtra_T_20 = {notCDom_reduced4SigExtra_shift[1],notCDom_reduced4SigExtra_shift[2],
    notCDom_reduced4SigExtra_shift[3],notCDom_reduced4SigExtra_shift[4],notCDom_reduced4SigExtra_shift[5],
    notCDom_reduced4SigExtra_shift[6]}; // @[Cat.scala 33:92]
  wire [6:0] _GEN_4 = {{1'd0}, _notCDom_reduced4SigExtra_T_20}; // @[MulAddRecFN.scala 247:78]
  wire [6:0] _notCDom_reduced4SigExtra_T_21 = _notCDom_reduced4SigExtra_T_2 & _GEN_4; // @[MulAddRecFN.scala 247:78]
  wire  notCDom_reduced4SigExtra = |_notCDom_reduced4SigExtra_T_21; // @[MulAddRecFN.scala 249:11]
  wire  _notCDom_sig_T_3 = |notCDom_mainSig[2:0] | notCDom_reduced4SigExtra; // @[MulAddRecFN.scala 252:39]
  wire [26:0] notCDom_sig = {notCDom_mainSig[28:3],_notCDom_sig_T_3}; // @[Cat.scala 33:92]
  wire  notCDom_completeCancellation = notCDom_sig[26:25] == 2'h0; // @[MulAddRecFN.scala 255:50]
  wire  _notCDom_sign_T = io_fromPreMul_signProd ^ notCDom_signSigSum; // @[MulAddRecFN.scala 259:36]
  wire  notCDom_sign = notCDom_completeCancellation ? roundingMode_min : _notCDom_sign_T; // @[MulAddRecFN.scala 257:12]
  wire  notNaN_isInfProd = io_fromPreMul_isInfA | io_fromPreMul_isInfB; // @[MulAddRecFN.scala 264:49]
  wire  notNaN_isInfOut = notNaN_isInfProd | io_fromPreMul_isInfC; // @[MulAddRecFN.scala 265:44]
  wire  notNaN_addZeros = (io_fromPreMul_isZeroA | io_fromPreMul_isZeroB) & io_fromPreMul_isZeroC; // @[MulAddRecFN.scala 267:58]
  wire  _io_invalidExc_T = io_fromPreMul_isInfA & io_fromPreMul_isZeroB; // @[MulAddRecFN.scala 272:31]
  wire  _io_invalidExc_T_1 = io_fromPreMul_isSigNaNAny | _io_invalidExc_T; // @[MulAddRecFN.scala 271:35]
  wire  _io_invalidExc_T_2 = io_fromPreMul_isZeroA & io_fromPreMul_isInfB; // @[MulAddRecFN.scala 273:32]
  wire  _io_invalidExc_T_3 = _io_invalidExc_T_1 | _io_invalidExc_T_2; // @[MulAddRecFN.scala 272:57]
  wire  _io_invalidExc_T_6 = ~io_fromPreMul_isNaNAOrB & notNaN_isInfProd; // @[MulAddRecFN.scala 274:36]
  wire  _io_invalidExc_T_7 = _io_invalidExc_T_6 & io_fromPreMul_isInfC; // @[MulAddRecFN.scala 275:61]
  wire  _io_invalidExc_T_8 = _io_invalidExc_T_7 & io_fromPreMul_doSubMags; // @[MulAddRecFN.scala 276:35]
  wire  _io_rawOut_isZero_T_1 = ~io_fromPreMul_CIsDominant & notCDom_completeCancellation; // @[MulAddRecFN.scala 283:42]
  wire  _io_rawOut_sign_T_1 = io_fromPreMul_isInfC & CDom_sign; // @[MulAddRecFN.scala 286:31]
  wire  _io_rawOut_sign_T_2 = notNaN_isInfProd & io_fromPreMul_signProd | _io_rawOut_sign_T_1; // @[MulAddRecFN.scala 285:54]
  wire  _io_rawOut_sign_T_5 = notNaN_addZeros & ~roundingMode_min & io_fromPreMul_signProd; // @[MulAddRecFN.scala 287:48]
  wire  _io_rawOut_sign_T_6 = _io_rawOut_sign_T_5 & CDom_sign; // @[MulAddRecFN.scala 288:36]
  wire  _io_rawOut_sign_T_7 = _io_rawOut_sign_T_2 | _io_rawOut_sign_T_6; // @[MulAddRecFN.scala 286:43]
  wire  _io_rawOut_sign_T_9 = io_fromPreMul_signProd | CDom_sign; // @[MulAddRecFN.scala 290:37]
  wire  _io_rawOut_sign_T_10 = notNaN_addZeros & roundingMode_min & _io_rawOut_sign_T_9; // @[MulAddRecFN.scala 289:46]
  wire  _io_rawOut_sign_T_11 = _io_rawOut_sign_T_7 | _io_rawOut_sign_T_10; // @[MulAddRecFN.scala 288:48]
  wire  _io_rawOut_sign_T_15 = io_fromPreMul_CIsDominant ? CDom_sign : notCDom_sign; // @[MulAddRecFN.scala 292:17]
  wire  _io_rawOut_sign_T_16 = ~notNaN_isInfOut & ~notNaN_addZeros & _io_rawOut_sign_T_15; // @[MulAddRecFN.scala 291:49]
  assign io_invalidExc = _io_invalidExc_T_3 | _io_invalidExc_T_8; // @[MulAddRecFN.scala 273:57]
  assign io_rawOut_isNaN = io_fromPreMul_isNaNAOrB | io_fromPreMul_isNaNC; // @[MulAddRecFN.scala 278:48]
  assign io_rawOut_isInf = notNaN_isInfProd | io_fromPreMul_isInfC; // @[MulAddRecFN.scala 265:44]
  assign io_rawOut_isZero = notNaN_addZeros | _io_rawOut_isZero_T_1; // @[MulAddRecFN.scala 282:25]
  assign io_rawOut_sign = _io_rawOut_sign_T_11 | _io_rawOut_sign_T_16; // @[MulAddRecFN.scala 290:50]
  assign io_rawOut_sExp = io_fromPreMul_CIsDominant ? $signed(CDom_sExp) : $signed(notCDom_sExp); // @[MulAddRecFN.scala 293:26]
  assign io_rawOut_sig = io_fromPreMul_CIsDominant ? CDom_sig : notCDom_sig; // @[MulAddRecFN.scala 294:25]
endmodule
module RoundAnyRawFNToRecFN_ie8_is26_oe8_os24(
  input         io_invalidExc,
  input         io_infiniteExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [9:0]  io_in_sExp,
  input  [26:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundingMode_near_even = io_roundingMode == 3'h0; // @[RoundAnyRawFNToRecFN.scala 90:53]
  wire  roundingMode_min = io_roundingMode == 3'h2; // @[RoundAnyRawFNToRecFN.scala 92:53]
  wire  roundingMode_max = io_roundingMode == 3'h3; // @[RoundAnyRawFNToRecFN.scala 93:53]
  wire  roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RoundAnyRawFNToRecFN.scala 94:53]
  wire  roundingMode_odd = io_roundingMode == 3'h6; // @[RoundAnyRawFNToRecFN.scala 95:53]
  wire  roundMagUp = roundingMode_min & io_in_sign | roundingMode_max & ~io_in_sign; // @[RoundAnyRawFNToRecFN.scala 98:42]
  wire  doShiftSigDown1 = io_in_sig[26]; // @[RoundAnyRawFNToRecFN.scala 120:57]
  wire [8:0] _roundMask_T_1 = ~io_in_sExp[8:0]; // @[primitives.scala 52:21]
  wire  roundMask_msb = _roundMask_T_1[8]; // @[primitives.scala 58:25]
  wire [7:0] roundMask_lsbs = _roundMask_T_1[7:0]; // @[primitives.scala 59:26]
  wire  roundMask_msb_1 = roundMask_lsbs[7]; // @[primitives.scala 58:25]
  wire [6:0] roundMask_lsbs_1 = roundMask_lsbs[6:0]; // @[primitives.scala 59:26]
  wire  roundMask_msb_2 = roundMask_lsbs_1[6]; // @[primitives.scala 58:25]
  wire [5:0] roundMask_lsbs_2 = roundMask_lsbs_1[5:0]; // @[primitives.scala 59:26]
  wire [64:0] roundMask_shift = 65'sh10000000000000000 >>> roundMask_lsbs_2; // @[primitives.scala 76:56]
  wire [15:0] _GEN_0 = {{8'd0}, roundMask_shift[57:50]}; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_7 = _GEN_0 & 16'hff; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_9 = {roundMask_shift[49:42], 8'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _roundMask_T_11 = _roundMask_T_9 & 16'hff00; // @[Bitwise.scala 108:80]
  wire [15:0] _roundMask_T_12 = _roundMask_T_7 | _roundMask_T_11; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_1 = {{4'd0}, _roundMask_T_12[15:4]}; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_17 = _GEN_1 & 16'hf0f; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_19 = {_roundMask_T_12[11:0], 4'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _roundMask_T_21 = _roundMask_T_19 & 16'hf0f0; // @[Bitwise.scala 108:80]
  wire [15:0] _roundMask_T_22 = _roundMask_T_17 | _roundMask_T_21; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_2 = {{2'd0}, _roundMask_T_22[15:2]}; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_27 = _GEN_2 & 16'h3333; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_29 = {_roundMask_T_22[13:0], 2'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _roundMask_T_31 = _roundMask_T_29 & 16'hcccc; // @[Bitwise.scala 108:80]
  wire [15:0] _roundMask_T_32 = _roundMask_T_27 | _roundMask_T_31; // @[Bitwise.scala 108:39]
  wire [15:0] _GEN_3 = {{1'd0}, _roundMask_T_32[15:1]}; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_37 = _GEN_3 & 16'h5555; // @[Bitwise.scala 108:31]
  wire [15:0] _roundMask_T_39 = {_roundMask_T_32[14:0], 1'h0}; // @[Bitwise.scala 108:70]
  wire [15:0] _roundMask_T_41 = _roundMask_T_39 & 16'haaaa; // @[Bitwise.scala 108:80]
  wire [15:0] _roundMask_T_42 = _roundMask_T_37 | _roundMask_T_41; // @[Bitwise.scala 108:39]
  wire [21:0] _roundMask_T_59 = {_roundMask_T_42,roundMask_shift[58],roundMask_shift[59],roundMask_shift[60],
    roundMask_shift[61],roundMask_shift[62],roundMask_shift[63]}; // @[Cat.scala 33:92]
  wire [21:0] _roundMask_T_60 = ~_roundMask_T_59; // @[primitives.scala 73:32]
  wire [21:0] _roundMask_T_61 = roundMask_msb_2 ? 22'h0 : _roundMask_T_60; // @[primitives.scala 73:21]
  wire [21:0] _roundMask_T_62 = ~_roundMask_T_61; // @[primitives.scala 73:17]
  wire [24:0] _roundMask_T_63 = {_roundMask_T_62,3'h7}; // @[primitives.scala 68:58]
  wire [2:0] _roundMask_T_70 = {roundMask_shift[0],roundMask_shift[1],roundMask_shift[2]}; // @[Cat.scala 33:92]
  wire [2:0] _roundMask_T_71 = roundMask_msb_2 ? _roundMask_T_70 : 3'h0; // @[primitives.scala 62:24]
  wire [24:0] _roundMask_T_72 = roundMask_msb_1 ? _roundMask_T_63 : {{22'd0}, _roundMask_T_71}; // @[primitives.scala 67:24]
  wire [24:0] _roundMask_T_73 = roundMask_msb ? _roundMask_T_72 : 25'h0; // @[primitives.scala 62:24]
  wire [24:0] _GEN_4 = {{24'd0}, doShiftSigDown1}; // @[RoundAnyRawFNToRecFN.scala 159:23]
  wire [24:0] _roundMask_T_74 = _roundMask_T_73 | _GEN_4; // @[RoundAnyRawFNToRecFN.scala 159:23]
  wire [26:0] roundMask = {_roundMask_T_74,2'h3}; // @[RoundAnyRawFNToRecFN.scala 159:42]
  wire [27:0] _shiftedRoundMask_T = {1'h0,_roundMask_T_74,2'h3}; // @[RoundAnyRawFNToRecFN.scala 162:41]
  wire [26:0] shiftedRoundMask = _shiftedRoundMask_T[27:1]; // @[RoundAnyRawFNToRecFN.scala 162:53]
  wire [26:0] _roundPosMask_T = ~shiftedRoundMask; // @[RoundAnyRawFNToRecFN.scala 163:28]
  wire [26:0] roundPosMask = _roundPosMask_T & roundMask; // @[RoundAnyRawFNToRecFN.scala 163:46]
  wire [26:0] _roundPosBit_T = io_in_sig & roundPosMask; // @[RoundAnyRawFNToRecFN.scala 164:40]
  wire  roundPosBit = |_roundPosBit_T; // @[RoundAnyRawFNToRecFN.scala 164:56]
  wire [26:0] _anyRoundExtra_T = io_in_sig & shiftedRoundMask; // @[RoundAnyRawFNToRecFN.scala 165:42]
  wire  anyRoundExtra = |_anyRoundExtra_T; // @[RoundAnyRawFNToRecFN.scala 165:62]
  wire  anyRound = roundPosBit | anyRoundExtra; // @[RoundAnyRawFNToRecFN.scala 166:36]
  wire  _roundIncr_T = roundingMode_near_even | roundingMode_near_maxMag; // @[RoundAnyRawFNToRecFN.scala 169:38]
  wire  _roundIncr_T_1 = (roundingMode_near_even | roundingMode_near_maxMag) & roundPosBit; // @[RoundAnyRawFNToRecFN.scala 169:67]
  wire  _roundIncr_T_2 = roundMagUp & anyRound; // @[RoundAnyRawFNToRecFN.scala 171:29]
  wire  roundIncr = _roundIncr_T_1 | _roundIncr_T_2; // @[RoundAnyRawFNToRecFN.scala 170:31]
  wire [26:0] _roundedSig_T = io_in_sig | roundMask; // @[RoundAnyRawFNToRecFN.scala 174:32]
  wire [25:0] _roundedSig_T_2 = _roundedSig_T[26:2] + 25'h1; // @[RoundAnyRawFNToRecFN.scala 174:49]
  wire  _roundedSig_T_4 = ~anyRoundExtra; // @[RoundAnyRawFNToRecFN.scala 176:30]
  wire [25:0] _roundedSig_T_7 = roundingMode_near_even & roundPosBit & _roundedSig_T_4 ? roundMask[26:1] : 26'h0; // @[RoundAnyRawFNToRecFN.scala 175:25]
  wire [25:0] _roundedSig_T_8 = ~_roundedSig_T_7; // @[RoundAnyRawFNToRecFN.scala 175:21]
  wire [25:0] _roundedSig_T_9 = _roundedSig_T_2 & _roundedSig_T_8; // @[RoundAnyRawFNToRecFN.scala 174:57]
  wire [26:0] _roundedSig_T_10 = ~roundMask; // @[RoundAnyRawFNToRecFN.scala 180:32]
  wire [26:0] _roundedSig_T_11 = io_in_sig & _roundedSig_T_10; // @[RoundAnyRawFNToRecFN.scala 180:30]
  wire [25:0] _roundedSig_T_15 = roundingMode_odd & anyRound ? roundPosMask[26:1] : 26'h0; // @[RoundAnyRawFNToRecFN.scala 181:24]
  wire [25:0] _GEN_5 = {{1'd0}, _roundedSig_T_11[26:2]}; // @[RoundAnyRawFNToRecFN.scala 180:47]
  wire [25:0] _roundedSig_T_16 = _GEN_5 | _roundedSig_T_15; // @[RoundAnyRawFNToRecFN.scala 180:47]
  wire [25:0] roundedSig = roundIncr ? _roundedSig_T_9 : _roundedSig_T_16; // @[RoundAnyRawFNToRecFN.scala 173:16]
  wire [2:0] _sRoundedExp_T_1 = {1'b0,$signed(roundedSig[25:24])}; // @[RoundAnyRawFNToRecFN.scala 185:76]
  wire [9:0] _GEN_6 = {{7{_sRoundedExp_T_1[2]}},_sRoundedExp_T_1}; // @[RoundAnyRawFNToRecFN.scala 185:40]
  wire [10:0] sRoundedExp = $signed(io_in_sExp) + $signed(_GEN_6); // @[RoundAnyRawFNToRecFN.scala 185:40]
  wire [8:0] common_expOut = sRoundedExp[8:0]; // @[RoundAnyRawFNToRecFN.scala 187:37]
  wire [22:0] common_fractOut = doShiftSigDown1 ? roundedSig[23:1] : roundedSig[22:0]; // @[RoundAnyRawFNToRecFN.scala 189:16]
  wire [3:0] _common_overflow_T = sRoundedExp[10:7]; // @[RoundAnyRawFNToRecFN.scala 196:30]
  wire  common_overflow = $signed(_common_overflow_T) >= 4'sh3; // @[RoundAnyRawFNToRecFN.scala 196:50]
  wire  common_totalUnderflow = $signed(sRoundedExp) < 11'sh6b; // @[RoundAnyRawFNToRecFN.scala 200:31]
  wire  unboundedRange_roundPosBit = doShiftSigDown1 ? io_in_sig[2] : io_in_sig[1]; // @[RoundAnyRawFNToRecFN.scala 203:16]
  wire  unboundedRange_anyRound = doShiftSigDown1 & io_in_sig[2] | |io_in_sig[1:0]; // @[RoundAnyRawFNToRecFN.scala 205:49]
  wire  _unboundedRange_roundIncr_T_1 = _roundIncr_T & unboundedRange_roundPosBit; // @[RoundAnyRawFNToRecFN.scala 207:67]
  wire  _unboundedRange_roundIncr_T_2 = roundMagUp & unboundedRange_anyRound; // @[RoundAnyRawFNToRecFN.scala 209:29]
  wire  unboundedRange_roundIncr = _unboundedRange_roundIncr_T_1 | _unboundedRange_roundIncr_T_2; // @[RoundAnyRawFNToRecFN.scala 208:46]
  wire  roundCarry = doShiftSigDown1 ? roundedSig[25] : roundedSig[24]; // @[RoundAnyRawFNToRecFN.scala 211:16]
  wire [1:0] _common_underflow_T = io_in_sExp[9:8]; // @[RoundAnyRawFNToRecFN.scala 220:49]
  wire  _common_underflow_T_5 = doShiftSigDown1 ? roundMask[3] : roundMask[2]; // @[RoundAnyRawFNToRecFN.scala 221:30]
  wire  _common_underflow_T_6 = anyRound & $signed(_common_underflow_T) <= 2'sh0 & _common_underflow_T_5; // @[RoundAnyRawFNToRecFN.scala 220:72]
  wire  _common_underflow_T_10 = doShiftSigDown1 ? roundMask[4] : roundMask[3]; // @[RoundAnyRawFNToRecFN.scala 223:39]
  wire  _common_underflow_T_11 = ~_common_underflow_T_10; // @[RoundAnyRawFNToRecFN.scala 223:34]
  wire  _common_underflow_T_13 = _common_underflow_T_11 & roundCarry; // @[RoundAnyRawFNToRecFN.scala 226:38]
  wire  _common_underflow_T_15 = _common_underflow_T_13 & roundPosBit & unboundedRange_roundIncr; // @[RoundAnyRawFNToRecFN.scala 227:60]
  wire  _common_underflow_T_16 = ~_common_underflow_T_15; // @[RoundAnyRawFNToRecFN.scala 222:27]
  wire  _common_underflow_T_17 = _common_underflow_T_6 & _common_underflow_T_16; // @[RoundAnyRawFNToRecFN.scala 221:76]
  wire  common_underflow = common_totalUnderflow | _common_underflow_T_17; // @[RoundAnyRawFNToRecFN.scala 217:40]
  wire  common_inexact = common_totalUnderflow | anyRound; // @[RoundAnyRawFNToRecFN.scala 230:49]
  wire  isNaNOut = io_invalidExc | io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 235:34]
  wire  notNaN_isSpecialInfOut = io_infiniteExc | io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 236:49]
  wire  commonCase = ~isNaNOut & ~notNaN_isSpecialInfOut & ~io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 237:61]
  wire  overflow = commonCase & common_overflow; // @[RoundAnyRawFNToRecFN.scala 238:32]
  wire  underflow = commonCase & common_underflow; // @[RoundAnyRawFNToRecFN.scala 239:32]
  wire  inexact = overflow | commonCase & common_inexact; // @[RoundAnyRawFNToRecFN.scala 240:28]
  wire  overflow_roundMagUp = _roundIncr_T | roundMagUp; // @[RoundAnyRawFNToRecFN.scala 243:60]
  wire  pegMinNonzeroMagOut = commonCase & common_totalUnderflow & (roundMagUp | roundingMode_odd); // @[RoundAnyRawFNToRecFN.scala 245:45]
  wire  pegMaxFiniteMagOut = overflow & ~overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 246:39]
  wire  notNaN_isInfOut = notNaN_isSpecialInfOut | overflow & overflow_roundMagUp; // @[RoundAnyRawFNToRecFN.scala 248:32]
  wire  signOut = isNaNOut ? 1'h0 : io_in_sign; // @[RoundAnyRawFNToRecFN.scala 250:22]
  wire [8:0] _expOut_T_1 = io_in_isZero | common_totalUnderflow ? 9'h1c0 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 253:18]
  wire [8:0] _expOut_T_2 = ~_expOut_T_1; // @[RoundAnyRawFNToRecFN.scala 253:14]
  wire [8:0] _expOut_T_3 = common_expOut & _expOut_T_2; // @[RoundAnyRawFNToRecFN.scala 252:24]
  wire [8:0] _expOut_T_5 = pegMinNonzeroMagOut ? 9'h194 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 257:18]
  wire [8:0] _expOut_T_6 = ~_expOut_T_5; // @[RoundAnyRawFNToRecFN.scala 257:14]
  wire [8:0] _expOut_T_7 = _expOut_T_3 & _expOut_T_6; // @[RoundAnyRawFNToRecFN.scala 256:17]
  wire [8:0] _expOut_T_8 = pegMaxFiniteMagOut ? 9'h80 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 261:18]
  wire [8:0] _expOut_T_9 = ~_expOut_T_8; // @[RoundAnyRawFNToRecFN.scala 261:14]
  wire [8:0] _expOut_T_10 = _expOut_T_7 & _expOut_T_9; // @[RoundAnyRawFNToRecFN.scala 260:17]
  wire [8:0] _expOut_T_11 = notNaN_isInfOut ? 9'h40 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 265:18]
  wire [8:0] _expOut_T_12 = ~_expOut_T_11; // @[RoundAnyRawFNToRecFN.scala 265:14]
  wire [8:0] _expOut_T_13 = _expOut_T_10 & _expOut_T_12; // @[RoundAnyRawFNToRecFN.scala 264:17]
  wire [8:0] _expOut_T_14 = pegMinNonzeroMagOut ? 9'h6b : 9'h0; // @[RoundAnyRawFNToRecFN.scala 269:16]
  wire [8:0] _expOut_T_15 = _expOut_T_13 | _expOut_T_14; // @[RoundAnyRawFNToRecFN.scala 268:18]
  wire [8:0] _expOut_T_16 = pegMaxFiniteMagOut ? 9'h17f : 9'h0; // @[RoundAnyRawFNToRecFN.scala 273:16]
  wire [8:0] _expOut_T_17 = _expOut_T_15 | _expOut_T_16; // @[RoundAnyRawFNToRecFN.scala 272:15]
  wire [8:0] _expOut_T_18 = notNaN_isInfOut ? 9'h180 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 277:16]
  wire [8:0] _expOut_T_19 = _expOut_T_17 | _expOut_T_18; // @[RoundAnyRawFNToRecFN.scala 276:15]
  wire [8:0] _expOut_T_20 = isNaNOut ? 9'h1c0 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 278:16]
  wire [8:0] expOut = _expOut_T_19 | _expOut_T_20; // @[RoundAnyRawFNToRecFN.scala 277:73]
  wire [22:0] _fractOut_T_2 = isNaNOut ? 23'h400000 : 23'h0; // @[RoundAnyRawFNToRecFN.scala 281:16]
  wire [22:0] _fractOut_T_3 = isNaNOut | io_in_isZero | common_totalUnderflow ? _fractOut_T_2 : common_fractOut; // @[RoundAnyRawFNToRecFN.scala 280:12]
  wire [22:0] _fractOut_T_5 = pegMaxFiniteMagOut ? 23'h7fffff : 23'h0; // @[Bitwise.scala 77:12]
  wire [22:0] fractOut = _fractOut_T_3 | _fractOut_T_5; // @[RoundAnyRawFNToRecFN.scala 283:11]
  wire [9:0] _io_out_T = {signOut,expOut}; // @[RoundAnyRawFNToRecFN.scala 286:23]
  wire [3:0] _io_exceptionFlags_T_2 = {io_invalidExc,io_infiniteExc,overflow,underflow}; // @[RoundAnyRawFNToRecFN.scala 288:53]
  assign io_out = {_io_out_T,fractOut}; // @[RoundAnyRawFNToRecFN.scala 286:33]
  assign io_exceptionFlags = {_io_exceptionFlags_T_2,inexact}; // @[RoundAnyRawFNToRecFN.scala 288:66]
endmodule
module RoundRawFNToRecFN_e8_s24(
  input         io_invalidExc,
  input         io_infiniteExc,
  input         io_in_isNaN,
  input         io_in_isInf,
  input         io_in_isZero,
  input         io_in_sign,
  input  [9:0]  io_in_sExp,
  input  [26:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundAnyRawFNToRecFN_io_invalidExc; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire  roundAnyRawFNToRecFN_io_infiniteExc; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire  roundAnyRawFNToRecFN_io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire  roundAnyRawFNToRecFN_io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire  roundAnyRawFNToRecFN_io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire  roundAnyRawFNToRecFN_io_in_sign; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire [9:0] roundAnyRawFNToRecFN_io_in_sExp; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire [26:0] roundAnyRawFNToRecFN_io_in_sig; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire [2:0] roundAnyRawFNToRecFN_io_roundingMode; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire [32:0] roundAnyRawFNToRecFN_io_out; // @[RoundAnyRawFNToRecFN.scala 310:15]
  wire [4:0] roundAnyRawFNToRecFN_io_exceptionFlags; // @[RoundAnyRawFNToRecFN.scala 310:15]
  RoundAnyRawFNToRecFN_ie8_is26_oe8_os24 roundAnyRawFNToRecFN ( // @[RoundAnyRawFNToRecFN.scala 310:15]
    .io_invalidExc(roundAnyRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundAnyRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundAnyRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundAnyRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundAnyRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundAnyRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundAnyRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundAnyRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundAnyRawFNToRecFN_io_roundingMode),
    .io_out(roundAnyRawFNToRecFN_io_out),
    .io_exceptionFlags(roundAnyRawFNToRecFN_io_exceptionFlags)
  );
  assign io_out = roundAnyRawFNToRecFN_io_out; // @[RoundAnyRawFNToRecFN.scala 318:23]
  assign io_exceptionFlags = roundAnyRawFNToRecFN_io_exceptionFlags; // @[RoundAnyRawFNToRecFN.scala 319:23]
  assign roundAnyRawFNToRecFN_io_invalidExc = io_invalidExc; // @[RoundAnyRawFNToRecFN.scala 313:44]
  assign roundAnyRawFNToRecFN_io_infiniteExc = io_infiniteExc; // @[RoundAnyRawFNToRecFN.scala 314:44]
  assign roundAnyRawFNToRecFN_io_in_isNaN = io_in_isNaN; // @[RoundAnyRawFNToRecFN.scala 315:44]
  assign roundAnyRawFNToRecFN_io_in_isInf = io_in_isInf; // @[RoundAnyRawFNToRecFN.scala 315:44]
  assign roundAnyRawFNToRecFN_io_in_isZero = io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 315:44]
  assign roundAnyRawFNToRecFN_io_in_sign = io_in_sign; // @[RoundAnyRawFNToRecFN.scala 315:44]
  assign roundAnyRawFNToRecFN_io_in_sExp = io_in_sExp; // @[RoundAnyRawFNToRecFN.scala 315:44]
  assign roundAnyRawFNToRecFN_io_in_sig = io_in_sig; // @[RoundAnyRawFNToRecFN.scala 315:44]
  assign roundAnyRawFNToRecFN_io_roundingMode = io_roundingMode; // @[RoundAnyRawFNToRecFN.scala 316:44]
endmodule
module MulAddRecFN_e8_s24(
  input  [1:0]  io_op,
  input  [32:0] io_a,
  input  [32:0] io_b,
  input  [32:0] io_c,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire [1:0] mulAddRecFNToRaw_preMul_io_op; // @[MulAddRecFN.scala 317:15]
  wire [32:0] mulAddRecFNToRaw_preMul_io_a; // @[MulAddRecFN.scala 317:15]
  wire [32:0] mulAddRecFNToRaw_preMul_io_b; // @[MulAddRecFN.scala 317:15]
  wire [32:0] mulAddRecFNToRaw_preMul_io_c; // @[MulAddRecFN.scala 317:15]
  wire [23:0] mulAddRecFNToRaw_preMul_io_mulAddA; // @[MulAddRecFN.scala 317:15]
  wire [23:0] mulAddRecFNToRaw_preMul_io_mulAddB; // @[MulAddRecFN.scala 317:15]
  wire [47:0] mulAddRecFNToRaw_preMul_io_mulAddC; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isInfA; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isInfB; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_signProd; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isInfC; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC; // @[MulAddRecFN.scala 317:15]
  wire [9:0] mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant; // @[MulAddRecFN.scala 317:15]
  wire [4:0] mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist; // @[MulAddRecFN.scala 317:15]
  wire [25:0] mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC; // @[MulAddRecFN.scala 317:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isSigNaNAny; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNAOrB; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isInfA; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroA; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isInfB; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroB; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_signProd; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNC; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isInfC; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroC; // @[MulAddRecFN.scala 319:15]
  wire [9:0] mulAddRecFNToRaw_postMul_io_fromPreMul_sExpSum; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_doSubMags; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_CIsDominant; // @[MulAddRecFN.scala 319:15]
  wire [4:0] mulAddRecFNToRaw_postMul_io_fromPreMul_CDom_CAlignDist; // @[MulAddRecFN.scala 319:15]
  wire [25:0] mulAddRecFNToRaw_postMul_io_fromPreMul_highAlignedSigC; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_fromPreMul_bit0AlignedSigC; // @[MulAddRecFN.scala 319:15]
  wire [48:0] mulAddRecFNToRaw_postMul_io_mulAddResult; // @[MulAddRecFN.scala 319:15]
  wire [2:0] mulAddRecFNToRaw_postMul_io_roundingMode; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_invalidExc; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_rawOut_isNaN; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_rawOut_isInf; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_rawOut_isZero; // @[MulAddRecFN.scala 319:15]
  wire  mulAddRecFNToRaw_postMul_io_rawOut_sign; // @[MulAddRecFN.scala 319:15]
  wire [9:0] mulAddRecFNToRaw_postMul_io_rawOut_sExp; // @[MulAddRecFN.scala 319:15]
  wire [26:0] mulAddRecFNToRaw_postMul_io_rawOut_sig; // @[MulAddRecFN.scala 319:15]
  wire  roundRawFNToRecFN_io_invalidExc; // @[MulAddRecFN.scala 339:15]
  wire  roundRawFNToRecFN_io_infiniteExc; // @[MulAddRecFN.scala 339:15]
  wire  roundRawFNToRecFN_io_in_isNaN; // @[MulAddRecFN.scala 339:15]
  wire  roundRawFNToRecFN_io_in_isInf; // @[MulAddRecFN.scala 339:15]
  wire  roundRawFNToRecFN_io_in_isZero; // @[MulAddRecFN.scala 339:15]
  wire  roundRawFNToRecFN_io_in_sign; // @[MulAddRecFN.scala 339:15]
  wire [9:0] roundRawFNToRecFN_io_in_sExp; // @[MulAddRecFN.scala 339:15]
  wire [26:0] roundRawFNToRecFN_io_in_sig; // @[MulAddRecFN.scala 339:15]
  wire [2:0] roundRawFNToRecFN_io_roundingMode; // @[MulAddRecFN.scala 339:15]
  wire [32:0] roundRawFNToRecFN_io_out; // @[MulAddRecFN.scala 339:15]
  wire [4:0] roundRawFNToRecFN_io_exceptionFlags; // @[MulAddRecFN.scala 339:15]
  wire [47:0] _mulAddResult_T = mulAddRecFNToRaw_preMul_io_mulAddA * mulAddRecFNToRaw_preMul_io_mulAddB; // @[MulAddRecFN.scala 327:45]
  MulAddRecFNToRaw_preMul_e8_s24 mulAddRecFNToRaw_preMul ( // @[MulAddRecFN.scala 317:15]
    .io_op(mulAddRecFNToRaw_preMul_io_op),
    .io_a(mulAddRecFNToRaw_preMul_io_a),
    .io_b(mulAddRecFNToRaw_preMul_io_b),
    .io_c(mulAddRecFNToRaw_preMul_io_c),
    .io_mulAddA(mulAddRecFNToRaw_preMul_io_mulAddA),
    .io_mulAddB(mulAddRecFNToRaw_preMul_io_mulAddB),
    .io_mulAddC(mulAddRecFNToRaw_preMul_io_mulAddC),
    .io_toPostMul_isSigNaNAny(mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny),
    .io_toPostMul_isNaNAOrB(mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB),
    .io_toPostMul_isInfA(mulAddRecFNToRaw_preMul_io_toPostMul_isInfA),
    .io_toPostMul_isZeroA(mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA),
    .io_toPostMul_isInfB(mulAddRecFNToRaw_preMul_io_toPostMul_isInfB),
    .io_toPostMul_isZeroB(mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB),
    .io_toPostMul_signProd(mulAddRecFNToRaw_preMul_io_toPostMul_signProd),
    .io_toPostMul_isNaNC(mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC),
    .io_toPostMul_isInfC(mulAddRecFNToRaw_preMul_io_toPostMul_isInfC),
    .io_toPostMul_isZeroC(mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC),
    .io_toPostMul_sExpSum(mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum),
    .io_toPostMul_doSubMags(mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags),
    .io_toPostMul_CIsDominant(mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant),
    .io_toPostMul_CDom_CAlignDist(mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist),
    .io_toPostMul_highAlignedSigC(mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC),
    .io_toPostMul_bit0AlignedSigC(mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC)
  );
  MulAddRecFNToRaw_postMul_e8_s24 mulAddRecFNToRaw_postMul ( // @[MulAddRecFN.scala 319:15]
    .io_fromPreMul_isSigNaNAny(mulAddRecFNToRaw_postMul_io_fromPreMul_isSigNaNAny),
    .io_fromPreMul_isNaNAOrB(mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNAOrB),
    .io_fromPreMul_isInfA(mulAddRecFNToRaw_postMul_io_fromPreMul_isInfA),
    .io_fromPreMul_isZeroA(mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroA),
    .io_fromPreMul_isInfB(mulAddRecFNToRaw_postMul_io_fromPreMul_isInfB),
    .io_fromPreMul_isZeroB(mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroB),
    .io_fromPreMul_signProd(mulAddRecFNToRaw_postMul_io_fromPreMul_signProd),
    .io_fromPreMul_isNaNC(mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNC),
    .io_fromPreMul_isInfC(mulAddRecFNToRaw_postMul_io_fromPreMul_isInfC),
    .io_fromPreMul_isZeroC(mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroC),
    .io_fromPreMul_sExpSum(mulAddRecFNToRaw_postMul_io_fromPreMul_sExpSum),
    .io_fromPreMul_doSubMags(mulAddRecFNToRaw_postMul_io_fromPreMul_doSubMags),
    .io_fromPreMul_CIsDominant(mulAddRecFNToRaw_postMul_io_fromPreMul_CIsDominant),
    .io_fromPreMul_CDom_CAlignDist(mulAddRecFNToRaw_postMul_io_fromPreMul_CDom_CAlignDist),
    .io_fromPreMul_highAlignedSigC(mulAddRecFNToRaw_postMul_io_fromPreMul_highAlignedSigC),
    .io_fromPreMul_bit0AlignedSigC(mulAddRecFNToRaw_postMul_io_fromPreMul_bit0AlignedSigC),
    .io_mulAddResult(mulAddRecFNToRaw_postMul_io_mulAddResult),
    .io_roundingMode(mulAddRecFNToRaw_postMul_io_roundingMode),
    .io_invalidExc(mulAddRecFNToRaw_postMul_io_invalidExc),
    .io_rawOut_isNaN(mulAddRecFNToRaw_postMul_io_rawOut_isNaN),
    .io_rawOut_isInf(mulAddRecFNToRaw_postMul_io_rawOut_isInf),
    .io_rawOut_isZero(mulAddRecFNToRaw_postMul_io_rawOut_isZero),
    .io_rawOut_sign(mulAddRecFNToRaw_postMul_io_rawOut_sign),
    .io_rawOut_sExp(mulAddRecFNToRaw_postMul_io_rawOut_sExp),
    .io_rawOut_sig(mulAddRecFNToRaw_postMul_io_rawOut_sig)
  );
  RoundRawFNToRecFN_e8_s24 roundRawFNToRecFN ( // @[MulAddRecFN.scala 339:15]
    .io_invalidExc(roundRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundRawFNToRecFN_io_roundingMode),
    .io_out(roundRawFNToRecFN_io_out),
    .io_exceptionFlags(roundRawFNToRecFN_io_exceptionFlags)
  );
  assign io_out = roundRawFNToRecFN_io_out; // @[MulAddRecFN.scala 345:23]
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags; // @[MulAddRecFN.scala 346:23]
  assign mulAddRecFNToRaw_preMul_io_op = io_op; // @[MulAddRecFN.scala 321:35]
  assign mulAddRecFNToRaw_preMul_io_a = io_a; // @[MulAddRecFN.scala 322:35]
  assign mulAddRecFNToRaw_preMul_io_b = io_b; // @[MulAddRecFN.scala 323:35]
  assign mulAddRecFNToRaw_preMul_io_c = io_c; // @[MulAddRecFN.scala 324:35]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isSigNaNAny = mulAddRecFNToRaw_preMul_io_toPostMul_isSigNaNAny; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNAOrB = mulAddRecFNToRaw_preMul_io_toPostMul_isNaNAOrB; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isInfA = mulAddRecFNToRaw_preMul_io_toPostMul_isInfA; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroA = mulAddRecFNToRaw_preMul_io_toPostMul_isZeroA; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isInfB = mulAddRecFNToRaw_preMul_io_toPostMul_isInfB; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroB = mulAddRecFNToRaw_preMul_io_toPostMul_isZeroB; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_signProd = mulAddRecFNToRaw_preMul_io_toPostMul_signProd; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isNaNC = mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isInfC = mulAddRecFNToRaw_preMul_io_toPostMul_isInfC; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_isZeroC = mulAddRecFNToRaw_preMul_io_toPostMul_isZeroC; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_sExpSum = mulAddRecFNToRaw_preMul_io_toPostMul_sExpSum; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_doSubMags = mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_CIsDominant = mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_CDom_CAlignDist = mulAddRecFNToRaw_preMul_io_toPostMul_CDom_CAlignDist; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_highAlignedSigC = mulAddRecFNToRaw_preMul_io_toPostMul_highAlignedSigC; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_fromPreMul_bit0AlignedSigC = mulAddRecFNToRaw_preMul_io_toPostMul_bit0AlignedSigC; // @[MulAddRecFN.scala 331:44]
  assign mulAddRecFNToRaw_postMul_io_mulAddResult = _mulAddResult_T + mulAddRecFNToRaw_preMul_io_mulAddC; // @[MulAddRecFN.scala 328:50]
  assign mulAddRecFNToRaw_postMul_io_roundingMode = io_roundingMode; // @[MulAddRecFN.scala 334:46]
  assign roundRawFNToRecFN_io_invalidExc = mulAddRecFNToRaw_postMul_io_invalidExc; // @[MulAddRecFN.scala 340:39]
  assign roundRawFNToRecFN_io_infiniteExc = 1'h0; // @[MulAddRecFN.scala 341:39]
  assign roundRawFNToRecFN_io_in_isNaN = mulAddRecFNToRaw_postMul_io_rawOut_isNaN; // @[MulAddRecFN.scala 342:39]
  assign roundRawFNToRecFN_io_in_isInf = mulAddRecFNToRaw_postMul_io_rawOut_isInf; // @[MulAddRecFN.scala 342:39]
  assign roundRawFNToRecFN_io_in_isZero = mulAddRecFNToRaw_postMul_io_rawOut_isZero; // @[MulAddRecFN.scala 342:39]
  assign roundRawFNToRecFN_io_in_sign = mulAddRecFNToRaw_postMul_io_rawOut_sign; // @[MulAddRecFN.scala 342:39]
  assign roundRawFNToRecFN_io_in_sExp = mulAddRecFNToRaw_postMul_io_rawOut_sExp; // @[MulAddRecFN.scala 342:39]
  assign roundRawFNToRecFN_io_in_sig = mulAddRecFNToRaw_postMul_io_rawOut_sig; // @[MulAddRecFN.scala 342:39]
  assign roundRawFNToRecFN_io_roundingMode = io_roundingMode; // @[MulAddRecFN.scala 343:39]
endmodule
module AddRawFN(
  input         io_subOp,
  input         io_a_isNaN,
  input         io_a_isInf,
  input         io_a_isZero,
  input         io_a_sign,
  input  [9:0]  io_a_sExp,
  input  [24:0] io_a_sig,
  input         io_b_isNaN,
  input         io_b_isInf,
  input         io_b_isZero,
  input         io_b_sign,
  input  [9:0]  io_b_sExp,
  input  [24:0] io_b_sig,
  input  [2:0]  io_roundingMode,
  output        io_invalidExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
  wire  effSignB = io_b_sign ^ io_subOp; // @[AddRecFN.scala 60:30]
  wire  eqSigns = io_a_sign == effSignB; // @[AddRecFN.scala 61:29]
  wire  notEqSigns_signZero = io_roundingMode == 3'h2; // @[AddRecFN.scala 62:47]
  wire [9:0] sDiffExps = $signed(io_a_sExp) - $signed(io_b_sExp); // @[AddRecFN.scala 63:31]
  wire  _modNatAlignDist_T = $signed(sDiffExps) < 10'sh0; // @[AddRecFN.scala 64:41]
  wire [9:0] _modNatAlignDist_T_3 = $signed(io_b_sExp) - $signed(io_a_sExp); // @[AddRecFN.scala 64:58]
  wire [9:0] _modNatAlignDist_T_4 = $signed(sDiffExps) < 10'sh0 ? $signed(_modNatAlignDist_T_3) : $signed(sDiffExps); // @[AddRecFN.scala 64:30]
  wire [4:0] modNatAlignDist = _modNatAlignDist_T_4[4:0]; // @[AddRecFN.scala 64:81]
  wire [4:0] _isMaxAlign_T = sDiffExps[9:5]; // @[AddRecFN.scala 66:19]
  wire  _isMaxAlign_T_6 = $signed(_isMaxAlign_T) != -5'sh1 | sDiffExps[4:0] == 5'h0; // @[AddRecFN.scala 67:51]
  wire  isMaxAlign = $signed(_isMaxAlign_T) != 5'sh0 & _isMaxAlign_T_6; // @[AddRecFN.scala 66:45]
  wire [4:0] alignDist = isMaxAlign ? 5'h1f : modNatAlignDist; // @[AddRecFN.scala 68:24]
  wire  _closeSubMags_T = ~eqSigns; // @[AddRecFN.scala 69:24]
  wire  closeSubMags = ~eqSigns & ~isMaxAlign & modNatAlignDist <= 5'h1; // @[AddRecFN.scala 69:48]
  wire  _close_alignedSigA_T = 10'sh0 <= $signed(sDiffExps); // @[AddRecFN.scala 73:18]
  wire [26:0] _close_alignedSigA_T_3 = {io_a_sig, 2'h0}; // @[AddRecFN.scala 73:58]
  wire [26:0] _close_alignedSigA_T_4 = 10'sh0 <= $signed(sDiffExps) & sDiffExps[0] ? _close_alignedSigA_T_3 : 27'h0; // @[AddRecFN.scala 73:12]
  wire [25:0] _close_alignedSigA_T_9 = {io_a_sig, 1'h0}; // @[AddRecFN.scala 74:58]
  wire [25:0] _close_alignedSigA_T_10 = _close_alignedSigA_T & ~sDiffExps[0] ? _close_alignedSigA_T_9 : 26'h0; // @[AddRecFN.scala 74:12]
  wire [26:0] _GEN_0 = {{1'd0}, _close_alignedSigA_T_10}; // @[AddRecFN.scala 73:68]
  wire [26:0] _close_alignedSigA_T_11 = _close_alignedSigA_T_4 | _GEN_0; // @[AddRecFN.scala 73:68]
  wire [24:0] _close_alignedSigA_T_13 = _modNatAlignDist_T ? io_a_sig : 25'h0; // @[AddRecFN.scala 75:12]
  wire [26:0] _GEN_1 = {{2'd0}, _close_alignedSigA_T_13}; // @[AddRecFN.scala 74:68]
  wire [26:0] _close_sSigSum_T = _close_alignedSigA_T_11 | _GEN_1; // @[AddRecFN.scala 76:43]
  wire [25:0] _close_sSigSum_T_2 = {io_b_sig, 1'h0}; // @[AddRecFN.scala 76:66]
  wire [26:0] _GEN_2 = {{1{_close_sSigSum_T_2[25]}},_close_sSigSum_T_2}; // @[AddRecFN.scala 76:50]
  wire [26:0] close_sSigSum = $signed(_close_sSigSum_T) - $signed(_GEN_2); // @[AddRecFN.scala 76:50]
  wire  _close_sigSum_T = $signed(close_sSigSum) < 27'sh0; // @[AddRecFN.scala 77:42]
  wire [26:0] _close_sigSum_T_3 = 27'sh0 - $signed(close_sSigSum); // @[AddRecFN.scala 77:49]
  wire [26:0] _close_sigSum_T_4 = $signed(close_sSigSum) < 27'sh0 ? $signed(_close_sigSum_T_3) : $signed(close_sSigSum); // @[AddRecFN.scala 77:27]
  wire [25:0] close_sigSum = _close_sigSum_T_4[25:0]; // @[AddRecFN.scala 77:79]
  wire  close_reduced2SigSum_reducedVec_0 = |close_sigSum[1:0]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_1 = |close_sigSum[3:2]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_2 = |close_sigSum[5:4]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_3 = |close_sigSum[7:6]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_4 = |close_sigSum[9:8]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_5 = |close_sigSum[11:10]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_6 = |close_sigSum[13:12]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_7 = |close_sigSum[15:14]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_8 = |close_sigSum[17:16]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_9 = |close_sigSum[19:18]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_10 = |close_sigSum[21:20]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_11 = |close_sigSum[23:22]; // @[primitives.scala 103:54]
  wire  close_reduced2SigSum_reducedVec_12 = |close_sigSum[25:24]; // @[primitives.scala 106:57]
  wire [5:0] close_reduced2SigSum_lo = {close_reduced2SigSum_reducedVec_5,close_reduced2SigSum_reducedVec_4,
    close_reduced2SigSum_reducedVec_3,close_reduced2SigSum_reducedVec_2,close_reduced2SigSum_reducedVec_1,
    close_reduced2SigSum_reducedVec_0}; // @[primitives.scala 107:20]
  wire [12:0] close_reduced2SigSum = {close_reduced2SigSum_reducedVec_12,close_reduced2SigSum_reducedVec_11,
    close_reduced2SigSum_reducedVec_10,close_reduced2SigSum_reducedVec_9,close_reduced2SigSum_reducedVec_8,
    close_reduced2SigSum_reducedVec_7,close_reduced2SigSum_reducedVec_6,close_reduced2SigSum_lo}; // @[primitives.scala 107:20]
  wire [3:0] _close_normDistReduced2_T_13 = close_reduced2SigSum[1] ? 4'hb : 4'hc; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_14 = close_reduced2SigSum[2] ? 4'ha : _close_normDistReduced2_T_13; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_15 = close_reduced2SigSum[3] ? 4'h9 : _close_normDistReduced2_T_14; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_16 = close_reduced2SigSum[4] ? 4'h8 : _close_normDistReduced2_T_15; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_17 = close_reduced2SigSum[5] ? 4'h7 : _close_normDistReduced2_T_16; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_18 = close_reduced2SigSum[6] ? 4'h6 : _close_normDistReduced2_T_17; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_19 = close_reduced2SigSum[7] ? 4'h5 : _close_normDistReduced2_T_18; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_20 = close_reduced2SigSum[8] ? 4'h4 : _close_normDistReduced2_T_19; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_21 = close_reduced2SigSum[9] ? 4'h3 : _close_normDistReduced2_T_20; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_22 = close_reduced2SigSum[10] ? 4'h2 : _close_normDistReduced2_T_21; // @[Mux.scala 47:70]
  wire [3:0] _close_normDistReduced2_T_23 = close_reduced2SigSum[11] ? 4'h1 : _close_normDistReduced2_T_22; // @[Mux.scala 47:70]
  wire [3:0] close_normDistReduced2 = close_reduced2SigSum[12] ? 4'h0 : _close_normDistReduced2_T_23; // @[Mux.scala 47:70]
  wire [4:0] close_nearNormDist = {close_normDistReduced2, 1'h0}; // @[AddRecFN.scala 81:53]
  wire [56:0] _GEN_7 = {{31'd0}, close_sigSum}; // @[AddRecFN.scala 82:38]
  wire [56:0] _close_sigOut_T = _GEN_7 << close_nearNormDist; // @[AddRecFN.scala 82:38]
  wire [57:0] _close_sigOut_T_1 = {_close_sigOut_T, 1'h0}; // @[AddRecFN.scala 82:59]
  wire [26:0] close_sigOut = _close_sigOut_T_1[26:0]; // @[AddRecFN.scala 82:63]
  wire  close_totalCancellation = ~(|close_sigOut[26:25]); // @[AddRecFN.scala 83:35]
  wire  close_notTotalCancellation_signOut = io_a_sign ^ _close_sigSum_T; // @[AddRecFN.scala 84:56]
  wire  far_signOut = _modNatAlignDist_T ? effSignB : io_a_sign; // @[AddRecFN.scala 87:26]
  wire [24:0] _far_sigLarger_T_1 = _modNatAlignDist_T ? io_b_sig : io_a_sig; // @[AddRecFN.scala 88:29]
  wire [23:0] far_sigLarger = _far_sigLarger_T_1[23:0]; // @[AddRecFN.scala 88:66]
  wire [24:0] _far_sigSmaller_T_1 = _modNatAlignDist_T ? io_a_sig : io_b_sig; // @[AddRecFN.scala 89:29]
  wire [23:0] far_sigSmaller = _far_sigSmaller_T_1[23:0]; // @[AddRecFN.scala 89:66]
  wire [28:0] _far_mainAlignedSigSmaller_T = {far_sigSmaller, 5'h0}; // @[AddRecFN.scala 90:52]
  wire [28:0] far_mainAlignedSigSmaller = _far_mainAlignedSigSmaller_T >> alignDist; // @[AddRecFN.scala 90:56]
  wire [25:0] _far_reduced4SigSmaller_T = {far_sigSmaller, 2'h0}; // @[AddRecFN.scala 91:60]
  wire  far_reduced4SigSmaller_reducedVec_0 = |_far_reduced4SigSmaller_T[3:0]; // @[primitives.scala 120:54]
  wire  far_reduced4SigSmaller_reducedVec_1 = |_far_reduced4SigSmaller_T[7:4]; // @[primitives.scala 120:54]
  wire  far_reduced4SigSmaller_reducedVec_2 = |_far_reduced4SigSmaller_T[11:8]; // @[primitives.scala 120:54]
  wire  far_reduced4SigSmaller_reducedVec_3 = |_far_reduced4SigSmaller_T[15:12]; // @[primitives.scala 120:54]
  wire  far_reduced4SigSmaller_reducedVec_4 = |_far_reduced4SigSmaller_T[19:16]; // @[primitives.scala 120:54]
  wire  far_reduced4SigSmaller_reducedVec_5 = |_far_reduced4SigSmaller_T[23:20]; // @[primitives.scala 120:54]
  wire  far_reduced4SigSmaller_reducedVec_6 = |_far_reduced4SigSmaller_T[25:24]; // @[primitives.scala 123:57]
  wire [6:0] far_reduced4SigSmaller = {far_reduced4SigSmaller_reducedVec_6,far_reduced4SigSmaller_reducedVec_5,
    far_reduced4SigSmaller_reducedVec_4,far_reduced4SigSmaller_reducedVec_3,far_reduced4SigSmaller_reducedVec_2,
    far_reduced4SigSmaller_reducedVec_1,far_reduced4SigSmaller_reducedVec_0}; // @[primitives.scala 124:20]
  wire [8:0] far_roundExtraMask_shift = 9'sh100 >>> alignDist[4:2]; // @[primitives.scala 76:56]
  wire [6:0] far_roundExtraMask = {far_roundExtraMask_shift[1],far_roundExtraMask_shift[2],far_roundExtraMask_shift[3],
    far_roundExtraMask_shift[4],far_roundExtraMask_shift[5],far_roundExtraMask_shift[6],far_roundExtraMask_shift[7]}; // @[Cat.scala 33:92]
  wire [6:0] _far_alignedSigSmaller_T_3 = far_reduced4SigSmaller & far_roundExtraMask; // @[AddRecFN.scala 95:76]
  wire  _far_alignedSigSmaller_T_5 = |far_mainAlignedSigSmaller[2:0] | |_far_alignedSigSmaller_T_3; // @[AddRecFN.scala 95:49]
  wire [26:0] far_alignedSigSmaller = {far_mainAlignedSigSmaller[28:3],_far_alignedSigSmaller_T_5}; // @[Cat.scala 33:92]
  wire [26:0] _far_negAlignedSigSmaller_T = ~far_alignedSigSmaller; // @[AddRecFN.scala 97:62]
  wire [27:0] _far_negAlignedSigSmaller_T_1 = {1'h1,_far_negAlignedSigSmaller_T}; // @[Cat.scala 33:92]
  wire [27:0] far_negAlignedSigSmaller = _closeSubMags_T ? _far_negAlignedSigSmaller_T_1 : {{1'd0},
    far_alignedSigSmaller}; // @[AddRecFN.scala 97:39]
  wire [26:0] _far_sigSum_T = {far_sigLarger, 3'h0}; // @[AddRecFN.scala 98:36]
  wire [27:0] _GEN_3 = {{1'd0}, _far_sigSum_T}; // @[AddRecFN.scala 98:41]
  wire [27:0] _far_sigSum_T_2 = _GEN_3 + far_negAlignedSigSmaller; // @[AddRecFN.scala 98:41]
  wire [27:0] _GEN_4 = {{27'd0}, _closeSubMags_T}; // @[AddRecFN.scala 98:68]
  wire [27:0] far_sigSum = _far_sigSum_T_2 + _GEN_4; // @[AddRecFN.scala 98:68]
  wire [26:0] _GEN_5 = {{26'd0}, far_sigSum[0]}; // @[AddRecFN.scala 99:67]
  wire [26:0] _far_sigOut_T_2 = far_sigSum[27:1] | _GEN_5; // @[AddRecFN.scala 99:67]
  wire [27:0] _far_sigOut_T_3 = _closeSubMags_T ? far_sigSum : {{1'd0}, _far_sigOut_T_2}; // @[AddRecFN.scala 99:25]
  wire [26:0] far_sigOut = _far_sigOut_T_3[26:0]; // @[AddRecFN.scala 99:83]
  wire  notSigNaN_invalidExc = io_a_isInf & io_b_isInf & _closeSubMags_T; // @[AddRecFN.scala 102:57]
  wire  notNaN_isInfOut = io_a_isInf | io_b_isInf; // @[AddRecFN.scala 103:38]
  wire  addZeros = io_a_isZero & io_b_isZero; // @[AddRecFN.scala 104:32]
  wire  notNaN_specialCase = notNaN_isInfOut | addZeros; // @[AddRecFN.scala 105:46]
  wire  notNaN_isZeroOut = addZeros | ~notNaN_isInfOut & closeSubMags & close_totalCancellation; // @[AddRecFN.scala 106:37]
  wire  _notNaN_signOut_T_1 = io_a_isInf & io_a_sign; // @[AddRecFN.scala 109:39]
  wire  _notNaN_signOut_T_2 = eqSigns & io_a_sign | _notNaN_signOut_T_1; // @[AddRecFN.scala 108:63]
  wire  _notNaN_signOut_T_3 = io_b_isInf & effSignB; // @[AddRecFN.scala 110:39]
  wire  _notNaN_signOut_T_4 = _notNaN_signOut_T_2 | _notNaN_signOut_T_3; // @[AddRecFN.scala 109:63]
  wire  _notNaN_signOut_T_7 = notNaN_isZeroOut & _closeSubMags_T & notEqSigns_signZero; // @[AddRecFN.scala 111:39]
  wire  _notNaN_signOut_T_8 = _notNaN_signOut_T_4 | _notNaN_signOut_T_7; // @[AddRecFN.scala 110:63]
  wire  _notNaN_signOut_T_9 = ~notNaN_specialCase; // @[AddRecFN.scala 112:10]
  wire  _notNaN_signOut_T_12 = ~notNaN_specialCase & closeSubMags & ~close_totalCancellation; // @[AddRecFN.scala 112:46]
  wire  _notNaN_signOut_T_13 = _notNaN_signOut_T_12 & close_notTotalCancellation_signOut; // @[AddRecFN.scala 113:38]
  wire  _notNaN_signOut_T_14 = _notNaN_signOut_T_8 | _notNaN_signOut_T_13; // @[AddRecFN.scala 111:63]
  wire  _notNaN_signOut_T_18 = _notNaN_signOut_T_9 & ~closeSubMags & far_signOut; // @[AddRecFN.scala 114:47]
  wire [9:0] _common_sExpOut_T_2 = closeSubMags | _modNatAlignDist_T ? $signed(io_b_sExp) : $signed(io_a_sExp); // @[AddRecFN.scala 116:13]
  wire [4:0] _common_sExpOut_T_3 = closeSubMags ? close_nearNormDist : {{4'd0}, _closeSubMags_T}; // @[AddRecFN.scala 117:18]
  wire [5:0] _common_sExpOut_T_4 = {1'b0,$signed(_common_sExpOut_T_3)}; // @[AddRecFN.scala 117:66]
  wire [9:0] _GEN_6 = {{4{_common_sExpOut_T_4[5]}},_common_sExpOut_T_4}; // @[AddRecFN.scala 117:13]
  wire  _io_invalidExc_T_2 = io_a_isNaN & ~io_a_sig[22]; // @[common.scala 82:46]
  wire  _io_invalidExc_T_5 = io_b_isNaN & ~io_b_sig[22]; // @[common.scala 82:46]
  assign io_invalidExc = _io_invalidExc_T_2 | _io_invalidExc_T_5 | notSigNaN_invalidExc; // @[AddRecFN.scala 121:71]
  assign io_rawOut_isNaN = io_a_isNaN | io_b_isNaN; // @[AddRecFN.scala 125:35]
  assign io_rawOut_isInf = io_a_isInf | io_b_isInf; // @[AddRecFN.scala 103:38]
  assign io_rawOut_isZero = addZeros | ~notNaN_isInfOut & closeSubMags & close_totalCancellation; // @[AddRecFN.scala 106:37]
  assign io_rawOut_sign = _notNaN_signOut_T_14 | _notNaN_signOut_T_18; // @[AddRecFN.scala 113:77]
  assign io_rawOut_sExp = $signed(_common_sExpOut_T_2) - $signed(_GEN_6); // @[AddRecFN.scala 117:13]
  assign io_rawOut_sig = closeSubMags ? close_sigOut : far_sigOut; // @[AddRecFN.scala 118:28]
endmodule
module AddRecFN(
  input         io_subOp,
  input  [32:0] io_a,
  input  [32:0] io_b,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  addRawFN__io_subOp; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_a_isNaN; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_a_isInf; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_a_isZero; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_a_sign; // @[AddRecFN.scala 147:26]
  wire [9:0] addRawFN__io_a_sExp; // @[AddRecFN.scala 147:26]
  wire [24:0] addRawFN__io_a_sig; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_b_isNaN; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_b_isInf; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_b_isZero; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_b_sign; // @[AddRecFN.scala 147:26]
  wire [9:0] addRawFN__io_b_sExp; // @[AddRecFN.scala 147:26]
  wire [24:0] addRawFN__io_b_sig; // @[AddRecFN.scala 147:26]
  wire [2:0] addRawFN__io_roundingMode; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_invalidExc; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_rawOut_isNaN; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_rawOut_isInf; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_rawOut_isZero; // @[AddRecFN.scala 147:26]
  wire  addRawFN__io_rawOut_sign; // @[AddRecFN.scala 147:26]
  wire [9:0] addRawFN__io_rawOut_sExp; // @[AddRecFN.scala 147:26]
  wire [26:0] addRawFN__io_rawOut_sig; // @[AddRecFN.scala 147:26]
  wire  roundRawFNToRecFN_io_invalidExc; // @[AddRecFN.scala 157:15]
  wire  roundRawFNToRecFN_io_infiniteExc; // @[AddRecFN.scala 157:15]
  wire  roundRawFNToRecFN_io_in_isNaN; // @[AddRecFN.scala 157:15]
  wire  roundRawFNToRecFN_io_in_isInf; // @[AddRecFN.scala 157:15]
  wire  roundRawFNToRecFN_io_in_isZero; // @[AddRecFN.scala 157:15]
  wire  roundRawFNToRecFN_io_in_sign; // @[AddRecFN.scala 157:15]
  wire [9:0] roundRawFNToRecFN_io_in_sExp; // @[AddRecFN.scala 157:15]
  wire [26:0] roundRawFNToRecFN_io_in_sig; // @[AddRecFN.scala 157:15]
  wire [2:0] roundRawFNToRecFN_io_roundingMode; // @[AddRecFN.scala 157:15]
  wire [32:0] roundRawFNToRecFN_io_out; // @[AddRecFN.scala 157:15]
  wire [4:0] roundRawFNToRecFN_io_exceptionFlags; // @[AddRecFN.scala 157:15]
  wire [8:0] addRawFN_io_a_exp = io_a[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  addRawFN_io_a_isZero = addRawFN_io_a_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  addRawFN_io_a_isSpecial = addRawFN_io_a_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  _addRawFN_io_a_out_sig_T = ~addRawFN_io_a_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [1:0] _addRawFN_io_a_out_sig_T_1 = {1'h0,_addRawFN_io_a_out_sig_T}; // @[rawFloatFromRecFN.scala 61:32]
  wire [8:0] addRawFN_io_b_exp = io_b[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  addRawFN_io_b_isZero = addRawFN_io_b_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  addRawFN_io_b_isSpecial = addRawFN_io_b_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  _addRawFN_io_b_out_sig_T = ~addRawFN_io_b_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [1:0] _addRawFN_io_b_out_sig_T_1 = {1'h0,_addRawFN_io_b_out_sig_T}; // @[rawFloatFromRecFN.scala 61:32]
  AddRawFN addRawFN_ ( // @[AddRecFN.scala 147:26]
    .io_subOp(addRawFN__io_subOp),
    .io_a_isNaN(addRawFN__io_a_isNaN),
    .io_a_isInf(addRawFN__io_a_isInf),
    .io_a_isZero(addRawFN__io_a_isZero),
    .io_a_sign(addRawFN__io_a_sign),
    .io_a_sExp(addRawFN__io_a_sExp),
    .io_a_sig(addRawFN__io_a_sig),
    .io_b_isNaN(addRawFN__io_b_isNaN),
    .io_b_isInf(addRawFN__io_b_isInf),
    .io_b_isZero(addRawFN__io_b_isZero),
    .io_b_sign(addRawFN__io_b_sign),
    .io_b_sExp(addRawFN__io_b_sExp),
    .io_b_sig(addRawFN__io_b_sig),
    .io_roundingMode(addRawFN__io_roundingMode),
    .io_invalidExc(addRawFN__io_invalidExc),
    .io_rawOut_isNaN(addRawFN__io_rawOut_isNaN),
    .io_rawOut_isInf(addRawFN__io_rawOut_isInf),
    .io_rawOut_isZero(addRawFN__io_rawOut_isZero),
    .io_rawOut_sign(addRawFN__io_rawOut_sign),
    .io_rawOut_sExp(addRawFN__io_rawOut_sExp),
    .io_rawOut_sig(addRawFN__io_rawOut_sig)
  );
  RoundRawFNToRecFN_e8_s24 roundRawFNToRecFN ( // @[AddRecFN.scala 157:15]
    .io_invalidExc(roundRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundRawFNToRecFN_io_roundingMode),
    .io_out(roundRawFNToRecFN_io_out),
    .io_exceptionFlags(roundRawFNToRecFN_io_exceptionFlags)
  );
  assign io_out = roundRawFNToRecFN_io_out; // @[AddRecFN.scala 163:23]
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags; // @[AddRecFN.scala 164:23]
  assign addRawFN__io_subOp = io_subOp; // @[AddRecFN.scala 149:30]
  assign addRawFN__io_a_isNaN = addRawFN_io_a_isSpecial & addRawFN_io_a_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign addRawFN__io_a_isInf = addRawFN_io_a_isSpecial & ~addRawFN_io_a_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign addRawFN__io_a_isZero = addRawFN_io_a_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign addRawFN__io_a_sign = io_a[32]; // @[rawFloatFromRecFN.scala 59:25]
  assign addRawFN__io_a_sExp = {1'b0,$signed(addRawFN_io_a_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  assign addRawFN__io_a_sig = {_addRawFN_io_a_out_sig_T_1,io_a[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  assign addRawFN__io_b_isNaN = addRawFN_io_b_isSpecial & addRawFN_io_b_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign addRawFN__io_b_isInf = addRawFN_io_b_isSpecial & ~addRawFN_io_b_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign addRawFN__io_b_isZero = addRawFN_io_b_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign addRawFN__io_b_sign = io_b[32]; // @[rawFloatFromRecFN.scala 59:25]
  assign addRawFN__io_b_sExp = {1'b0,$signed(addRawFN_io_b_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  assign addRawFN__io_b_sig = {_addRawFN_io_b_out_sig_T_1,io_b[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  assign addRawFN__io_roundingMode = io_roundingMode; // @[AddRecFN.scala 152:30]
  assign roundRawFNToRecFN_io_invalidExc = addRawFN__io_invalidExc; // @[AddRecFN.scala 158:39]
  assign roundRawFNToRecFN_io_infiniteExc = 1'h0; // @[AddRecFN.scala 159:39]
  assign roundRawFNToRecFN_io_in_isNaN = addRawFN__io_rawOut_isNaN; // @[AddRecFN.scala 160:39]
  assign roundRawFNToRecFN_io_in_isInf = addRawFN__io_rawOut_isInf; // @[AddRecFN.scala 160:39]
  assign roundRawFNToRecFN_io_in_isZero = addRawFN__io_rawOut_isZero; // @[AddRecFN.scala 160:39]
  assign roundRawFNToRecFN_io_in_sign = addRawFN__io_rawOut_sign; // @[AddRecFN.scala 160:39]
  assign roundRawFNToRecFN_io_in_sExp = addRawFN__io_rawOut_sExp; // @[AddRecFN.scala 160:39]
  assign roundRawFNToRecFN_io_in_sig = addRawFN__io_rawOut_sig; // @[AddRecFN.scala 160:39]
  assign roundRawFNToRecFN_io_roundingMode = io_roundingMode; // @[AddRecFN.scala 161:39]
endmodule
module MulFullRawFN(
  input         io_a_isNaN,
  input         io_a_isInf,
  input         io_a_isZero,
  input         io_a_sign,
  input  [9:0]  io_a_sExp,
  input  [24:0] io_a_sig,
  input         io_b_isNaN,
  input         io_b_isInf,
  input         io_b_isZero,
  input         io_b_sign,
  input  [9:0]  io_b_sExp,
  input  [24:0] io_b_sig,
  output        io_invalidExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [47:0] io_rawOut_sig
);
  wire  notSigNaN_invalidExc = io_a_isInf & io_b_isZero | io_a_isZero & io_b_isInf; // @[MulRecFN.scala 58:60]
  wire [9:0] _common_sExpOut_T_2 = $signed(io_a_sExp) + $signed(io_b_sExp); // @[MulRecFN.scala 62:36]
  wire [49:0] _common_sigOut_T = io_a_sig * io_b_sig; // @[MulRecFN.scala 63:35]
  wire  _io_invalidExc_T_2 = io_a_isNaN & ~io_a_sig[22]; // @[common.scala 82:46]
  wire  _io_invalidExc_T_5 = io_b_isNaN & ~io_b_sig[22]; // @[common.scala 82:46]
  assign io_invalidExc = _io_invalidExc_T_2 | _io_invalidExc_T_5 | notSigNaN_invalidExc; // @[MulRecFN.scala 66:71]
  assign io_rawOut_isNaN = io_a_isNaN | io_b_isNaN; // @[MulRecFN.scala 70:35]
  assign io_rawOut_isInf = io_a_isInf | io_b_isInf; // @[MulRecFN.scala 59:38]
  assign io_rawOut_isZero = io_a_isZero | io_b_isZero; // @[MulRecFN.scala 60:40]
  assign io_rawOut_sign = io_a_sign ^ io_b_sign; // @[MulRecFN.scala 61:36]
  assign io_rawOut_sExp = $signed(_common_sExpOut_T_2) - 10'sh100; // @[MulRecFN.scala 62:48]
  assign io_rawOut_sig = _common_sigOut_T[47:0]; // @[MulRecFN.scala 63:46]
endmodule
module MulRawFN(
  input         io_a_isNaN,
  input         io_a_isInf,
  input         io_a_isZero,
  input         io_a_sign,
  input  [9:0]  io_a_sExp,
  input  [24:0] io_a_sig,
  input         io_b_isNaN,
  input         io_b_isInf,
  input         io_b_isZero,
  input         io_b_sign,
  input  [9:0]  io_b_sExp,
  input  [24:0] io_b_sig,
  output        io_invalidExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
  wire  mulFullRaw_io_a_isNaN; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_a_isInf; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_a_isZero; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_a_sign; // @[MulRecFN.scala 84:28]
  wire [9:0] mulFullRaw_io_a_sExp; // @[MulRecFN.scala 84:28]
  wire [24:0] mulFullRaw_io_a_sig; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_b_isNaN; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_b_isInf; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_b_isZero; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_b_sign; // @[MulRecFN.scala 84:28]
  wire [9:0] mulFullRaw_io_b_sExp; // @[MulRecFN.scala 84:28]
  wire [24:0] mulFullRaw_io_b_sig; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_invalidExc; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_rawOut_isNaN; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_rawOut_isInf; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_rawOut_isZero; // @[MulRecFN.scala 84:28]
  wire  mulFullRaw_io_rawOut_sign; // @[MulRecFN.scala 84:28]
  wire [9:0] mulFullRaw_io_rawOut_sExp; // @[MulRecFN.scala 84:28]
  wire [47:0] mulFullRaw_io_rawOut_sig; // @[MulRecFN.scala 84:28]
  wire  _io_rawOut_sig_T_2 = |mulFullRaw_io_rawOut_sig[21:0]; // @[MulRecFN.scala 93:55]
  MulFullRawFN mulFullRaw ( // @[MulRecFN.scala 84:28]
    .io_a_isNaN(mulFullRaw_io_a_isNaN),
    .io_a_isInf(mulFullRaw_io_a_isInf),
    .io_a_isZero(mulFullRaw_io_a_isZero),
    .io_a_sign(mulFullRaw_io_a_sign),
    .io_a_sExp(mulFullRaw_io_a_sExp),
    .io_a_sig(mulFullRaw_io_a_sig),
    .io_b_isNaN(mulFullRaw_io_b_isNaN),
    .io_b_isInf(mulFullRaw_io_b_isInf),
    .io_b_isZero(mulFullRaw_io_b_isZero),
    .io_b_sign(mulFullRaw_io_b_sign),
    .io_b_sExp(mulFullRaw_io_b_sExp),
    .io_b_sig(mulFullRaw_io_b_sig),
    .io_invalidExc(mulFullRaw_io_invalidExc),
    .io_rawOut_isNaN(mulFullRaw_io_rawOut_isNaN),
    .io_rawOut_isInf(mulFullRaw_io_rawOut_isInf),
    .io_rawOut_isZero(mulFullRaw_io_rawOut_isZero),
    .io_rawOut_sign(mulFullRaw_io_rawOut_sign),
    .io_rawOut_sExp(mulFullRaw_io_rawOut_sExp),
    .io_rawOut_sig(mulFullRaw_io_rawOut_sig)
  );
  assign io_invalidExc = mulFullRaw_io_invalidExc; // @[MulRecFN.scala 89:19]
  assign io_rawOut_isNaN = mulFullRaw_io_rawOut_isNaN; // @[MulRecFN.scala 90:15]
  assign io_rawOut_isInf = mulFullRaw_io_rawOut_isInf; // @[MulRecFN.scala 90:15]
  assign io_rawOut_isZero = mulFullRaw_io_rawOut_isZero; // @[MulRecFN.scala 90:15]
  assign io_rawOut_sign = mulFullRaw_io_rawOut_sign; // @[MulRecFN.scala 90:15]
  assign io_rawOut_sExp = mulFullRaw_io_rawOut_sExp; // @[MulRecFN.scala 90:15]
  assign io_rawOut_sig = {mulFullRaw_io_rawOut_sig[47:22],_io_rawOut_sig_T_2}; // @[Cat.scala 33:92]
  assign mulFullRaw_io_a_isNaN = io_a_isNaN; // @[MulRecFN.scala 86:21]
  assign mulFullRaw_io_a_isInf = io_a_isInf; // @[MulRecFN.scala 86:21]
  assign mulFullRaw_io_a_isZero = io_a_isZero; // @[MulRecFN.scala 86:21]
  assign mulFullRaw_io_a_sign = io_a_sign; // @[MulRecFN.scala 86:21]
  assign mulFullRaw_io_a_sExp = io_a_sExp; // @[MulRecFN.scala 86:21]
  assign mulFullRaw_io_a_sig = io_a_sig; // @[MulRecFN.scala 86:21]
  assign mulFullRaw_io_b_isNaN = io_b_isNaN; // @[MulRecFN.scala 87:21]
  assign mulFullRaw_io_b_isInf = io_b_isInf; // @[MulRecFN.scala 87:21]
  assign mulFullRaw_io_b_isZero = io_b_isZero; // @[MulRecFN.scala 87:21]
  assign mulFullRaw_io_b_sign = io_b_sign; // @[MulRecFN.scala 87:21]
  assign mulFullRaw_io_b_sExp = io_b_sExp; // @[MulRecFN.scala 87:21]
  assign mulFullRaw_io_b_sig = io_b_sig; // @[MulRecFN.scala 87:21]
endmodule
module MulRecFN(
  input  [32:0] io_a,
  input  [32:0] io_b,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  mulRawFN__io_a_isNaN; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_a_isInf; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_a_isZero; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_a_sign; // @[MulRecFN.scala 113:26]
  wire [9:0] mulRawFN__io_a_sExp; // @[MulRecFN.scala 113:26]
  wire [24:0] mulRawFN__io_a_sig; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_b_isNaN; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_b_isInf; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_b_isZero; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_b_sign; // @[MulRecFN.scala 113:26]
  wire [9:0] mulRawFN__io_b_sExp; // @[MulRecFN.scala 113:26]
  wire [24:0] mulRawFN__io_b_sig; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_invalidExc; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_rawOut_isNaN; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_rawOut_isInf; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_rawOut_isZero; // @[MulRecFN.scala 113:26]
  wire  mulRawFN__io_rawOut_sign; // @[MulRecFN.scala 113:26]
  wire [9:0] mulRawFN__io_rawOut_sExp; // @[MulRecFN.scala 113:26]
  wire [26:0] mulRawFN__io_rawOut_sig; // @[MulRecFN.scala 113:26]
  wire  roundRawFNToRecFN_io_invalidExc; // @[MulRecFN.scala 121:15]
  wire  roundRawFNToRecFN_io_infiniteExc; // @[MulRecFN.scala 121:15]
  wire  roundRawFNToRecFN_io_in_isNaN; // @[MulRecFN.scala 121:15]
  wire  roundRawFNToRecFN_io_in_isInf; // @[MulRecFN.scala 121:15]
  wire  roundRawFNToRecFN_io_in_isZero; // @[MulRecFN.scala 121:15]
  wire  roundRawFNToRecFN_io_in_sign; // @[MulRecFN.scala 121:15]
  wire [9:0] roundRawFNToRecFN_io_in_sExp; // @[MulRecFN.scala 121:15]
  wire [26:0] roundRawFNToRecFN_io_in_sig; // @[MulRecFN.scala 121:15]
  wire [2:0] roundRawFNToRecFN_io_roundingMode; // @[MulRecFN.scala 121:15]
  wire [32:0] roundRawFNToRecFN_io_out; // @[MulRecFN.scala 121:15]
  wire [4:0] roundRawFNToRecFN_io_exceptionFlags; // @[MulRecFN.scala 121:15]
  wire [8:0] mulRawFN_io_a_exp = io_a[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  mulRawFN_io_a_isZero = mulRawFN_io_a_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  mulRawFN_io_a_isSpecial = mulRawFN_io_a_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  _mulRawFN_io_a_out_sig_T = ~mulRawFN_io_a_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [1:0] _mulRawFN_io_a_out_sig_T_1 = {1'h0,_mulRawFN_io_a_out_sig_T}; // @[rawFloatFromRecFN.scala 61:32]
  wire [8:0] mulRawFN_io_b_exp = io_b[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  mulRawFN_io_b_isZero = mulRawFN_io_b_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  mulRawFN_io_b_isSpecial = mulRawFN_io_b_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  _mulRawFN_io_b_out_sig_T = ~mulRawFN_io_b_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [1:0] _mulRawFN_io_b_out_sig_T_1 = {1'h0,_mulRawFN_io_b_out_sig_T}; // @[rawFloatFromRecFN.scala 61:32]
  MulRawFN mulRawFN_ ( // @[MulRecFN.scala 113:26]
    .io_a_isNaN(mulRawFN__io_a_isNaN),
    .io_a_isInf(mulRawFN__io_a_isInf),
    .io_a_isZero(mulRawFN__io_a_isZero),
    .io_a_sign(mulRawFN__io_a_sign),
    .io_a_sExp(mulRawFN__io_a_sExp),
    .io_a_sig(mulRawFN__io_a_sig),
    .io_b_isNaN(mulRawFN__io_b_isNaN),
    .io_b_isInf(mulRawFN__io_b_isInf),
    .io_b_isZero(mulRawFN__io_b_isZero),
    .io_b_sign(mulRawFN__io_b_sign),
    .io_b_sExp(mulRawFN__io_b_sExp),
    .io_b_sig(mulRawFN__io_b_sig),
    .io_invalidExc(mulRawFN__io_invalidExc),
    .io_rawOut_isNaN(mulRawFN__io_rawOut_isNaN),
    .io_rawOut_isInf(mulRawFN__io_rawOut_isInf),
    .io_rawOut_isZero(mulRawFN__io_rawOut_isZero),
    .io_rawOut_sign(mulRawFN__io_rawOut_sign),
    .io_rawOut_sExp(mulRawFN__io_rawOut_sExp),
    .io_rawOut_sig(mulRawFN__io_rawOut_sig)
  );
  RoundRawFNToRecFN_e8_s24 roundRawFNToRecFN ( // @[MulRecFN.scala 121:15]
    .io_invalidExc(roundRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundRawFNToRecFN_io_roundingMode),
    .io_out(roundRawFNToRecFN_io_out),
    .io_exceptionFlags(roundRawFNToRecFN_io_exceptionFlags)
  );
  assign io_out = roundRawFNToRecFN_io_out; // @[MulRecFN.scala 127:23]
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags; // @[MulRecFN.scala 128:23]
  assign mulRawFN__io_a_isNaN = mulRawFN_io_a_isSpecial & mulRawFN_io_a_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign mulRawFN__io_a_isInf = mulRawFN_io_a_isSpecial & ~mulRawFN_io_a_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign mulRawFN__io_a_isZero = mulRawFN_io_a_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign mulRawFN__io_a_sign = io_a[32]; // @[rawFloatFromRecFN.scala 59:25]
  assign mulRawFN__io_a_sExp = {1'b0,$signed(mulRawFN_io_a_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  assign mulRawFN__io_a_sig = {_mulRawFN_io_a_out_sig_T_1,io_a[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  assign mulRawFN__io_b_isNaN = mulRawFN_io_b_isSpecial & mulRawFN_io_b_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign mulRawFN__io_b_isInf = mulRawFN_io_b_isSpecial & ~mulRawFN_io_b_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign mulRawFN__io_b_isZero = mulRawFN_io_b_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign mulRawFN__io_b_sign = io_b[32]; // @[rawFloatFromRecFN.scala 59:25]
  assign mulRawFN__io_b_sExp = {1'b0,$signed(mulRawFN_io_b_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  assign mulRawFN__io_b_sig = {_mulRawFN_io_b_out_sig_T_1,io_b[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  assign roundRawFNToRecFN_io_invalidExc = mulRawFN__io_invalidExc; // @[MulRecFN.scala 122:39]
  assign roundRawFNToRecFN_io_infiniteExc = 1'h0; // @[MulRecFN.scala 123:39]
  assign roundRawFNToRecFN_io_in_isNaN = mulRawFN__io_rawOut_isNaN; // @[MulRecFN.scala 124:39]
  assign roundRawFNToRecFN_io_in_isInf = mulRawFN__io_rawOut_isInf; // @[MulRecFN.scala 124:39]
  assign roundRawFNToRecFN_io_in_isZero = mulRawFN__io_rawOut_isZero; // @[MulRecFN.scala 124:39]
  assign roundRawFNToRecFN_io_in_sign = mulRawFN__io_rawOut_sign; // @[MulRecFN.scala 124:39]
  assign roundRawFNToRecFN_io_in_sExp = mulRawFN__io_rawOut_sExp; // @[MulRecFN.scala 124:39]
  assign roundRawFNToRecFN_io_in_sig = mulRawFN__io_rawOut_sig; // @[MulRecFN.scala 124:39]
  assign roundRawFNToRecFN_io_roundingMode = io_roundingMode; // @[MulRecFN.scala 125:39]
endmodule
module DivSqrtRawFN_small_e8_s24(
  input         clock,
  input         reset,
  output        io_inReady,
  input         io_inValid,
  input         io_sqrtOp,
  input         io_a_isNaN,
  input         io_a_isInf,
  input         io_a_isZero,
  input         io_a_sign,
  input  [9:0]  io_a_sExp,
  input  [24:0] io_a_sig,
  input         io_b_isNaN,
  input         io_b_isInf,
  input         io_b_isZero,
  input         io_b_sign,
  input  [9:0]  io_b_sExp,
  input  [24:0] io_b_sig,
  input  [2:0]  io_roundingMode,
  output        io_rawOutValid_div,
  output        io_rawOutValid_sqrt,
  output [2:0]  io_roundingModeOut,
  output        io_invalidExc,
  output        io_infiniteExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  reg [4:0] cycleNum; // @[DivSqrtRecFN_small.scala 224:33]
  reg  inReady; // @[DivSqrtRecFN_small.scala 225:33]
  reg  rawOutValid; // @[DivSqrtRecFN_small.scala 226:33]
  reg  sqrtOp_Z; // @[DivSqrtRecFN_small.scala 228:29]
  reg  majorExc_Z; // @[DivSqrtRecFN_small.scala 229:29]
  reg  isNaN_Z; // @[DivSqrtRecFN_small.scala 231:29]
  reg  isInf_Z; // @[DivSqrtRecFN_small.scala 232:29]
  reg  isZero_Z; // @[DivSqrtRecFN_small.scala 233:29]
  reg  sign_Z; // @[DivSqrtRecFN_small.scala 234:29]
  reg [9:0] sExp_Z; // @[DivSqrtRecFN_small.scala 235:29]
  reg [23:0] fractB_Z; // @[DivSqrtRecFN_small.scala 236:29]
  reg [2:0] roundingMode_Z; // @[DivSqrtRecFN_small.scala 237:29]
  reg [25:0] rem_Z; // @[DivSqrtRecFN_small.scala 243:29]
  reg  notZeroRem_Z; // @[DivSqrtRecFN_small.scala 244:29]
  reg [25:0] sigX_Z; // @[DivSqrtRecFN_small.scala 245:29]
  wire  notSigNaNIn_invalidExc_S_div = io_a_isZero & io_b_isZero | io_a_isInf & io_b_isInf; // @[DivSqrtRecFN_small.scala 254:42]
  wire  _notSigNaNIn_invalidExc_S_sqrt_T = ~io_a_isNaN; // @[DivSqrtRecFN_small.scala 256:9]
  wire  notSigNaNIn_invalidExc_S_sqrt = ~io_a_isNaN & ~io_a_isZero & io_a_sign; // @[DivSqrtRecFN_small.scala 256:43]
  wire  _majorExc_S_T_2 = io_a_isNaN & ~io_a_sig[22]; // @[common.scala 82:46]
  wire  _majorExc_S_T_3 = _majorExc_S_T_2 | notSigNaNIn_invalidExc_S_sqrt; // @[DivSqrtRecFN_small.scala 259:38]
  wire  _majorExc_S_T_9 = io_b_isNaN & ~io_b_sig[22]; // @[common.scala 82:46]
  wire  _majorExc_S_T_11 = _majorExc_S_T_2 | _majorExc_S_T_9 | notSigNaNIn_invalidExc_S_div; // @[DivSqrtRecFN_small.scala 260:66]
  wire  _majorExc_S_T_15 = _notSigNaNIn_invalidExc_S_sqrt_T & ~io_a_isInf & io_b_isZero; // @[DivSqrtRecFN_small.scala 262:51]
  wire  _majorExc_S_T_16 = _majorExc_S_T_11 | _majorExc_S_T_15; // @[DivSqrtRecFN_small.scala 261:46]
  wire  _isNaN_S_T = io_a_isNaN | notSigNaNIn_invalidExc_S_sqrt; // @[DivSqrtRecFN_small.scala 266:26]
  wire  _isNaN_S_T_2 = io_a_isNaN | io_b_isNaN | notSigNaNIn_invalidExc_S_div; // @[DivSqrtRecFN_small.scala 267:42]
  wire  _sign_S_T = ~io_sqrtOp; // @[DivSqrtRecFN_small.scala 271:33]
  wire  sign_S = io_a_sign ^ ~io_sqrtOp & io_b_sign; // @[DivSqrtRecFN_small.scala 271:30]
  wire  specialCaseA_S = io_a_isNaN | io_a_isInf | io_a_isZero; // @[DivSqrtRecFN_small.scala 273:55]
  wire  specialCaseB_S = io_b_isNaN | io_b_isInf | io_b_isZero; // @[DivSqrtRecFN_small.scala 274:55]
  wire  _normalCase_S_div_T = ~specialCaseA_S; // @[DivSqrtRecFN_small.scala 275:28]
  wire  normalCase_S_div = ~specialCaseA_S & ~specialCaseB_S; // @[DivSqrtRecFN_small.scala 275:45]
  wire  normalCase_S_sqrt = _normalCase_S_div_T & ~io_a_sign; // @[DivSqrtRecFN_small.scala 276:46]
  wire  normalCase_S = io_sqrtOp ? normalCase_S_sqrt : normalCase_S_div; // @[DivSqrtRecFN_small.scala 277:27]
  wire [7:0] _sExpQuot_S_div_T_2 = ~io_b_sExp[7:0]; // @[DivSqrtRecFN_small.scala 281:40]
  wire [8:0] _sExpQuot_S_div_T_4 = {io_b_sExp[8],_sExpQuot_S_div_T_2}; // @[DivSqrtRecFN_small.scala 281:71]
  wire [9:0] _GEN_15 = {{1{_sExpQuot_S_div_T_4[8]}},_sExpQuot_S_div_T_4}; // @[DivSqrtRecFN_small.scala 280:21]
  wire [10:0] sExpQuot_S_div = $signed(io_a_sExp) + $signed(_GEN_15); // @[DivSqrtRecFN_small.scala 280:21]
  wire [3:0] _sSatExpQuot_S_div_T_2 = 11'sh1c0 <= $signed(sExpQuot_S_div) ? 4'h6 : sExpQuot_S_div[9:6]; // @[DivSqrtRecFN_small.scala 284:16]
  wire [9:0] sSatExpQuot_S_div = {_sSatExpQuot_S_div_T_2,sExpQuot_S_div[5:0]}; // @[DivSqrtRecFN_small.scala 289:11]
  wire  _evenSqrt_S_T_1 = ~io_a_sExp[0]; // @[DivSqrtRecFN_small.scala 291:35]
  wire  evenSqrt_S = io_sqrtOp & ~io_a_sExp[0]; // @[DivSqrtRecFN_small.scala 291:32]
  wire  oddSqrt_S = io_sqrtOp & io_a_sExp[0]; // @[DivSqrtRecFN_small.scala 292:32]
  wire  idle = cycleNum == 5'h0; // @[DivSqrtRecFN_small.scala 296:25]
  wire  entering = inReady & io_inValid; // @[DivSqrtRecFN_small.scala 297:28]
  wire  entering_normalCase = entering & normalCase_S; // @[DivSqrtRecFN_small.scala 298:40]
  wire  skipCycle2 = cycleNum == 5'h3 & sigX_Z[25]; // @[DivSqrtRecFN_small.scala 301:39]
  wire  _inReady_T_1 = entering & ~normalCase_S; // @[DivSqrtRecFN_small.scala 305:26]
  wire [4:0] _inReady_T_17 = cycleNum - 5'h1; // @[DivSqrtRecFN_small.scala 313:56]
  wire  _inReady_T_18 = _inReady_T_17 <= 5'h1; // @[DivSqrtRecFN_small.scala 317:38]
  wire  _inReady_T_19 = ~entering & ~skipCycle2 & _inReady_T_18; // @[DivSqrtRecFN_small.scala 313:16]
  wire  _inReady_T_20 = _inReady_T_1 | _inReady_T_19; // @[DivSqrtRecFN_small.scala 312:15]
  wire  _inReady_T_23 = _inReady_T_20 | skipCycle2; // @[DivSqrtRecFN_small.scala 313:95]
  wire  _rawOutValid_T_18 = _inReady_T_17 == 5'h1; // @[DivSqrtRecFN_small.scala 318:42]
  wire  _rawOutValid_T_19 = ~entering & ~skipCycle2 & _rawOutValid_T_18; // @[DivSqrtRecFN_small.scala 313:16]
  wire  _rawOutValid_T_20 = _inReady_T_1 | _rawOutValid_T_19; // @[DivSqrtRecFN_small.scala 312:15]
  wire  _rawOutValid_T_23 = _rawOutValid_T_20 | skipCycle2; // @[DivSqrtRecFN_small.scala 313:95]
  wire [4:0] _cycleNum_T_4 = io_a_sExp[0] ? 5'h18 : 5'h19; // @[DivSqrtRecFN_small.scala 308:24]
  wire [4:0] _cycleNum_T_5 = io_sqrtOp ? _cycleNum_T_4 : 5'h1a; // @[DivSqrtRecFN_small.scala 307:20]
  wire [4:0] _cycleNum_T_6 = entering_normalCase ? _cycleNum_T_5 : 5'h0; // @[DivSqrtRecFN_small.scala 306:16]
  wire [4:0] _GEN_16 = {{4'd0}, _inReady_T_1}; // @[DivSqrtRecFN_small.scala 305:57]
  wire [4:0] _cycleNum_T_7 = _GEN_16 | _cycleNum_T_6; // @[DivSqrtRecFN_small.scala 305:57]
  wire [4:0] _cycleNum_T_14 = ~entering & ~skipCycle2 ? _inReady_T_17 : 5'h0; // @[DivSqrtRecFN_small.scala 313:16]
  wire [4:0] _cycleNum_T_15 = _cycleNum_T_7 | _cycleNum_T_14; // @[DivSqrtRecFN_small.scala 312:15]
  wire [4:0] _GEN_17 = {{4'd0}, skipCycle2}; // @[DivSqrtRecFN_small.scala 313:95]
  wire [4:0] _cycleNum_T_17 = _cycleNum_T_15 | _GEN_17; // @[DivSqrtRecFN_small.scala 313:95]
  wire  _GEN_0 = ~idle | entering ? _inReady_T_23 : inReady; // @[DivSqrtRecFN_small.scala 303:31 317:17 225:33]
  wire [8:0] _sExp_Z_T = io_a_sExp[9:1]; // @[DivSqrtRecFN_small.scala 335:29]
  wire [9:0] _sExp_Z_T_1 = $signed(_sExp_Z_T) + 9'sh80; // @[DivSqrtRecFN_small.scala 335:34]
  wire  _T_2 = ~inReady; // @[DivSqrtRecFN_small.scala 340:23]
  wire  _T_3 = ~inReady & sqrtOp_Z; // @[DivSqrtRecFN_small.scala 340:33]
  wire  _fractB_Z_T_1 = inReady & _sign_S_T; // @[DivSqrtRecFN_small.scala 342:25]
  wire [23:0] _fractB_Z_T_3 = {io_b_sig[22:0], 1'h0}; // @[DivSqrtRecFN_small.scala 342:90]
  wire [23:0] _fractB_Z_T_4 = inReady & _sign_S_T ? _fractB_Z_T_3 : 24'h0; // @[DivSqrtRecFN_small.scala 342:16]
  wire  _fractB_Z_T_5 = inReady & io_sqrtOp; // @[DivSqrtRecFN_small.scala 343:25]
  wire [22:0] _fractB_Z_T_8 = inReady & io_sqrtOp & io_a_sExp[0] ? 23'h400000 : 23'h0; // @[DivSqrtRecFN_small.scala 343:16]
  wire [23:0] _GEN_18 = {{1'd0}, _fractB_Z_T_8}; // @[DivSqrtRecFN_small.scala 342:100]
  wire [23:0] _fractB_Z_T_9 = _fractB_Z_T_4 | _GEN_18; // @[DivSqrtRecFN_small.scala 342:100]
  wire [23:0] _fractB_Z_T_14 = _fractB_Z_T_5 & _evenSqrt_S_T_1 ? 24'h800000 : 24'h0; // @[DivSqrtRecFN_small.scala 344:16]
  wire [23:0] _fractB_Z_T_15 = _fractB_Z_T_9 | _fractB_Z_T_14; // @[DivSqrtRecFN_small.scala 343:100]
  wire [22:0] _fractB_Z_T_25 = _T_2 ? fractB_Z[23:1] : 23'h0; // @[DivSqrtRecFN_small.scala 346:16]
  wire [23:0] _GEN_19 = {{1'd0}, _fractB_Z_T_25}; // @[DivSqrtRecFN_small.scala 345:100]
  wire [23:0] _fractB_Z_T_26 = _fractB_Z_T_15 | _GEN_19; // @[DivSqrtRecFN_small.scala 345:100]
  wire [25:0] _rem_T_2 = {io_a_sig, 1'h0}; // @[DivSqrtRecFN_small.scala 352:47]
  wire [25:0] _rem_T_3 = inReady & ~oddSqrt_S ? _rem_T_2 : 26'h0; // @[DivSqrtRecFN_small.scala 352:12]
  wire  _rem_T_4 = inReady & oddSqrt_S; // @[DivSqrtRecFN_small.scala 353:21]
  wire [1:0] _rem_T_7 = io_a_sig[23:22] - 2'h1; // @[DivSqrtRecFN_small.scala 354:56]
  wire [24:0] _rem_T_9 = {io_a_sig[21:0], 3'h0}; // @[DivSqrtRecFN_small.scala 355:44]
  wire [26:0] _rem_T_10 = {_rem_T_7,_rem_T_9}; // @[Cat.scala 33:92]
  wire [26:0] _rem_T_11 = inReady & oddSqrt_S ? _rem_T_10 : 27'h0; // @[DivSqrtRecFN_small.scala 353:12]
  wire [26:0] _GEN_20 = {{1'd0}, _rem_T_3}; // @[DivSqrtRecFN_small.scala 352:57]
  wire [26:0] _rem_T_12 = _GEN_20 | _rem_T_11; // @[DivSqrtRecFN_small.scala 352:57]
  wire [26:0] _rem_T_14 = {rem_Z, 1'h0}; // @[DivSqrtRecFN_small.scala 359:29]
  wire [26:0] _rem_T_15 = _T_2 ? _rem_T_14 : 27'h0; // @[DivSqrtRecFN_small.scala 359:12]
  wire [26:0] rem = _rem_T_12 | _rem_T_15; // @[DivSqrtRecFN_small.scala 358:11]
  wire [31:0] _bitMask_T = 32'h1 << cycleNum; // @[DivSqrtRecFN_small.scala 360:23]
  wire [29:0] bitMask = _bitMask_T[31:2]; // @[DivSqrtRecFN_small.scala 360:34]
  wire [25:0] _trialTerm_T_2 = {io_b_sig, 1'h0}; // @[DivSqrtRecFN_small.scala 362:48]
  wire [25:0] _trialTerm_T_3 = _fractB_Z_T_1 ? _trialTerm_T_2 : 26'h0; // @[DivSqrtRecFN_small.scala 362:12]
  wire [24:0] _trialTerm_T_5 = inReady & evenSqrt_S ? 25'h1000000 : 25'h0; // @[DivSqrtRecFN_small.scala 363:12]
  wire [25:0] _GEN_21 = {{1'd0}, _trialTerm_T_5}; // @[DivSqrtRecFN_small.scala 362:74]
  wire [25:0] _trialTerm_T_6 = _trialTerm_T_3 | _GEN_21; // @[DivSqrtRecFN_small.scala 362:74]
  wire [25:0] _trialTerm_T_8 = _rem_T_4 ? 26'h2800000 : 26'h0; // @[DivSqrtRecFN_small.scala 364:12]
  wire [25:0] _trialTerm_T_9 = _trialTerm_T_6 | _trialTerm_T_8; // @[DivSqrtRecFN_small.scala 363:74]
  wire [23:0] _trialTerm_T_11 = _T_2 ? fractB_Z : 24'h0; // @[DivSqrtRecFN_small.scala 365:12]
  wire [25:0] _GEN_22 = {{2'd0}, _trialTerm_T_11}; // @[DivSqrtRecFN_small.scala 364:74]
  wire [25:0] _trialTerm_T_12 = _trialTerm_T_9 | _GEN_22; // @[DivSqrtRecFN_small.scala 364:74]
  wire  _trialTerm_T_14 = ~sqrtOp_Z; // @[DivSqrtRecFN_small.scala 366:26]
  wire [24:0] _trialTerm_T_17 = _T_2 & ~sqrtOp_Z ? 25'h1000000 : 25'h0; // @[DivSqrtRecFN_small.scala 366:12]
  wire [25:0] _GEN_23 = {{1'd0}, _trialTerm_T_17}; // @[DivSqrtRecFN_small.scala 365:74]
  wire [25:0] _trialTerm_T_18 = _trialTerm_T_12 | _GEN_23; // @[DivSqrtRecFN_small.scala 365:74]
  wire [26:0] _trialTerm_T_21 = {sigX_Z, 1'h0}; // @[DivSqrtRecFN_small.scala 367:44]
  wire [26:0] _trialTerm_T_22 = _T_3 ? _trialTerm_T_21 : 27'h0; // @[DivSqrtRecFN_small.scala 367:12]
  wire [26:0] _GEN_24 = {{1'd0}, _trialTerm_T_18}; // @[DivSqrtRecFN_small.scala 366:74]
  wire [26:0] trialTerm = _GEN_24 | _trialTerm_T_22; // @[DivSqrtRecFN_small.scala 366:74]
  wire [27:0] _trialRem_T = {1'b0,$signed(rem)}; // @[DivSqrtRecFN_small.scala 368:24]
  wire [27:0] _trialRem_T_1 = {1'b0,$signed(trialTerm)}; // @[DivSqrtRecFN_small.scala 368:42]
  wire [28:0] trialRem = $signed(_trialRem_T) - $signed(_trialRem_T_1); // @[DivSqrtRecFN_small.scala 368:29]
  wire  newBit = 29'sh0 <= $signed(trialRem); // @[DivSqrtRecFN_small.scala 369:23]
  wire [28:0] _nextRem_Z_T = $signed(_trialRem_T) - $signed(_trialRem_T_1); // @[DivSqrtRecFN_small.scala 371:42]
  wire [28:0] _nextRem_Z_T_1 = newBit ? _nextRem_Z_T : {{2'd0}, rem}; // @[DivSqrtRecFN_small.scala 371:24]
  wire [25:0] nextRem_Z = _nextRem_Z_T_1[25:0]; // @[DivSqrtRecFN_small.scala 371:54]
  wire [25:0] _sigX_Z_T_2 = {newBit, 25'h0}; // @[DivSqrtRecFN_small.scala 394:50]
  wire [25:0] _sigX_Z_T_3 = _fractB_Z_T_1 ? _sigX_Z_T_2 : 26'h0; // @[DivSqrtRecFN_small.scala 394:16]
  wire [24:0] _sigX_Z_T_5 = _fractB_Z_T_5 ? 25'h1000000 : 25'h0; // @[DivSqrtRecFN_small.scala 395:16]
  wire [25:0] _GEN_30 = {{1'd0}, _sigX_Z_T_5}; // @[DivSqrtRecFN_small.scala 394:74]
  wire [25:0] _sigX_Z_T_6 = _sigX_Z_T_3 | _GEN_30; // @[DivSqrtRecFN_small.scala 394:74]
  wire [23:0] _sigX_Z_T_8 = {newBit, 23'h0}; // @[DivSqrtRecFN_small.scala 396:50]
  wire [23:0] _sigX_Z_T_9 = _rem_T_4 ? _sigX_Z_T_8 : 24'h0; // @[DivSqrtRecFN_small.scala 396:16]
  wire [25:0] _GEN_31 = {{2'd0}, _sigX_Z_T_9}; // @[DivSqrtRecFN_small.scala 395:74]
  wire [25:0] _sigX_Z_T_10 = _sigX_Z_T_6 | _GEN_31; // @[DivSqrtRecFN_small.scala 395:74]
  wire [25:0] _sigX_Z_T_12 = _T_2 ? sigX_Z : 26'h0; // @[DivSqrtRecFN_small.scala 397:16]
  wire [25:0] _sigX_Z_T_13 = _sigX_Z_T_10 | _sigX_Z_T_12; // @[DivSqrtRecFN_small.scala 396:74]
  wire [29:0] _sigX_Z_T_16 = _T_2 & newBit ? bitMask : 30'h0; // @[DivSqrtRecFN_small.scala 398:16]
  wire [29:0] _GEN_32 = {{4'd0}, _sigX_Z_T_13}; // @[DivSqrtRecFN_small.scala 397:74]
  wire [29:0] _sigX_Z_T_17 = _GEN_32 | _sigX_Z_T_16; // @[DivSqrtRecFN_small.scala 397:74]
  wire [29:0] _GEN_14 = entering | _T_2 ? _sigX_Z_T_17 : {{4'd0}, sigX_Z}; // @[DivSqrtRecFN_small.scala 390:34 393:16 245:29]
  wire [26:0] _GEN_33 = {{26'd0}, notZeroRem_Z}; // @[DivSqrtRecFN_small.scala 414:35]
  assign io_inReady = inReady; // @[DivSqrtRecFN_small.scala 322:16]
  assign io_rawOutValid_div = rawOutValid & _trialTerm_T_14; // @[DivSqrtRecFN_small.scala 404:40]
  assign io_rawOutValid_sqrt = rawOutValid & sqrtOp_Z; // @[DivSqrtRecFN_small.scala 405:40]
  assign io_roundingModeOut = roundingMode_Z; // @[DivSqrtRecFN_small.scala 406:25]
  assign io_invalidExc = majorExc_Z & isNaN_Z; // @[DivSqrtRecFN_small.scala 407:36]
  assign io_infiniteExc = majorExc_Z & ~isNaN_Z; // @[DivSqrtRecFN_small.scala 408:36]
  assign io_rawOut_isNaN = isNaN_Z; // @[DivSqrtRecFN_small.scala 409:22]
  assign io_rawOut_isInf = isInf_Z; // @[DivSqrtRecFN_small.scala 410:22]
  assign io_rawOut_isZero = isZero_Z; // @[DivSqrtRecFN_small.scala 411:22]
  assign io_rawOut_sign = sign_Z; // @[DivSqrtRecFN_small.scala 412:22]
  assign io_rawOut_sExp = sExp_Z; // @[DivSqrtRecFN_small.scala 413:22]
  assign io_rawOut_sig = _trialTerm_T_21 | _GEN_33; // @[DivSqrtRecFN_small.scala 414:35]
  always @(posedge clock) begin
    if (reset) begin // @[DivSqrtRecFN_small.scala 224:33]
      cycleNum <= 5'h0; // @[DivSqrtRecFN_small.scala 224:33]
    end else if (~idle | entering) begin // @[DivSqrtRecFN_small.scala 303:31]
      cycleNum <= _cycleNum_T_17; // @[DivSqrtRecFN_small.scala 319:18]
    end
    inReady <= reset | _GEN_0; // @[DivSqrtRecFN_small.scala 225:{33,33}]
    if (reset) begin // @[DivSqrtRecFN_small.scala 226:33]
      rawOutValid <= 1'h0; // @[DivSqrtRecFN_small.scala 226:33]
    end else if (~idle | entering) begin // @[DivSqrtRecFN_small.scala 303:31]
      rawOutValid <= _rawOutValid_T_23; // @[DivSqrtRecFN_small.scala 318:21]
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      sqrtOp_Z <= io_sqrtOp; // @[DivSqrtRecFN_small.scala 327:20]
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      if (io_sqrtOp) begin // @[DivSqrtRecFN_small.scala 258:12]
        majorExc_Z <= _majorExc_S_T_3;
      end else begin
        majorExc_Z <= _majorExc_S_T_16;
      end
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      if (io_sqrtOp) begin // @[DivSqrtRecFN_small.scala 265:12]
        isNaN_Z <= _isNaN_S_T;
      end else begin
        isNaN_Z <= _isNaN_S_T_2;
      end
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      if (io_sqrtOp) begin // @[DivSqrtRecFN_small.scala 269:23]
        isInf_Z <= io_a_isInf;
      end else begin
        isInf_Z <= io_a_isInf | io_b_isZero;
      end
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      if (io_sqrtOp) begin // @[DivSqrtRecFN_small.scala 270:23]
        isZero_Z <= io_a_isZero;
      end else begin
        isZero_Z <= io_a_isZero | io_b_isInf;
      end
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      sign_Z <= sign_S; // @[DivSqrtRecFN_small.scala 332:20]
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      if (io_sqrtOp) begin // @[DivSqrtRecFN_small.scala 334:16]
        sExp_Z <= _sExp_Z_T_1;
      end else begin
        sExp_Z <= sSatExpQuot_S_div;
      end
    end
    if (entering | ~inReady & sqrtOp_Z) begin // @[DivSqrtRecFN_small.scala 340:46]
      fractB_Z <= _fractB_Z_T_26; // @[DivSqrtRecFN_small.scala 341:18]
    end
    if (entering) begin // @[DivSqrtRecFN_small.scala 326:21]
      roundingMode_Z <= io_roundingMode; // @[DivSqrtRecFN_small.scala 338:24]
    end
    if (entering | _T_2) begin // @[DivSqrtRecFN_small.scala 390:34]
      rem_Z <= nextRem_Z; // @[DivSqrtRecFN_small.scala 392:15]
    end
    if (entering | _T_2) begin // @[DivSqrtRecFN_small.scala 390:34]
      if (inReady | newBit) begin // @[DivSqrtRecFN_small.scala 380:31]
        notZeroRem_Z <= $signed(trialRem) != 29'sh0;
      end
    end
    sigX_Z <= _GEN_14[25:0];
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  cycleNum = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  inReady = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  rawOutValid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  sqrtOp_Z = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  majorExc_Z = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  isNaN_Z = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  isInf_Z = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  isZero_Z = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  sign_Z = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  sExp_Z = _RAND_9[9:0];
  _RAND_10 = {1{`RANDOM}};
  fractB_Z = _RAND_10[23:0];
  _RAND_11 = {1{`RANDOM}};
  roundingMode_Z = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  rem_Z = _RAND_12[25:0];
  _RAND_13 = {1{`RANDOM}};
  notZeroRem_Z = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  sigX_Z = _RAND_14[25:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DivSqrtRecFMToRaw_small_e8_s24(
  input         clock,
  input         reset,
  output        io_inReady,
  input         io_inValid,
  input         io_sqrtOp,
  input  [32:0] io_a,
  input  [32:0] io_b,
  input  [2:0]  io_roundingMode,
  output        io_rawOutValid_div,
  output        io_rawOutValid_sqrt,
  output [2:0]  io_roundingModeOut,
  output        io_invalidExc,
  output        io_infiniteExc,
  output        io_rawOut_isNaN,
  output        io_rawOut_isInf,
  output        io_rawOut_isZero,
  output        io_rawOut_sign,
  output [9:0]  io_rawOut_sExp,
  output [26:0] io_rawOut_sig
);
  wire  divSqrtRawFN__clock; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__reset; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_inReady; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_inValid; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_sqrtOp; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_a_isNaN; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_a_isInf; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_a_isZero; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_a_sign; // @[DivSqrtRecFN_small.scala 446:15]
  wire [9:0] divSqrtRawFN__io_a_sExp; // @[DivSqrtRecFN_small.scala 446:15]
  wire [24:0] divSqrtRawFN__io_a_sig; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_b_isNaN; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_b_isInf; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_b_isZero; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_b_sign; // @[DivSqrtRecFN_small.scala 446:15]
  wire [9:0] divSqrtRawFN__io_b_sExp; // @[DivSqrtRecFN_small.scala 446:15]
  wire [24:0] divSqrtRawFN__io_b_sig; // @[DivSqrtRecFN_small.scala 446:15]
  wire [2:0] divSqrtRawFN__io_roundingMode; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_rawOutValid_div; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 446:15]
  wire [2:0] divSqrtRawFN__io_roundingModeOut; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_invalidExc; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_infiniteExc; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 446:15]
  wire  divSqrtRawFN__io_rawOut_sign; // @[DivSqrtRecFN_small.scala 446:15]
  wire [9:0] divSqrtRawFN__io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 446:15]
  wire [26:0] divSqrtRawFN__io_rawOut_sig; // @[DivSqrtRecFN_small.scala 446:15]
  wire [8:0] divSqrtRawFN_io_a_exp = io_a[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  divSqrtRawFN_io_a_isZero = divSqrtRawFN_io_a_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  divSqrtRawFN_io_a_isSpecial = divSqrtRawFN_io_a_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  _divSqrtRawFN_io_a_out_sig_T = ~divSqrtRawFN_io_a_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [1:0] _divSqrtRawFN_io_a_out_sig_T_1 = {1'h0,_divSqrtRawFN_io_a_out_sig_T}; // @[rawFloatFromRecFN.scala 61:32]
  wire [8:0] divSqrtRawFN_io_b_exp = io_b[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  divSqrtRawFN_io_b_isZero = divSqrtRawFN_io_b_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  divSqrtRawFN_io_b_isSpecial = divSqrtRawFN_io_b_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  _divSqrtRawFN_io_b_out_sig_T = ~divSqrtRawFN_io_b_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [1:0] _divSqrtRawFN_io_b_out_sig_T_1 = {1'h0,_divSqrtRawFN_io_b_out_sig_T}; // @[rawFloatFromRecFN.scala 61:32]
  DivSqrtRawFN_small_e8_s24 divSqrtRawFN_ ( // @[DivSqrtRecFN_small.scala 446:15]
    .clock(divSqrtRawFN__clock),
    .reset(divSqrtRawFN__reset),
    .io_inReady(divSqrtRawFN__io_inReady),
    .io_inValid(divSqrtRawFN__io_inValid),
    .io_sqrtOp(divSqrtRawFN__io_sqrtOp),
    .io_a_isNaN(divSqrtRawFN__io_a_isNaN),
    .io_a_isInf(divSqrtRawFN__io_a_isInf),
    .io_a_isZero(divSqrtRawFN__io_a_isZero),
    .io_a_sign(divSqrtRawFN__io_a_sign),
    .io_a_sExp(divSqrtRawFN__io_a_sExp),
    .io_a_sig(divSqrtRawFN__io_a_sig),
    .io_b_isNaN(divSqrtRawFN__io_b_isNaN),
    .io_b_isInf(divSqrtRawFN__io_b_isInf),
    .io_b_isZero(divSqrtRawFN__io_b_isZero),
    .io_b_sign(divSqrtRawFN__io_b_sign),
    .io_b_sExp(divSqrtRawFN__io_b_sExp),
    .io_b_sig(divSqrtRawFN__io_b_sig),
    .io_roundingMode(divSqrtRawFN__io_roundingMode),
    .io_rawOutValid_div(divSqrtRawFN__io_rawOutValid_div),
    .io_rawOutValid_sqrt(divSqrtRawFN__io_rawOutValid_sqrt),
    .io_roundingModeOut(divSqrtRawFN__io_roundingModeOut),
    .io_invalidExc(divSqrtRawFN__io_invalidExc),
    .io_infiniteExc(divSqrtRawFN__io_infiniteExc),
    .io_rawOut_isNaN(divSqrtRawFN__io_rawOut_isNaN),
    .io_rawOut_isInf(divSqrtRawFN__io_rawOut_isInf),
    .io_rawOut_isZero(divSqrtRawFN__io_rawOut_isZero),
    .io_rawOut_sign(divSqrtRawFN__io_rawOut_sign),
    .io_rawOut_sExp(divSqrtRawFN__io_rawOut_sExp),
    .io_rawOut_sig(divSqrtRawFN__io_rawOut_sig)
  );
  assign io_inReady = divSqrtRawFN__io_inReady; // @[DivSqrtRecFN_small.scala 448:16]
  assign io_rawOutValid_div = divSqrtRawFN__io_rawOutValid_div; // @[DivSqrtRecFN_small.scala 455:25]
  assign io_rawOutValid_sqrt = divSqrtRawFN__io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 456:25]
  assign io_roundingModeOut = divSqrtRawFN__io_roundingModeOut; // @[DivSqrtRecFN_small.scala 457:25]
  assign io_invalidExc = divSqrtRawFN__io_invalidExc; // @[DivSqrtRecFN_small.scala 458:25]
  assign io_infiniteExc = divSqrtRawFN__io_infiniteExc; // @[DivSqrtRecFN_small.scala 459:25]
  assign io_rawOut_isNaN = divSqrtRawFN__io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 460:25]
  assign io_rawOut_isInf = divSqrtRawFN__io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 460:25]
  assign io_rawOut_isZero = divSqrtRawFN__io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 460:25]
  assign io_rawOut_sign = divSqrtRawFN__io_rawOut_sign; // @[DivSqrtRecFN_small.scala 460:25]
  assign io_rawOut_sExp = divSqrtRawFN__io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 460:25]
  assign io_rawOut_sig = divSqrtRawFN__io_rawOut_sig; // @[DivSqrtRecFN_small.scala 460:25]
  assign divSqrtRawFN__clock = clock;
  assign divSqrtRawFN__reset = reset;
  assign divSqrtRawFN__io_inValid = io_inValid; // @[DivSqrtRecFN_small.scala 449:34]
  assign divSqrtRawFN__io_sqrtOp = io_sqrtOp; // @[DivSqrtRecFN_small.scala 450:34]
  assign divSqrtRawFN__io_a_isNaN = divSqrtRawFN_io_a_isSpecial & divSqrtRawFN_io_a_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign divSqrtRawFN__io_a_isInf = divSqrtRawFN_io_a_isSpecial & ~divSqrtRawFN_io_a_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign divSqrtRawFN__io_a_isZero = divSqrtRawFN_io_a_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign divSqrtRawFN__io_a_sign = io_a[32]; // @[rawFloatFromRecFN.scala 59:25]
  assign divSqrtRawFN__io_a_sExp = {1'b0,$signed(divSqrtRawFN_io_a_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  assign divSqrtRawFN__io_a_sig = {_divSqrtRawFN_io_a_out_sig_T_1,io_a[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  assign divSqrtRawFN__io_b_isNaN = divSqrtRawFN_io_b_isSpecial & divSqrtRawFN_io_b_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  assign divSqrtRawFN__io_b_isInf = divSqrtRawFN_io_b_isSpecial & ~divSqrtRawFN_io_b_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  assign divSqrtRawFN__io_b_isZero = divSqrtRawFN_io_b_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  assign divSqrtRawFN__io_b_sign = io_b[32]; // @[rawFloatFromRecFN.scala 59:25]
  assign divSqrtRawFN__io_b_sExp = {1'b0,$signed(divSqrtRawFN_io_b_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  assign divSqrtRawFN__io_b_sig = {_divSqrtRawFN_io_b_out_sig_T_1,io_b[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  assign divSqrtRawFN__io_roundingMode = io_roundingMode; // @[DivSqrtRecFN_small.scala 453:34]
endmodule
module DivSqrtRecFM_small_e8_s24(
  input         clock,
  input         reset,
  output        io_inReady,
  input         io_inValid,
  input         io_sqrtOp,
  input  [32:0] io_a,
  input  [32:0] io_b,
  input  [2:0]  io_roundingMode,
  output        io_outValid_div,
  output        io_outValid_sqrt,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  divSqrtRecFNToRaw_clock; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_reset; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_inReady; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_inValid; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_sqrtOp; // @[DivSqrtRecFN_small.scala 493:15]
  wire [32:0] divSqrtRecFNToRaw_io_a; // @[DivSqrtRecFN_small.scala 493:15]
  wire [32:0] divSqrtRecFNToRaw_io_b; // @[DivSqrtRecFN_small.scala 493:15]
  wire [2:0] divSqrtRecFNToRaw_io_roundingMode; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_rawOutValid_div; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 493:15]
  wire [2:0] divSqrtRecFNToRaw_io_roundingModeOut; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_invalidExc; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_infiniteExc; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 493:15]
  wire  divSqrtRecFNToRaw_io_rawOut_sign; // @[DivSqrtRecFN_small.scala 493:15]
  wire [9:0] divSqrtRecFNToRaw_io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 493:15]
  wire [26:0] divSqrtRecFNToRaw_io_rawOut_sig; // @[DivSqrtRecFN_small.scala 493:15]
  wire  roundRawFNToRecFN_io_invalidExc; // @[DivSqrtRecFN_small.scala 508:15]
  wire  roundRawFNToRecFN_io_infiniteExc; // @[DivSqrtRecFN_small.scala 508:15]
  wire  roundRawFNToRecFN_io_in_isNaN; // @[DivSqrtRecFN_small.scala 508:15]
  wire  roundRawFNToRecFN_io_in_isInf; // @[DivSqrtRecFN_small.scala 508:15]
  wire  roundRawFNToRecFN_io_in_isZero; // @[DivSqrtRecFN_small.scala 508:15]
  wire  roundRawFNToRecFN_io_in_sign; // @[DivSqrtRecFN_small.scala 508:15]
  wire [9:0] roundRawFNToRecFN_io_in_sExp; // @[DivSqrtRecFN_small.scala 508:15]
  wire [26:0] roundRawFNToRecFN_io_in_sig; // @[DivSqrtRecFN_small.scala 508:15]
  wire [2:0] roundRawFNToRecFN_io_roundingMode; // @[DivSqrtRecFN_small.scala 508:15]
  wire [32:0] roundRawFNToRecFN_io_out; // @[DivSqrtRecFN_small.scala 508:15]
  wire [4:0] roundRawFNToRecFN_io_exceptionFlags; // @[DivSqrtRecFN_small.scala 508:15]
  DivSqrtRecFMToRaw_small_e8_s24 divSqrtRecFNToRaw ( // @[DivSqrtRecFN_small.scala 493:15]
    .clock(divSqrtRecFNToRaw_clock),
    .reset(divSqrtRecFNToRaw_reset),
    .io_inReady(divSqrtRecFNToRaw_io_inReady),
    .io_inValid(divSqrtRecFNToRaw_io_inValid),
    .io_sqrtOp(divSqrtRecFNToRaw_io_sqrtOp),
    .io_a(divSqrtRecFNToRaw_io_a),
    .io_b(divSqrtRecFNToRaw_io_b),
    .io_roundingMode(divSqrtRecFNToRaw_io_roundingMode),
    .io_rawOutValid_div(divSqrtRecFNToRaw_io_rawOutValid_div),
    .io_rawOutValid_sqrt(divSqrtRecFNToRaw_io_rawOutValid_sqrt),
    .io_roundingModeOut(divSqrtRecFNToRaw_io_roundingModeOut),
    .io_invalidExc(divSqrtRecFNToRaw_io_invalidExc),
    .io_infiniteExc(divSqrtRecFNToRaw_io_infiniteExc),
    .io_rawOut_isNaN(divSqrtRecFNToRaw_io_rawOut_isNaN),
    .io_rawOut_isInf(divSqrtRecFNToRaw_io_rawOut_isInf),
    .io_rawOut_isZero(divSqrtRecFNToRaw_io_rawOut_isZero),
    .io_rawOut_sign(divSqrtRecFNToRaw_io_rawOut_sign),
    .io_rawOut_sExp(divSqrtRecFNToRaw_io_rawOut_sExp),
    .io_rawOut_sig(divSqrtRecFNToRaw_io_rawOut_sig)
  );
  RoundRawFNToRecFN_e8_s24 roundRawFNToRecFN ( // @[DivSqrtRecFN_small.scala 508:15]
    .io_invalidExc(roundRawFNToRecFN_io_invalidExc),
    .io_infiniteExc(roundRawFNToRecFN_io_infiniteExc),
    .io_in_isNaN(roundRawFNToRecFN_io_in_isNaN),
    .io_in_isInf(roundRawFNToRecFN_io_in_isInf),
    .io_in_isZero(roundRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundRawFNToRecFN_io_roundingMode),
    .io_out(roundRawFNToRecFN_io_out),
    .io_exceptionFlags(roundRawFNToRecFN_io_exceptionFlags)
  );
  assign io_inReady = divSqrtRecFNToRaw_io_inReady; // @[DivSqrtRecFN_small.scala 495:16]
  assign io_outValid_div = divSqrtRecFNToRaw_io_rawOutValid_div; // @[DivSqrtRecFN_small.scala 504:22]
  assign io_outValid_sqrt = divSqrtRecFNToRaw_io_rawOutValid_sqrt; // @[DivSqrtRecFN_small.scala 505:22]
  assign io_out = roundRawFNToRecFN_io_out; // @[DivSqrtRecFN_small.scala 514:23]
  assign io_exceptionFlags = roundRawFNToRecFN_io_exceptionFlags; // @[DivSqrtRecFN_small.scala 515:23]
  assign divSqrtRecFNToRaw_clock = clock;
  assign divSqrtRecFNToRaw_reset = reset;
  assign divSqrtRecFNToRaw_io_inValid = io_inValid; // @[DivSqrtRecFN_small.scala 496:39]
  assign divSqrtRecFNToRaw_io_sqrtOp = io_sqrtOp; // @[DivSqrtRecFN_small.scala 497:39]
  assign divSqrtRecFNToRaw_io_a = io_a; // @[DivSqrtRecFN_small.scala 498:39]
  assign divSqrtRecFNToRaw_io_b = io_b; // @[DivSqrtRecFN_small.scala 499:39]
  assign divSqrtRecFNToRaw_io_roundingMode = io_roundingMode; // @[DivSqrtRecFN_small.scala 500:39]
  assign roundRawFNToRecFN_io_invalidExc = divSqrtRecFNToRaw_io_invalidExc; // @[DivSqrtRecFN_small.scala 509:39]
  assign roundRawFNToRecFN_io_infiniteExc = divSqrtRecFNToRaw_io_infiniteExc; // @[DivSqrtRecFN_small.scala 510:39]
  assign roundRawFNToRecFN_io_in_isNaN = divSqrtRecFNToRaw_io_rawOut_isNaN; // @[DivSqrtRecFN_small.scala 511:39]
  assign roundRawFNToRecFN_io_in_isInf = divSqrtRecFNToRaw_io_rawOut_isInf; // @[DivSqrtRecFN_small.scala 511:39]
  assign roundRawFNToRecFN_io_in_isZero = divSqrtRecFNToRaw_io_rawOut_isZero; // @[DivSqrtRecFN_small.scala 511:39]
  assign roundRawFNToRecFN_io_in_sign = divSqrtRecFNToRaw_io_rawOut_sign; // @[DivSqrtRecFN_small.scala 511:39]
  assign roundRawFNToRecFN_io_in_sExp = divSqrtRecFNToRaw_io_rawOut_sExp; // @[DivSqrtRecFN_small.scala 511:39]
  assign roundRawFNToRecFN_io_in_sig = divSqrtRecFNToRaw_io_rawOut_sig; // @[DivSqrtRecFN_small.scala 511:39]
  assign roundRawFNToRecFN_io_roundingMode = divSqrtRecFNToRaw_io_roundingModeOut; // @[DivSqrtRecFN_small.scala 512:39]
endmodule
module CompareRecFN(
  input  [32:0] io_a,
  input  [32:0] io_b,
  input         io_signaling,
  output        io_lt,
  output        io_eq,
  output        io_gt,
  output [4:0]  io_exceptionFlags
);
  wire [8:0] rawA_exp = io_a[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  rawA_isZero = rawA_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  rawA_isSpecial = rawA_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  rawA__isNaN = rawA_isSpecial & rawA_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawA__isInf = rawA_isSpecial & ~rawA_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  rawA__sign = io_a[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] rawA__sExp = {1'b0,$signed(rawA_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _rawA_out_sig_T = ~rawA_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] rawA__sig = {1'h0,_rawA_out_sig_T,io_a[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire [8:0] rawB_exp = io_b[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  rawB_isZero = rawB_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  rawB_isSpecial = rawB_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  rawB__isNaN = rawB_isSpecial & rawB_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawB__isInf = rawB_isSpecial & ~rawB_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  rawB__sign = io_b[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] rawB__sExp = {1'b0,$signed(rawB_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _rawB_out_sig_T = ~rawB_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] rawB__sig = {1'h0,_rawB_out_sig_T,io_b[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  ordered = ~rawA__isNaN & ~rawB__isNaN; // @[CompareRecFN.scala 57:32]
  wire  bothInfs = rawA__isInf & rawB__isInf; // @[CompareRecFN.scala 58:33]
  wire  bothZeros = rawA_isZero & rawB_isZero; // @[CompareRecFN.scala 59:33]
  wire  eqExps = $signed(rawA__sExp) == $signed(rawB__sExp); // @[CompareRecFN.scala 60:29]
  wire  common_ltMags = $signed(rawA__sExp) < $signed(rawB__sExp) | eqExps & rawA__sig < rawB__sig; // @[CompareRecFN.scala 62:33]
  wire  common_eqMags = eqExps & rawA__sig == rawB__sig; // @[CompareRecFN.scala 63:32]
  wire  _ordered_lt_T_1 = ~rawB__sign; // @[CompareRecFN.scala 67:28]
  wire  _ordered_lt_T_9 = _ordered_lt_T_1 & common_ltMags; // @[CompareRecFN.scala 70:41]
  wire  _ordered_lt_T_10 = rawA__sign & ~common_ltMags & ~common_eqMags | _ordered_lt_T_9; // @[CompareRecFN.scala 69:74]
  wire  _ordered_lt_T_11 = ~bothInfs & _ordered_lt_T_10; // @[CompareRecFN.scala 68:30]
  wire  _ordered_lt_T_12 = rawA__sign & ~rawB__sign | _ordered_lt_T_11; // @[CompareRecFN.scala 67:41]
  wire  ordered_lt = ~bothZeros & _ordered_lt_T_12; // @[CompareRecFN.scala 66:21]
  wire  ordered_eq = bothZeros | rawA__sign == rawB__sign & (bothInfs | common_eqMags); // @[CompareRecFN.scala 72:19]
  wire  _invalid_T_2 = rawA__isNaN & ~rawA__sig[22]; // @[common.scala 82:46]
  wire  _invalid_T_5 = rawB__isNaN & ~rawB__sig[22]; // @[common.scala 82:46]
  wire  _invalid_T_8 = io_signaling & ~ordered; // @[CompareRecFN.scala 76:27]
  wire  invalid = _invalid_T_2 | _invalid_T_5 | _invalid_T_8; // @[CompareRecFN.scala 75:58]
  assign io_lt = ordered & ordered_lt; // @[CompareRecFN.scala 78:22]
  assign io_eq = ordered & ordered_eq; // @[CompareRecFN.scala 79:22]
  assign io_gt = ordered & ~ordered_lt & ~ordered_eq; // @[CompareRecFN.scala 80:38]
  assign io_exceptionFlags = {invalid,4'h0}; // @[CompareRecFN.scala 81:34]
endmodule
module RecFNToIN_e8_s24_i32(
  input  [32:0] io_in,
  input  [2:0]  io_roundingMode,
  input         io_signedOut,
  output [31:0] io_out,
  output [2:0]  io_intExceptionFlags
);
  wire [8:0] rawIn_exp = io_in[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  rawIn_isZero = rawIn_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  rawIn_isSpecial = rawIn_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  rawIn__isNaN = rawIn_isSpecial & rawIn_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  rawIn__isInf = rawIn_isSpecial & ~rawIn_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  rawIn__sign = io_in[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] rawIn__sExp = {1'b0,$signed(rawIn_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _rawIn_out_sig_T = ~rawIn_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] rawIn__sig = {1'h0,_rawIn_out_sig_T,io_in[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  magGeOne = rawIn__sExp[8]; // @[RecFNToIN.scala 61:30]
  wire [7:0] posExp = rawIn__sExp[7:0]; // @[RecFNToIN.scala 62:28]
  wire  magJustBelowOne = ~magGeOne & &posExp; // @[RecFNToIN.scala 63:37]
  wire  roundingMode_near_even = io_roundingMode == 3'h0; // @[RecFNToIN.scala 67:53]
  wire  roundingMode_min = io_roundingMode == 3'h2; // @[RecFNToIN.scala 69:53]
  wire  roundingMode_max = io_roundingMode == 3'h3; // @[RecFNToIN.scala 70:53]
  wire  roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RecFNToIN.scala 71:53]
  wire  roundingMode_odd = io_roundingMode == 3'h6; // @[RecFNToIN.scala 72:53]
  wire [23:0] _shiftedSig_T_1 = {magGeOne,rawIn__sig[22:0]}; // @[RecFNToIN.scala 83:19]
  wire [4:0] _shiftedSig_T_3 = magGeOne ? rawIn__sExp[4:0] : 5'h0; // @[RecFNToIN.scala 84:16]
  wire [54:0] _GEN_2 = {{31'd0}, _shiftedSig_T_1}; // @[RecFNToIN.scala 83:49]
  wire [54:0] shiftedSig = _GEN_2 << _shiftedSig_T_3; // @[RecFNToIN.scala 83:49]
  wire [33:0] alignedSig = {shiftedSig[54:22],|shiftedSig[21:0]}; // @[RecFNToIN.scala 89:38]
  wire [31:0] unroundedInt = alignedSig[33:2]; // @[RecFNToIN.scala 90:52]
  wire  _common_inexact_T_1 = |alignedSig[1:0]; // @[RecFNToIN.scala 92:57]
  wire  common_inexact = magGeOne ? |alignedSig[1:0] : _rawIn_out_sig_T; // @[RecFNToIN.scala 92:29]
  wire  _roundIncr_near_even_T_8 = magJustBelowOne & _common_inexact_T_1; // @[RecFNToIN.scala 95:26]
  wire  roundIncr_near_even = magGeOne & (&alignedSig[2:1] | &alignedSig[1:0]) | _roundIncr_near_even_T_8; // @[RecFNToIN.scala 94:78]
  wire  roundIncr_near_maxMag = magGeOne & alignedSig[1] | magJustBelowOne; // @[RecFNToIN.scala 96:61]
  wire  _roundIncr_T_1 = roundingMode_near_maxMag & roundIncr_near_maxMag; // @[RecFNToIN.scala 99:35]
  wire  _roundIncr_T_2 = roundingMode_near_even & roundIncr_near_even | _roundIncr_T_1; // @[RecFNToIN.scala 98:61]
  wire  _roundIncr_T_4 = rawIn__sign & common_inexact; // @[RecFNToIN.scala 101:26]
  wire  _roundIncr_T_5 = (roundingMode_min | roundingMode_odd) & _roundIncr_T_4; // @[RecFNToIN.scala 100:49]
  wire  _roundIncr_T_6 = _roundIncr_T_2 | _roundIncr_T_5; // @[RecFNToIN.scala 99:61]
  wire  _roundIncr_T_9 = roundingMode_max & (~rawIn__sign & common_inexact); // @[RecFNToIN.scala 102:27]
  wire  roundIncr = _roundIncr_T_6 | _roundIncr_T_9; // @[RecFNToIN.scala 101:46]
  wire [31:0] _complUnroundedInt_T = ~unroundedInt; // @[RecFNToIN.scala 103:45]
  wire [31:0] complUnroundedInt = rawIn__sign ? _complUnroundedInt_T : unroundedInt; // @[RecFNToIN.scala 103:32]
  wire [31:0] _roundedInt_T_2 = complUnroundedInt + 32'h1; // @[RecFNToIN.scala 106:31]
  wire [31:0] _roundedInt_T_3 = roundIncr ^ rawIn__sign ? _roundedInt_T_2 : complUnroundedInt; // @[RecFNToIN.scala 105:12]
  wire  _roundedInt_T_4 = roundingMode_odd & common_inexact; // @[RecFNToIN.scala 108:31]
  wire [31:0] _GEN_0 = {{31'd0}, _roundedInt_T_4}; // @[RecFNToIN.scala 108:11]
  wire [31:0] roundedInt = _roundedInt_T_3 | _GEN_0; // @[RecFNToIN.scala 108:11]
  wire  magGeOne_atOverflowEdge = posExp == 8'h1f; // @[RecFNToIN.scala 110:43]
  wire  roundCarryBut2 = &unroundedInt[29:0] & roundIncr; // @[RecFNToIN.scala 113:61]
  wire  _common_overflow_T_3 = |unroundedInt[30:0] | roundIncr; // @[RecFNToIN.scala 120:64]
  wire  _common_overflow_T_4 = magGeOne_atOverflowEdge & _common_overflow_T_3; // @[RecFNToIN.scala 119:49]
  wire  _common_overflow_T_6 = posExp == 8'h1e & roundCarryBut2; // @[RecFNToIN.scala 122:60]
  wire  _common_overflow_T_7 = magGeOne_atOverflowEdge | _common_overflow_T_6; // @[RecFNToIN.scala 121:49]
  wire  _common_overflow_T_8 = rawIn__sign ? _common_overflow_T_4 : _common_overflow_T_7; // @[RecFNToIN.scala 118:24]
  wire  _common_overflow_T_10 = magGeOne_atOverflowEdge & unroundedInt[30]; // @[RecFNToIN.scala 125:50]
  wire  _common_overflow_T_11 = _common_overflow_T_10 & roundCarryBut2; // @[RecFNToIN.scala 126:57]
  wire  _common_overflow_T_12 = rawIn__sign | _common_overflow_T_11; // @[RecFNToIN.scala 124:32]
  wire  _common_overflow_T_13 = io_signedOut ? _common_overflow_T_8 : _common_overflow_T_12; // @[RecFNToIN.scala 117:20]
  wire  _common_overflow_T_14 = posExp >= 8'h20 | _common_overflow_T_13; // @[RecFNToIN.scala 116:36]
  wire  _common_overflow_T_17 = ~io_signedOut & rawIn__sign & roundIncr; // @[RecFNToIN.scala 128:41]
  wire  common_overflow = magGeOne ? _common_overflow_T_14 : _common_overflow_T_17; // @[RecFNToIN.scala 115:12]
  wire  invalidExc = rawIn__isNaN | rawIn__isInf; // @[RecFNToIN.scala 133:34]
  wire  _overflow_T = ~invalidExc; // @[RecFNToIN.scala 134:20]
  wire  overflow = ~invalidExc & common_overflow; // @[RecFNToIN.scala 134:32]
  wire  inexact = _overflow_T & ~common_overflow & common_inexact; // @[RecFNToIN.scala 135:52]
  wire  excSign = ~rawIn__isNaN & rawIn__sign; // @[RecFNToIN.scala 137:32]
  wire [31:0] _excOut_T_1 = io_signedOut == excSign ? 32'h80000000 : 32'h0; // @[RecFNToIN.scala 139:12]
  wire [30:0] _excOut_T_3 = ~excSign ? 31'h7fffffff : 31'h0; // @[RecFNToIN.scala 143:12]
  wire [31:0] _GEN_1 = {{1'd0}, _excOut_T_3}; // @[RecFNToIN.scala 142:11]
  wire [31:0] excOut = _excOut_T_1 | _GEN_1; // @[RecFNToIN.scala 142:11]
  wire [1:0] _io_intExceptionFlags_T = {invalidExc,overflow}; // @[RecFNToIN.scala 146:40]
  assign io_out = invalidExc | common_overflow ? excOut : roundedInt; // @[RecFNToIN.scala 145:18]
  assign io_intExceptionFlags = {_io_intExceptionFlags_T,inexact}; // @[RecFNToIN.scala 146:52]
endmodule
module RoundAnyRawFNToRecFN_ie6_is32_oe8_os24(
  input         io_in_isZero,
  input         io_in_sign,
  input  [7:0]  io_in_sExp,
  input  [32:0] io_in_sig,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundingMode_near_even = io_roundingMode == 3'h0; // @[RoundAnyRawFNToRecFN.scala 90:53]
  wire  roundingMode_min = io_roundingMode == 3'h2; // @[RoundAnyRawFNToRecFN.scala 92:53]
  wire  roundingMode_max = io_roundingMode == 3'h3; // @[RoundAnyRawFNToRecFN.scala 93:53]
  wire  roundingMode_near_maxMag = io_roundingMode == 3'h4; // @[RoundAnyRawFNToRecFN.scala 94:53]
  wire  roundingMode_odd = io_roundingMode == 3'h6; // @[RoundAnyRawFNToRecFN.scala 95:53]
  wire  roundMagUp = roundingMode_min & io_in_sign | roundingMode_max & ~io_in_sign; // @[RoundAnyRawFNToRecFN.scala 98:42]
  wire [8:0] _GEN_0 = {{1{io_in_sExp[7]}},io_in_sExp}; // @[RoundAnyRawFNToRecFN.scala 104:25]
  wire [9:0] _sAdjustedExp_T = $signed(_GEN_0) + 9'shc0; // @[RoundAnyRawFNToRecFN.scala 104:25]
  wire [9:0] sAdjustedExp = {1'b0,$signed(_sAdjustedExp_T[8:0])}; // @[RoundAnyRawFNToRecFN.scala 106:31]
  wire  _adjustedSig_T_2 = |io_in_sig[6:0]; // @[RoundAnyRawFNToRecFN.scala 117:60]
  wire [26:0] adjustedSig = {io_in_sig[32:7],_adjustedSig_T_2}; // @[RoundAnyRawFNToRecFN.scala 116:66]
  wire [26:0] _roundPosBit_T = adjustedSig & 27'h2; // @[RoundAnyRawFNToRecFN.scala 164:40]
  wire  roundPosBit = |_roundPosBit_T; // @[RoundAnyRawFNToRecFN.scala 164:56]
  wire [26:0] _anyRoundExtra_T = adjustedSig & 27'h1; // @[RoundAnyRawFNToRecFN.scala 165:42]
  wire  anyRoundExtra = |_anyRoundExtra_T; // @[RoundAnyRawFNToRecFN.scala 165:62]
  wire  anyRound = roundPosBit | anyRoundExtra; // @[RoundAnyRawFNToRecFN.scala 166:36]
  wire  _roundIncr_T_1 = (roundingMode_near_even | roundingMode_near_maxMag) & roundPosBit; // @[RoundAnyRawFNToRecFN.scala 169:67]
  wire  _roundIncr_T_2 = roundMagUp & anyRound; // @[RoundAnyRawFNToRecFN.scala 171:29]
  wire  roundIncr = _roundIncr_T_1 | _roundIncr_T_2; // @[RoundAnyRawFNToRecFN.scala 170:31]
  wire [26:0] _roundedSig_T = adjustedSig | 27'h3; // @[RoundAnyRawFNToRecFN.scala 174:32]
  wire [25:0] _roundedSig_T_2 = _roundedSig_T[26:2] + 25'h1; // @[RoundAnyRawFNToRecFN.scala 174:49]
  wire  _roundedSig_T_4 = ~anyRoundExtra; // @[RoundAnyRawFNToRecFN.scala 176:30]
  wire [25:0] _roundedSig_T_7 = roundingMode_near_even & roundPosBit & _roundedSig_T_4 ? 26'h1 : 26'h0; // @[RoundAnyRawFNToRecFN.scala 175:25]
  wire [25:0] _roundedSig_T_8 = ~_roundedSig_T_7; // @[RoundAnyRawFNToRecFN.scala 175:21]
  wire [25:0] _roundedSig_T_9 = _roundedSig_T_2 & _roundedSig_T_8; // @[RoundAnyRawFNToRecFN.scala 174:57]
  wire [26:0] _roundedSig_T_11 = adjustedSig & 27'h7fffffc; // @[RoundAnyRawFNToRecFN.scala 180:30]
  wire [25:0] _roundedSig_T_15 = roundingMode_odd & anyRound ? 26'h1 : 26'h0; // @[RoundAnyRawFNToRecFN.scala 181:24]
  wire [25:0] _GEN_1 = {{1'd0}, _roundedSig_T_11[26:2]}; // @[RoundAnyRawFNToRecFN.scala 180:47]
  wire [25:0] _roundedSig_T_16 = _GEN_1 | _roundedSig_T_15; // @[RoundAnyRawFNToRecFN.scala 180:47]
  wire [25:0] roundedSig = roundIncr ? _roundedSig_T_9 : _roundedSig_T_16; // @[RoundAnyRawFNToRecFN.scala 173:16]
  wire [2:0] _sRoundedExp_T_1 = {1'b0,$signed(roundedSig[25:24])}; // @[RoundAnyRawFNToRecFN.scala 185:76]
  wire [9:0] _GEN_2 = {{7{_sRoundedExp_T_1[2]}},_sRoundedExp_T_1}; // @[RoundAnyRawFNToRecFN.scala 185:40]
  wire [10:0] sRoundedExp = $signed(sAdjustedExp) + $signed(_GEN_2); // @[RoundAnyRawFNToRecFN.scala 185:40]
  wire [8:0] common_expOut = sRoundedExp[8:0]; // @[RoundAnyRawFNToRecFN.scala 187:37]
  wire [22:0] common_fractOut = roundedSig[22:0]; // @[RoundAnyRawFNToRecFN.scala 191:27]
  wire  commonCase = ~io_in_isZero; // @[RoundAnyRawFNToRecFN.scala 237:64]
  wire  inexact = commonCase & anyRound; // @[RoundAnyRawFNToRecFN.scala 240:43]
  wire [8:0] _expOut_T_1 = io_in_isZero ? 9'h1c0 : 9'h0; // @[RoundAnyRawFNToRecFN.scala 253:18]
  wire [8:0] _expOut_T_2 = ~_expOut_T_1; // @[RoundAnyRawFNToRecFN.scala 253:14]
  wire [8:0] expOut = common_expOut & _expOut_T_2; // @[RoundAnyRawFNToRecFN.scala 252:24]
  wire [22:0] fractOut = io_in_isZero ? 23'h0 : common_fractOut; // @[RoundAnyRawFNToRecFN.scala 280:12]
  wire [9:0] _io_out_T = {io_in_sign,expOut}; // @[RoundAnyRawFNToRecFN.scala 286:23]
  assign io_out = {_io_out_T,fractOut}; // @[RoundAnyRawFNToRecFN.scala 286:33]
  assign io_exceptionFlags = {4'h0,inexact}; // @[RoundAnyRawFNToRecFN.scala 288:66]
endmodule
module INToRecFN_i32_e8_s24(
  input         io_signedIn,
  input  [31:0] io_in,
  input  [2:0]  io_roundingMode,
  output [32:0] io_out,
  output [4:0]  io_exceptionFlags
);
  wire  roundAnyRawFNToRecFN_io_in_isZero; // @[INToRecFN.scala 60:15]
  wire  roundAnyRawFNToRecFN_io_in_sign; // @[INToRecFN.scala 60:15]
  wire [7:0] roundAnyRawFNToRecFN_io_in_sExp; // @[INToRecFN.scala 60:15]
  wire [32:0] roundAnyRawFNToRecFN_io_in_sig; // @[INToRecFN.scala 60:15]
  wire [2:0] roundAnyRawFNToRecFN_io_roundingMode; // @[INToRecFN.scala 60:15]
  wire [32:0] roundAnyRawFNToRecFN_io_out; // @[INToRecFN.scala 60:15]
  wire [4:0] roundAnyRawFNToRecFN_io_exceptionFlags; // @[INToRecFN.scala 60:15]
  wire  intAsRawFloat_sign = io_signedIn & io_in[31]; // @[rawFloatFromIN.scala 51:29]
  wire [31:0] _intAsRawFloat_absIn_T_1 = 32'h0 - io_in; // @[rawFloatFromIN.scala 52:31]
  wire [31:0] intAsRawFloat_absIn = intAsRawFloat_sign ? _intAsRawFloat_absIn_T_1 : io_in; // @[rawFloatFromIN.scala 52:24]
  wire [63:0] _intAsRawFloat_extAbsIn_T = {32'h0,intAsRawFloat_absIn}; // @[rawFloatFromIN.scala 53:44]
  wire [31:0] intAsRawFloat_extAbsIn = _intAsRawFloat_extAbsIn_T[31:0]; // @[rawFloatFromIN.scala 53:53]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_32 = intAsRawFloat_extAbsIn[1] ? 5'h1e : 5'h1f; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_33 = intAsRawFloat_extAbsIn[2] ? 5'h1d :
    _intAsRawFloat_adjustedNormDist_T_32; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_34 = intAsRawFloat_extAbsIn[3] ? 5'h1c :
    _intAsRawFloat_adjustedNormDist_T_33; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_35 = intAsRawFloat_extAbsIn[4] ? 5'h1b :
    _intAsRawFloat_adjustedNormDist_T_34; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_36 = intAsRawFloat_extAbsIn[5] ? 5'h1a :
    _intAsRawFloat_adjustedNormDist_T_35; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_37 = intAsRawFloat_extAbsIn[6] ? 5'h19 :
    _intAsRawFloat_adjustedNormDist_T_36; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_38 = intAsRawFloat_extAbsIn[7] ? 5'h18 :
    _intAsRawFloat_adjustedNormDist_T_37; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_39 = intAsRawFloat_extAbsIn[8] ? 5'h17 :
    _intAsRawFloat_adjustedNormDist_T_38; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_40 = intAsRawFloat_extAbsIn[9] ? 5'h16 :
    _intAsRawFloat_adjustedNormDist_T_39; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_41 = intAsRawFloat_extAbsIn[10] ? 5'h15 :
    _intAsRawFloat_adjustedNormDist_T_40; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_42 = intAsRawFloat_extAbsIn[11] ? 5'h14 :
    _intAsRawFloat_adjustedNormDist_T_41; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_43 = intAsRawFloat_extAbsIn[12] ? 5'h13 :
    _intAsRawFloat_adjustedNormDist_T_42; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_44 = intAsRawFloat_extAbsIn[13] ? 5'h12 :
    _intAsRawFloat_adjustedNormDist_T_43; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_45 = intAsRawFloat_extAbsIn[14] ? 5'h11 :
    _intAsRawFloat_adjustedNormDist_T_44; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_46 = intAsRawFloat_extAbsIn[15] ? 5'h10 :
    _intAsRawFloat_adjustedNormDist_T_45; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_47 = intAsRawFloat_extAbsIn[16] ? 5'hf :
    _intAsRawFloat_adjustedNormDist_T_46; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_48 = intAsRawFloat_extAbsIn[17] ? 5'he :
    _intAsRawFloat_adjustedNormDist_T_47; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_49 = intAsRawFloat_extAbsIn[18] ? 5'hd :
    _intAsRawFloat_adjustedNormDist_T_48; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_50 = intAsRawFloat_extAbsIn[19] ? 5'hc :
    _intAsRawFloat_adjustedNormDist_T_49; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_51 = intAsRawFloat_extAbsIn[20] ? 5'hb :
    _intAsRawFloat_adjustedNormDist_T_50; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_52 = intAsRawFloat_extAbsIn[21] ? 5'ha :
    _intAsRawFloat_adjustedNormDist_T_51; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_53 = intAsRawFloat_extAbsIn[22] ? 5'h9 :
    _intAsRawFloat_adjustedNormDist_T_52; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_54 = intAsRawFloat_extAbsIn[23] ? 5'h8 :
    _intAsRawFloat_adjustedNormDist_T_53; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_55 = intAsRawFloat_extAbsIn[24] ? 5'h7 :
    _intAsRawFloat_adjustedNormDist_T_54; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_56 = intAsRawFloat_extAbsIn[25] ? 5'h6 :
    _intAsRawFloat_adjustedNormDist_T_55; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_57 = intAsRawFloat_extAbsIn[26] ? 5'h5 :
    _intAsRawFloat_adjustedNormDist_T_56; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_58 = intAsRawFloat_extAbsIn[27] ? 5'h4 :
    _intAsRawFloat_adjustedNormDist_T_57; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_59 = intAsRawFloat_extAbsIn[28] ? 5'h3 :
    _intAsRawFloat_adjustedNormDist_T_58; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_60 = intAsRawFloat_extAbsIn[29] ? 5'h2 :
    _intAsRawFloat_adjustedNormDist_T_59; // @[Mux.scala 47:70]
  wire [4:0] _intAsRawFloat_adjustedNormDist_T_61 = intAsRawFloat_extAbsIn[30] ? 5'h1 :
    _intAsRawFloat_adjustedNormDist_T_60; // @[Mux.scala 47:70]
  wire [4:0] intAsRawFloat_adjustedNormDist = intAsRawFloat_extAbsIn[31] ? 5'h0 : _intAsRawFloat_adjustedNormDist_T_61; // @[Mux.scala 47:70]
  wire [62:0] _GEN_0 = {{31'd0}, intAsRawFloat_extAbsIn}; // @[rawFloatFromIN.scala 56:22]
  wire [62:0] _intAsRawFloat_sig_T = _GEN_0 << intAsRawFloat_adjustedNormDist; // @[rawFloatFromIN.scala 56:22]
  wire [31:0] intAsRawFloat_sig = _intAsRawFloat_sig_T[31:0]; // @[rawFloatFromIN.scala 56:41]
  wire [4:0] _intAsRawFloat_out_sExp_T_1 = ~intAsRawFloat_adjustedNormDist; // @[rawFloatFromIN.scala 64:36]
  wire [6:0] _intAsRawFloat_out_sExp_T_2 = {2'h2,_intAsRawFloat_out_sExp_T_1}; // @[rawFloatFromIN.scala 64:33]
  RoundAnyRawFNToRecFN_ie6_is32_oe8_os24 roundAnyRawFNToRecFN ( // @[INToRecFN.scala 60:15]
    .io_in_isZero(roundAnyRawFNToRecFN_io_in_isZero),
    .io_in_sign(roundAnyRawFNToRecFN_io_in_sign),
    .io_in_sExp(roundAnyRawFNToRecFN_io_in_sExp),
    .io_in_sig(roundAnyRawFNToRecFN_io_in_sig),
    .io_roundingMode(roundAnyRawFNToRecFN_io_roundingMode),
    .io_out(roundAnyRawFNToRecFN_io_out),
    .io_exceptionFlags(roundAnyRawFNToRecFN_io_exceptionFlags)
  );
  assign io_out = roundAnyRawFNToRecFN_io_out; // @[INToRecFN.scala 73:23]
  assign io_exceptionFlags = roundAnyRawFNToRecFN_io_exceptionFlags; // @[INToRecFN.scala 74:23]
  assign roundAnyRawFNToRecFN_io_in_isZero = ~intAsRawFloat_sig[31]; // @[rawFloatFromIN.scala 62:23]
  assign roundAnyRawFNToRecFN_io_in_sign = io_signedIn & io_in[31]; // @[rawFloatFromIN.scala 51:29]
  assign roundAnyRawFNToRecFN_io_in_sExp = {1'b0,$signed(_intAsRawFloat_out_sExp_T_2)}; // @[rawFloatFromIN.scala 64:72]
  assign roundAnyRawFNToRecFN_io_in_sig = {{1'd0}, intAsRawFloat_sig}; // @[rawFloatFromIN.scala 59:23 65:20]
  assign roundAnyRawFNToRecFN_io_roundingMode = io_roundingMode; // @[INToRecFN.scala 71:44]
endmodule
module FPU(
  input         clock,
  input         reset,
  input  [31:0] io_in_0,
  input  [31:0] io_in_1,
  input  [31:0] io_in_2,
  input  [4:0]  io_aluOp,
  input  [2:0]  io_rm,
  input         io_div_sqrt_valid,
  output [31:0] io_out,
  output        io_exceptions_0,
  output        io_exceptions_1,
  output        io_exceptions_2,
  output        io_exceptions_3,
  output        io_exceptions_4,
  output        io_div_sqrt_ready,
  output        io_div_sqrt_valid_out
);
  wire [1:0] MulAddRecFN_e8_s24_io_op; // @[FPU.scala 41:20]
  wire [32:0] MulAddRecFN_e8_s24_io_a; // @[FPU.scala 41:20]
  wire [32:0] MulAddRecFN_e8_s24_io_b; // @[FPU.scala 41:20]
  wire [32:0] MulAddRecFN_e8_s24_io_c; // @[FPU.scala 41:20]
  wire [2:0] MulAddRecFN_e8_s24_io_roundingMode; // @[FPU.scala 41:20]
  wire [32:0] MulAddRecFN_e8_s24_io_out; // @[FPU.scala 41:20]
  wire [4:0] MulAddRecFN_e8_s24_io_exceptionFlags; // @[FPU.scala 41:20]
  wire  AddRecFN_io_subOp; // @[FPU.scala 42:19]
  wire [32:0] AddRecFN_io_a; // @[FPU.scala 42:19]
  wire [32:0] AddRecFN_io_b; // @[FPU.scala 42:19]
  wire [2:0] AddRecFN_io_roundingMode; // @[FPU.scala 42:19]
  wire [32:0] AddRecFN_io_out; // @[FPU.scala 42:19]
  wire [4:0] AddRecFN_io_exceptionFlags; // @[FPU.scala 42:19]
  wire [32:0] MulRecFN_io_a; // @[FPU.scala 43:19]
  wire [32:0] MulRecFN_io_b; // @[FPU.scala 43:19]
  wire [2:0] MulRecFN_io_roundingMode; // @[FPU.scala 43:19]
  wire [32:0] MulRecFN_io_out; // @[FPU.scala 43:19]
  wire [4:0] MulRecFN_io_exceptionFlags; // @[FPU.scala 43:19]
  wire  DivSqrtRecFM_small_e8_s24_clock; // @[FPU.scala 44:19]
  wire  DivSqrtRecFM_small_e8_s24_reset; // @[FPU.scala 44:19]
  wire  DivSqrtRecFM_small_e8_s24_io_inReady; // @[FPU.scala 44:19]
  wire  DivSqrtRecFM_small_e8_s24_io_inValid; // @[FPU.scala 44:19]
  wire  DivSqrtRecFM_small_e8_s24_io_sqrtOp; // @[FPU.scala 44:19]
  wire [32:0] DivSqrtRecFM_small_e8_s24_io_a; // @[FPU.scala 44:19]
  wire [32:0] DivSqrtRecFM_small_e8_s24_io_b; // @[FPU.scala 44:19]
  wire [2:0] DivSqrtRecFM_small_e8_s24_io_roundingMode; // @[FPU.scala 44:19]
  wire  DivSqrtRecFM_small_e8_s24_io_outValid_div; // @[FPU.scala 44:19]
  wire  DivSqrtRecFM_small_e8_s24_io_outValid_sqrt; // @[FPU.scala 44:19]
  wire [32:0] DivSqrtRecFM_small_e8_s24_io_out; // @[FPU.scala 44:19]
  wire [4:0] DivSqrtRecFM_small_e8_s24_io_exceptionFlags; // @[FPU.scala 44:19]
  wire [32:0] CompareRecFN_io_a; // @[FPU.scala 45:19]
  wire [32:0] CompareRecFN_io_b; // @[FPU.scala 45:19]
  wire  CompareRecFN_io_signaling; // @[FPU.scala 45:19]
  wire  CompareRecFN_io_lt; // @[FPU.scala 45:19]
  wire  CompareRecFN_io_eq; // @[FPU.scala 45:19]
  wire  CompareRecFN_io_gt; // @[FPU.scala 45:19]
  wire [4:0] CompareRecFN_io_exceptionFlags; // @[FPU.scala 45:19]
  wire [32:0] RecFNToIN_e8_s24_i32_io_in; // @[FPU.scala 46:22]
  wire [2:0] RecFNToIN_e8_s24_i32_io_roundingMode; // @[FPU.scala 46:22]
  wire  RecFNToIN_e8_s24_i32_io_signedOut; // @[FPU.scala 46:22]
  wire [31:0] RecFNToIN_e8_s24_i32_io_out; // @[FPU.scala 46:22]
  wire [2:0] RecFNToIN_e8_s24_i32_io_intExceptionFlags; // @[FPU.scala 46:22]
  wire  INToRecFN_i32_e8_s24_io_signedIn; // @[FPU.scala 47:22]
  wire [31:0] INToRecFN_i32_e8_s24_io_in; // @[FPU.scala 47:22]
  wire [2:0] INToRecFN_i32_e8_s24_io_roundingMode; // @[FPU.scala 47:22]
  wire [32:0] INToRecFN_i32_e8_s24_io_out; // @[FPU.scala 47:22]
  wire [4:0] INToRecFN_i32_e8_s24_io_exceptionFlags; // @[FPU.scala 47:22]
  wire [7:0] raw_in_expIn = io_in_0[30:23]; // @[rawFloatFromFN.scala 45:19]
  wire [22:0] raw_in_fractIn = io_in_0[22:0]; // @[rawFloatFromFN.scala 46:21]
  wire  raw_in_isZeroExpIn = raw_in_expIn == 8'h0; // @[rawFloatFromFN.scala 48:30]
  wire  raw_in_isZeroFractIn = raw_in_fractIn == 23'h0; // @[rawFloatFromFN.scala 49:34]
  wire [4:0] _raw_in_normDist_T_23 = raw_in_fractIn[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_24 = raw_in_fractIn[2] ? 5'h14 : _raw_in_normDist_T_23; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_25 = raw_in_fractIn[3] ? 5'h13 : _raw_in_normDist_T_24; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_26 = raw_in_fractIn[4] ? 5'h12 : _raw_in_normDist_T_25; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_27 = raw_in_fractIn[5] ? 5'h11 : _raw_in_normDist_T_26; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_28 = raw_in_fractIn[6] ? 5'h10 : _raw_in_normDist_T_27; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_29 = raw_in_fractIn[7] ? 5'hf : _raw_in_normDist_T_28; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_30 = raw_in_fractIn[8] ? 5'he : _raw_in_normDist_T_29; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_31 = raw_in_fractIn[9] ? 5'hd : _raw_in_normDist_T_30; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_32 = raw_in_fractIn[10] ? 5'hc : _raw_in_normDist_T_31; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_33 = raw_in_fractIn[11] ? 5'hb : _raw_in_normDist_T_32; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_34 = raw_in_fractIn[12] ? 5'ha : _raw_in_normDist_T_33; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_35 = raw_in_fractIn[13] ? 5'h9 : _raw_in_normDist_T_34; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_36 = raw_in_fractIn[14] ? 5'h8 : _raw_in_normDist_T_35; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_37 = raw_in_fractIn[15] ? 5'h7 : _raw_in_normDist_T_36; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_38 = raw_in_fractIn[16] ? 5'h6 : _raw_in_normDist_T_37; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_39 = raw_in_fractIn[17] ? 5'h5 : _raw_in_normDist_T_38; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_40 = raw_in_fractIn[18] ? 5'h4 : _raw_in_normDist_T_39; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_41 = raw_in_fractIn[19] ? 5'h3 : _raw_in_normDist_T_40; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_42 = raw_in_fractIn[20] ? 5'h2 : _raw_in_normDist_T_41; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_43 = raw_in_fractIn[21] ? 5'h1 : _raw_in_normDist_T_42; // @[Mux.scala 47:70]
  wire [4:0] raw_in_normDist = raw_in_fractIn[22] ? 5'h0 : _raw_in_normDist_T_43; // @[Mux.scala 47:70]
  wire [8:0] _GEN_0 = {{4'd0}, raw_in_normDist}; // @[rawFloatFromFN.scala 55:18]
  wire [8:0] _raw_in_adjustedExp_T = _GEN_0 ^ 9'h1ff; // @[rawFloatFromFN.scala 55:18]
  wire [8:0] _raw_in_adjustedExp_T_1 = raw_in_isZeroExpIn ? _raw_in_adjustedExp_T : {{1'd0}, raw_in_expIn}; // @[rawFloatFromFN.scala 54:10]
  wire [1:0] _raw_in_adjustedExp_T_2 = raw_in_isZeroExpIn ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 58:14]
  wire [7:0] _GEN_1 = {{6'd0}, _raw_in_adjustedExp_T_2}; // @[rawFloatFromFN.scala 58:9]
  wire [7:0] _raw_in_adjustedExp_T_3 = 8'h80 | _GEN_1; // @[rawFloatFromFN.scala 58:9]
  wire [8:0] _GEN_2 = {{1'd0}, _raw_in_adjustedExp_T_3}; // @[rawFloatFromFN.scala 57:9]
  wire [8:0] raw_in_adjustedExp = _raw_in_adjustedExp_T_1 + _GEN_2; // @[rawFloatFromFN.scala 57:9]
  wire  raw_in_isSpecial = raw_in_adjustedExp[8:7] == 2'h3; // @[rawFloatFromFN.scala 61:57]
  wire  raw_in_out_isNaN = raw_in_isSpecial & ~raw_in_isZeroFractIn; // @[rawFloatFromFN.scala 64:28]
  wire [7:0] raw_in_expIn_1 = io_in_1[30:23]; // @[rawFloatFromFN.scala 45:19]
  wire [22:0] raw_in_fractIn_1 = io_in_1[22:0]; // @[rawFloatFromFN.scala 46:21]
  wire  raw_in_isZeroExpIn_1 = raw_in_expIn_1 == 8'h0; // @[rawFloatFromFN.scala 48:30]
  wire  raw_in_isZeroFractIn_1 = raw_in_fractIn_1 == 23'h0; // @[rawFloatFromFN.scala 49:34]
  wire [4:0] _raw_in_normDist_T_67 = raw_in_fractIn_1[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_68 = raw_in_fractIn_1[2] ? 5'h14 : _raw_in_normDist_T_67; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_69 = raw_in_fractIn_1[3] ? 5'h13 : _raw_in_normDist_T_68; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_70 = raw_in_fractIn_1[4] ? 5'h12 : _raw_in_normDist_T_69; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_71 = raw_in_fractIn_1[5] ? 5'h11 : _raw_in_normDist_T_70; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_72 = raw_in_fractIn_1[6] ? 5'h10 : _raw_in_normDist_T_71; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_73 = raw_in_fractIn_1[7] ? 5'hf : _raw_in_normDist_T_72; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_74 = raw_in_fractIn_1[8] ? 5'he : _raw_in_normDist_T_73; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_75 = raw_in_fractIn_1[9] ? 5'hd : _raw_in_normDist_T_74; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_76 = raw_in_fractIn_1[10] ? 5'hc : _raw_in_normDist_T_75; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_77 = raw_in_fractIn_1[11] ? 5'hb : _raw_in_normDist_T_76; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_78 = raw_in_fractIn_1[12] ? 5'ha : _raw_in_normDist_T_77; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_79 = raw_in_fractIn_1[13] ? 5'h9 : _raw_in_normDist_T_78; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_80 = raw_in_fractIn_1[14] ? 5'h8 : _raw_in_normDist_T_79; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_81 = raw_in_fractIn_1[15] ? 5'h7 : _raw_in_normDist_T_80; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_82 = raw_in_fractIn_1[16] ? 5'h6 : _raw_in_normDist_T_81; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_83 = raw_in_fractIn_1[17] ? 5'h5 : _raw_in_normDist_T_82; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_84 = raw_in_fractIn_1[18] ? 5'h4 : _raw_in_normDist_T_83; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_85 = raw_in_fractIn_1[19] ? 5'h3 : _raw_in_normDist_T_84; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_86 = raw_in_fractIn_1[20] ? 5'h2 : _raw_in_normDist_T_85; // @[Mux.scala 47:70]
  wire [4:0] _raw_in_normDist_T_87 = raw_in_fractIn_1[21] ? 5'h1 : _raw_in_normDist_T_86; // @[Mux.scala 47:70]
  wire [4:0] raw_in_normDist_1 = raw_in_fractIn_1[22] ? 5'h0 : _raw_in_normDist_T_87; // @[Mux.scala 47:70]
  wire [8:0] _GEN_3 = {{4'd0}, raw_in_normDist_1}; // @[rawFloatFromFN.scala 55:18]
  wire [8:0] _raw_in_adjustedExp_T_5 = _GEN_3 ^ 9'h1ff; // @[rawFloatFromFN.scala 55:18]
  wire [8:0] _raw_in_adjustedExp_T_6 = raw_in_isZeroExpIn_1 ? _raw_in_adjustedExp_T_5 : {{1'd0}, raw_in_expIn_1}; // @[rawFloatFromFN.scala 54:10]
  wire [1:0] _raw_in_adjustedExp_T_7 = raw_in_isZeroExpIn_1 ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 58:14]
  wire [7:0] _GEN_4 = {{6'd0}, _raw_in_adjustedExp_T_7}; // @[rawFloatFromFN.scala 58:9]
  wire [7:0] _raw_in_adjustedExp_T_8 = 8'h80 | _GEN_4; // @[rawFloatFromFN.scala 58:9]
  wire [8:0] _GEN_5 = {{1'd0}, _raw_in_adjustedExp_T_8}; // @[rawFloatFromFN.scala 57:9]
  wire [8:0] raw_in_adjustedExp_1 = _raw_in_adjustedExp_T_6 + _GEN_5; // @[rawFloatFromFN.scala 57:9]
  wire  raw_in_isSpecial_1 = raw_in_adjustedExp_1[8:7] == 2'h3; // @[rawFloatFromFN.scala 61:57]
  wire  raw_in_out_1_isNaN = raw_in_isSpecial_1 & ~raw_in_isZeroFractIn_1; // @[rawFloatFromFN.scala 64:28]
  wire [32:0] _op_out_WIRE_0 = MulAddRecFN_e8_s24_io_out; // @[FPU.scala 51:{23,23}]
  wire [8:0] op_out_rawIn_exp = _op_out_WIRE_0[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  op_out_rawIn_isZero = op_out_rawIn_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  op_out_rawIn_isSpecial = op_out_rawIn_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  op_out_rawIn__isNaN = op_out_rawIn_isSpecial & op_out_rawIn_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  op_out_rawIn__isInf = op_out_rawIn_isSpecial & ~op_out_rawIn_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  op_out_rawIn__sign = _op_out_WIRE_0[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] op_out_rawIn__sExp = {1'b0,$signed(op_out_rawIn_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _op_out_rawIn_out_sig_T = ~op_out_rawIn_isZero; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] op_out_rawIn__sig = {1'h0,_op_out_rawIn_out_sig_T,_op_out_WIRE_0[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  op_out_isSubnormal = $signed(op_out_rawIn__sExp) < 10'sh82; // @[fNFromRecFN.scala 51:38]
  wire [4:0] op_out_denormShiftDist = 5'h1 - op_out_rawIn__sExp[4:0]; // @[fNFromRecFN.scala 52:35]
  wire [23:0] _op_out_denormFract_T_1 = op_out_rawIn__sig[24:1] >> op_out_denormShiftDist; // @[fNFromRecFN.scala 53:42]
  wire [22:0] op_out_denormFract = _op_out_denormFract_T_1[22:0]; // @[fNFromRecFN.scala 53:60]
  wire [7:0] _op_out_expOut_T_2 = op_out_rawIn__sExp[7:0] - 8'h81; // @[fNFromRecFN.scala 58:45]
  wire [7:0] _op_out_expOut_T_3 = op_out_isSubnormal ? 8'h0 : _op_out_expOut_T_2; // @[fNFromRecFN.scala 56:16]
  wire  _op_out_expOut_T_4 = op_out_rawIn__isNaN | op_out_rawIn__isInf; // @[fNFromRecFN.scala 60:44]
  wire [7:0] _op_out_expOut_T_6 = _op_out_expOut_T_4 ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] op_out_expOut = _op_out_expOut_T_3 | _op_out_expOut_T_6; // @[fNFromRecFN.scala 60:15]
  wire [22:0] _op_out_fractOut_T_1 = op_out_rawIn__isInf ? 23'h0 : op_out_rawIn__sig[22:0]; // @[fNFromRecFN.scala 64:20]
  wire [22:0] op_out_fractOut = op_out_isSubnormal ? op_out_denormFract : _op_out_fractOut_T_1; // @[fNFromRecFN.scala 62:16]
  wire [31:0] op_out_0 = {op_out_rawIn__sign,op_out_expOut,op_out_fractOut}; // @[Cat.scala 33:92]
  wire [32:0] _op_out_WIRE_1 = AddRecFN_io_out; // @[FPU.scala 51:{23,23}]
  wire [8:0] op_out_rawIn_exp_1 = _op_out_WIRE_1[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  op_out_rawIn_isZero_1 = op_out_rawIn_exp_1[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  op_out_rawIn_isSpecial_1 = op_out_rawIn_exp_1[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  op_out_rawIn_1_isNaN = op_out_rawIn_isSpecial_1 & op_out_rawIn_exp_1[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  op_out_rawIn_1_isInf = op_out_rawIn_isSpecial_1 & ~op_out_rawIn_exp_1[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  op_out_rawIn_1_sign = _op_out_WIRE_1[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] op_out_rawIn_1_sExp = {1'b0,$signed(op_out_rawIn_exp_1)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _op_out_rawIn_out_sig_T_4 = ~op_out_rawIn_isZero_1; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] op_out_rawIn_1_sig = {1'h0,_op_out_rawIn_out_sig_T_4,_op_out_WIRE_1[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  op_out_isSubnormal_1 = $signed(op_out_rawIn_1_sExp) < 10'sh82; // @[fNFromRecFN.scala 51:38]
  wire [4:0] op_out_denormShiftDist_1 = 5'h1 - op_out_rawIn_1_sExp[4:0]; // @[fNFromRecFN.scala 52:35]
  wire [23:0] _op_out_denormFract_T_3 = op_out_rawIn_1_sig[24:1] >> op_out_denormShiftDist_1; // @[fNFromRecFN.scala 53:42]
  wire [22:0] op_out_denormFract_1 = _op_out_denormFract_T_3[22:0]; // @[fNFromRecFN.scala 53:60]
  wire [7:0] _op_out_expOut_T_9 = op_out_rawIn_1_sExp[7:0] - 8'h81; // @[fNFromRecFN.scala 58:45]
  wire [7:0] _op_out_expOut_T_10 = op_out_isSubnormal_1 ? 8'h0 : _op_out_expOut_T_9; // @[fNFromRecFN.scala 56:16]
  wire  _op_out_expOut_T_11 = op_out_rawIn_1_isNaN | op_out_rawIn_1_isInf; // @[fNFromRecFN.scala 60:44]
  wire [7:0] _op_out_expOut_T_13 = _op_out_expOut_T_11 ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] op_out_expOut_1 = _op_out_expOut_T_10 | _op_out_expOut_T_13; // @[fNFromRecFN.scala 60:15]
  wire [22:0] _op_out_fractOut_T_3 = op_out_rawIn_1_isInf ? 23'h0 : op_out_rawIn_1_sig[22:0]; // @[fNFromRecFN.scala 64:20]
  wire [22:0] op_out_fractOut_1 = op_out_isSubnormal_1 ? op_out_denormFract_1 : _op_out_fractOut_T_3; // @[fNFromRecFN.scala 62:16]
  wire [31:0] op_out_1 = {op_out_rawIn_1_sign,op_out_expOut_1,op_out_fractOut_1}; // @[Cat.scala 33:92]
  wire [32:0] _op_out_WIRE_2 = MulRecFN_io_out; // @[FPU.scala 51:{23,23}]
  wire [8:0] op_out_rawIn_exp_2 = _op_out_WIRE_2[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  op_out_rawIn_isZero_2 = op_out_rawIn_exp_2[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  op_out_rawIn_isSpecial_2 = op_out_rawIn_exp_2[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  op_out_rawIn_2_isNaN = op_out_rawIn_isSpecial_2 & op_out_rawIn_exp_2[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  op_out_rawIn_2_isInf = op_out_rawIn_isSpecial_2 & ~op_out_rawIn_exp_2[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  op_out_rawIn_2_sign = _op_out_WIRE_2[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] op_out_rawIn_2_sExp = {1'b0,$signed(op_out_rawIn_exp_2)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _op_out_rawIn_out_sig_T_8 = ~op_out_rawIn_isZero_2; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] op_out_rawIn_2_sig = {1'h0,_op_out_rawIn_out_sig_T_8,_op_out_WIRE_2[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  op_out_isSubnormal_2 = $signed(op_out_rawIn_2_sExp) < 10'sh82; // @[fNFromRecFN.scala 51:38]
  wire [4:0] op_out_denormShiftDist_2 = 5'h1 - op_out_rawIn_2_sExp[4:0]; // @[fNFromRecFN.scala 52:35]
  wire [23:0] _op_out_denormFract_T_5 = op_out_rawIn_2_sig[24:1] >> op_out_denormShiftDist_2; // @[fNFromRecFN.scala 53:42]
  wire [22:0] op_out_denormFract_2 = _op_out_denormFract_T_5[22:0]; // @[fNFromRecFN.scala 53:60]
  wire [7:0] _op_out_expOut_T_16 = op_out_rawIn_2_sExp[7:0] - 8'h81; // @[fNFromRecFN.scala 58:45]
  wire [7:0] _op_out_expOut_T_17 = op_out_isSubnormal_2 ? 8'h0 : _op_out_expOut_T_16; // @[fNFromRecFN.scala 56:16]
  wire  _op_out_expOut_T_18 = op_out_rawIn_2_isNaN | op_out_rawIn_2_isInf; // @[fNFromRecFN.scala 60:44]
  wire [7:0] _op_out_expOut_T_20 = _op_out_expOut_T_18 ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] op_out_expOut_2 = _op_out_expOut_T_17 | _op_out_expOut_T_20; // @[fNFromRecFN.scala 60:15]
  wire [22:0] _op_out_fractOut_T_5 = op_out_rawIn_2_isInf ? 23'h0 : op_out_rawIn_2_sig[22:0]; // @[fNFromRecFN.scala 64:20]
  wire [22:0] op_out_fractOut_2 = op_out_isSubnormal_2 ? op_out_denormFract_2 : _op_out_fractOut_T_5; // @[fNFromRecFN.scala 62:16]
  wire [31:0] op_out_2 = {op_out_rawIn_2_sign,op_out_expOut_2,op_out_fractOut_2}; // @[Cat.scala 33:92]
  wire [32:0] _op_out_WIRE_3 = DivSqrtRecFM_small_e8_s24_io_out; // @[FPU.scala 51:{23,23}]
  wire [8:0] op_out_rawIn_exp_3 = _op_out_WIRE_3[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  op_out_rawIn_isZero_3 = op_out_rawIn_exp_3[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  op_out_rawIn_isSpecial_3 = op_out_rawIn_exp_3[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  op_out_rawIn_3_isNaN = op_out_rawIn_isSpecial_3 & op_out_rawIn_exp_3[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  op_out_rawIn_3_isInf = op_out_rawIn_isSpecial_3 & ~op_out_rawIn_exp_3[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  op_out_rawIn_3_sign = _op_out_WIRE_3[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] op_out_rawIn_3_sExp = {1'b0,$signed(op_out_rawIn_exp_3)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _op_out_rawIn_out_sig_T_12 = ~op_out_rawIn_isZero_3; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] op_out_rawIn_3_sig = {1'h0,_op_out_rawIn_out_sig_T_12,_op_out_WIRE_3[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  op_out_isSubnormal_3 = $signed(op_out_rawIn_3_sExp) < 10'sh82; // @[fNFromRecFN.scala 51:38]
  wire [4:0] op_out_denormShiftDist_3 = 5'h1 - op_out_rawIn_3_sExp[4:0]; // @[fNFromRecFN.scala 52:35]
  wire [23:0] _op_out_denormFract_T_7 = op_out_rawIn_3_sig[24:1] >> op_out_denormShiftDist_3; // @[fNFromRecFN.scala 53:42]
  wire [22:0] op_out_denormFract_3 = _op_out_denormFract_T_7[22:0]; // @[fNFromRecFN.scala 53:60]
  wire [7:0] _op_out_expOut_T_23 = op_out_rawIn_3_sExp[7:0] - 8'h81; // @[fNFromRecFN.scala 58:45]
  wire [7:0] _op_out_expOut_T_24 = op_out_isSubnormal_3 ? 8'h0 : _op_out_expOut_T_23; // @[fNFromRecFN.scala 56:16]
  wire  _op_out_expOut_T_25 = op_out_rawIn_3_isNaN | op_out_rawIn_3_isInf; // @[fNFromRecFN.scala 60:44]
  wire [7:0] _op_out_expOut_T_27 = _op_out_expOut_T_25 ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] op_out_expOut_3 = _op_out_expOut_T_24 | _op_out_expOut_T_27; // @[fNFromRecFN.scala 60:15]
  wire [22:0] _op_out_fractOut_T_7 = op_out_rawIn_3_isInf ? 23'h0 : op_out_rawIn_3_sig[22:0]; // @[fNFromRecFN.scala 64:20]
  wire [22:0] op_out_fractOut_3 = op_out_isSubnormal_3 ? op_out_denormFract_3 : _op_out_fractOut_T_7; // @[fNFromRecFN.scala 62:16]
  wire [31:0] op_out_3 = {op_out_rawIn_3_sign,op_out_expOut_3,op_out_fractOut_3}; // @[Cat.scala 33:92]
  wire [32:0] _op_out_WIRE_4 = INToRecFN_i32_e8_s24_io_out; // @[FPU.scala 51:{23,23}]
  wire [8:0] op_out_rawIn_exp_4 = _op_out_WIRE_4[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  op_out_rawIn_isZero_4 = op_out_rawIn_exp_4[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  op_out_rawIn_isSpecial_4 = op_out_rawIn_exp_4[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  op_out_rawIn_4_isNaN = op_out_rawIn_isSpecial_4 & op_out_rawIn_exp_4[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  op_out_rawIn_4_isInf = op_out_rawIn_isSpecial_4 & ~op_out_rawIn_exp_4[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  op_out_rawIn_4_sign = _op_out_WIRE_4[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] op_out_rawIn_4_sExp = {1'b0,$signed(op_out_rawIn_exp_4)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _op_out_rawIn_out_sig_T_16 = ~op_out_rawIn_isZero_4; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] op_out_rawIn_4_sig = {1'h0,_op_out_rawIn_out_sig_T_16,_op_out_WIRE_4[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  op_out_isSubnormal_4 = $signed(op_out_rawIn_4_sExp) < 10'sh82; // @[fNFromRecFN.scala 51:38]
  wire [4:0] op_out_denormShiftDist_4 = 5'h1 - op_out_rawIn_4_sExp[4:0]; // @[fNFromRecFN.scala 52:35]
  wire [23:0] _op_out_denormFract_T_9 = op_out_rawIn_4_sig[24:1] >> op_out_denormShiftDist_4; // @[fNFromRecFN.scala 53:42]
  wire [22:0] op_out_denormFract_4 = _op_out_denormFract_T_9[22:0]; // @[fNFromRecFN.scala 53:60]
  wire [7:0] _op_out_expOut_T_30 = op_out_rawIn_4_sExp[7:0] - 8'h81; // @[fNFromRecFN.scala 58:45]
  wire [7:0] _op_out_expOut_T_31 = op_out_isSubnormal_4 ? 8'h0 : _op_out_expOut_T_30; // @[fNFromRecFN.scala 56:16]
  wire  _op_out_expOut_T_32 = op_out_rawIn_4_isNaN | op_out_rawIn_4_isInf; // @[fNFromRecFN.scala 60:44]
  wire [7:0] _op_out_expOut_T_34 = _op_out_expOut_T_32 ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] op_out_expOut_4 = _op_out_expOut_T_31 | _op_out_expOut_T_34; // @[fNFromRecFN.scala 60:15]
  wire [22:0] _op_out_fractOut_T_9 = op_out_rawIn_4_isInf ? 23'h0 : op_out_rawIn_4_sig[22:0]; // @[fNFromRecFN.scala 64:20]
  wire [22:0] op_out_fractOut_4 = op_out_isSubnormal_4 ? op_out_denormFract_4 : _op_out_fractOut_T_9; // @[fNFromRecFN.scala 62:16]
  wire [31:0] op_out_4 = {op_out_rawIn_4_sign,op_out_expOut_4,op_out_fractOut_4}; // @[Cat.scala 33:92]
  wire  rawIn_sign = io_in_2[31]; // @[rawFloatFromFN.scala 44:18]
  wire [7:0] rawIn_expIn = io_in_2[30:23]; // @[rawFloatFromFN.scala 45:19]
  wire [22:0] rawIn_fractIn = io_in_2[22:0]; // @[rawFloatFromFN.scala 46:21]
  wire  rawIn_isZeroExpIn = rawIn_expIn == 8'h0; // @[rawFloatFromFN.scala 48:30]
  wire  rawIn_isZeroFractIn = rawIn_fractIn == 23'h0; // @[rawFloatFromFN.scala 49:34]
  wire [4:0] _rawIn_normDist_T_23 = rawIn_fractIn[1] ? 5'h15 : 5'h16; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_24 = rawIn_fractIn[2] ? 5'h14 : _rawIn_normDist_T_23; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_25 = rawIn_fractIn[3] ? 5'h13 : _rawIn_normDist_T_24; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_26 = rawIn_fractIn[4] ? 5'h12 : _rawIn_normDist_T_25; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_27 = rawIn_fractIn[5] ? 5'h11 : _rawIn_normDist_T_26; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_28 = rawIn_fractIn[6] ? 5'h10 : _rawIn_normDist_T_27; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_29 = rawIn_fractIn[7] ? 5'hf : _rawIn_normDist_T_28; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_30 = rawIn_fractIn[8] ? 5'he : _rawIn_normDist_T_29; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_31 = rawIn_fractIn[9] ? 5'hd : _rawIn_normDist_T_30; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_32 = rawIn_fractIn[10] ? 5'hc : _rawIn_normDist_T_31; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_33 = rawIn_fractIn[11] ? 5'hb : _rawIn_normDist_T_32; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_34 = rawIn_fractIn[12] ? 5'ha : _rawIn_normDist_T_33; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_35 = rawIn_fractIn[13] ? 5'h9 : _rawIn_normDist_T_34; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_36 = rawIn_fractIn[14] ? 5'h8 : _rawIn_normDist_T_35; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_37 = rawIn_fractIn[15] ? 5'h7 : _rawIn_normDist_T_36; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_38 = rawIn_fractIn[16] ? 5'h6 : _rawIn_normDist_T_37; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_39 = rawIn_fractIn[17] ? 5'h5 : _rawIn_normDist_T_38; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_40 = rawIn_fractIn[18] ? 5'h4 : _rawIn_normDist_T_39; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_41 = rawIn_fractIn[19] ? 5'h3 : _rawIn_normDist_T_40; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_42 = rawIn_fractIn[20] ? 5'h2 : _rawIn_normDist_T_41; // @[Mux.scala 47:70]
  wire [4:0] _rawIn_normDist_T_43 = rawIn_fractIn[21] ? 5'h1 : _rawIn_normDist_T_42; // @[Mux.scala 47:70]
  wire [4:0] rawIn_normDist = rawIn_fractIn[22] ? 5'h0 : _rawIn_normDist_T_43; // @[Mux.scala 47:70]
  wire [53:0] _GEN_58 = {{31'd0}, rawIn_fractIn}; // @[rawFloatFromFN.scala 52:33]
  wire [53:0] _rawIn_subnormFract_T = _GEN_58 << rawIn_normDist; // @[rawFloatFromFN.scala 52:33]
  wire [22:0] rawIn_subnormFract = {_rawIn_subnormFract_T[21:0], 1'h0}; // @[rawFloatFromFN.scala 52:64]
  wire [8:0] _GEN_6 = {{4'd0}, rawIn_normDist}; // @[rawFloatFromFN.scala 55:18]
  wire [8:0] _rawIn_adjustedExp_T = _GEN_6 ^ 9'h1ff; // @[rawFloatFromFN.scala 55:18]
  wire [8:0] _rawIn_adjustedExp_T_1 = rawIn_isZeroExpIn ? _rawIn_adjustedExp_T : {{1'd0}, rawIn_expIn}; // @[rawFloatFromFN.scala 54:10]
  wire [1:0] _rawIn_adjustedExp_T_2 = rawIn_isZeroExpIn ? 2'h2 : 2'h1; // @[rawFloatFromFN.scala 58:14]
  wire [7:0] _GEN_7 = {{6'd0}, _rawIn_adjustedExp_T_2}; // @[rawFloatFromFN.scala 58:9]
  wire [7:0] _rawIn_adjustedExp_T_3 = 8'h80 | _GEN_7; // @[rawFloatFromFN.scala 58:9]
  wire [8:0] _GEN_8 = {{1'd0}, _rawIn_adjustedExp_T_3}; // @[rawFloatFromFN.scala 57:9]
  wire [8:0] rawIn_adjustedExp = _rawIn_adjustedExp_T_1 + _GEN_8; // @[rawFloatFromFN.scala 57:9]
  wire  rawIn_isZero = rawIn_isZeroExpIn & rawIn_isZeroFractIn; // @[rawFloatFromFN.scala 60:30]
  wire  rawIn_isSpecial = rawIn_adjustedExp[8:7] == 2'h3; // @[rawFloatFromFN.scala 61:57]
  wire  rawIn__isNaN = rawIn_isSpecial & ~rawIn_isZeroFractIn; // @[rawFloatFromFN.scala 64:28]
  wire [9:0] rawIn__sExp = {1'b0,$signed(rawIn_adjustedExp)}; // @[rawFloatFromFN.scala 68:42]
  wire  _rawIn_out_sig_T = ~rawIn_isZero; // @[rawFloatFromFN.scala 70:19]
  wire [22:0] _rawIn_out_sig_T_2 = rawIn_isZeroExpIn ? rawIn_subnormFract : rawIn_fractIn; // @[rawFloatFromFN.scala 70:33]
  wire [24:0] rawIn__sig = {1'h0,_rawIn_out_sig_T,_rawIn_out_sig_T_2}; // @[rawFloatFromFN.scala 70:27]
  wire [2:0] _T_1 = rawIn_isZero ? 3'h0 : rawIn__sExp[8:6]; // @[recFNFromFN.scala 48:15]
  wire [2:0] _GEN_9 = {{2'd0}, rawIn__isNaN}; // @[recFNFromFN.scala 48:76]
  wire [2:0] _T_3 = _T_1 | _GEN_9; // @[recFNFromFN.scala 48:76]
  wire [9:0] _T_6 = {rawIn_sign,_T_3,rawIn__sExp[5:0]}; // @[recFNFromFN.scala 49:45]
  wire [1:0] _T_12 = 5'h3 == io_aluOp ? 2'h2 : {{1'd0}, 5'h2 == io_aluOp}; // @[Mux.scala 81:58]
  wire  _T_15 = io_aluOp == 5'h6; // @[FPU.scala 65:25]
  wire  _T_17 = io_aluOp == 5'h13; // @[FPU.scala 68:44]
  wire  _T_18 = io_aluOp == 5'h14; // @[FPU.scala 68:44]
  wire  rawIn_sign_1 = io_in_0[31]; // @[rawFloatFromFN.scala 44:18]
  wire [53:0] _GEN_59 = {{31'd0}, raw_in_fractIn}; // @[rawFloatFromFN.scala 52:33]
  wire [53:0] _rawIn_subnormFract_T_2 = _GEN_59 << raw_in_normDist; // @[rawFloatFromFN.scala 52:33]
  wire [22:0] rawIn_subnormFract_1 = {_rawIn_subnormFract_T_2[21:0], 1'h0}; // @[rawFloatFromFN.scala 52:64]
  wire  rawIn_isZero_1 = raw_in_isZeroExpIn & raw_in_isZeroFractIn; // @[rawFloatFromFN.scala 60:30]
  wire [9:0] rawIn_1_sExp = {1'b0,$signed(raw_in_adjustedExp)}; // @[rawFloatFromFN.scala 68:42]
  wire  _rawIn_out_sig_T_4 = ~rawIn_isZero_1; // @[rawFloatFromFN.scala 70:19]
  wire [22:0] _rawIn_out_sig_T_6 = raw_in_isZeroExpIn ? rawIn_subnormFract_1 : raw_in_fractIn; // @[rawFloatFromFN.scala 70:33]
  wire [24:0] rawIn_1_sig = {1'h0,_rawIn_out_sig_T_4,_rawIn_out_sig_T_6}; // @[rawFloatFromFN.scala 70:27]
  wire [2:0] _T_21 = rawIn_isZero_1 ? 3'h0 : rawIn_1_sExp[8:6]; // @[recFNFromFN.scala 48:15]
  wire [2:0] _GEN_13 = {{2'd0}, raw_in_out_isNaN}; // @[recFNFromFN.scala 48:76]
  wire [2:0] _T_23 = _T_21 | _GEN_13; // @[recFNFromFN.scala 48:76]
  wire [9:0] _T_26 = {rawIn_sign_1,_T_23,rawIn_1_sExp[5:0]}; // @[recFNFromFN.scala 49:45]
  wire [32:0] _T_28 = {rawIn_sign_1,_T_23,rawIn_1_sExp[5:0],rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  wire  _T_29 = io_aluOp == 5'hf; // @[FPU.scala 70:32]
  wire  _T_30 = io_aluOp == 5'h16; // @[FPU.scala 71:31]
  wire  _io_div_sqrt_valid_out_T = DivSqrtRecFM_small_e8_s24_io_outValid_div |
    DivSqrtRecFM_small_e8_s24_io_outValid_sqrt; // @[FPU.scala 73:45]
  wire  rawIn_sign_3 = io_in_1[31]; // @[rawFloatFromFN.scala 44:18]
  wire [53:0] _GEN_61 = {{31'd0}, raw_in_fractIn_1}; // @[rawFloatFromFN.scala 52:33]
  wire [53:0] _rawIn_subnormFract_T_6 = _GEN_61 << raw_in_normDist_1; // @[rawFloatFromFN.scala 52:33]
  wire [22:0] rawIn_subnormFract_3 = {_rawIn_subnormFract_T_6[21:0], 1'h0}; // @[rawFloatFromFN.scala 52:64]
  wire  rawIn_isZero_3 = raw_in_isZeroExpIn_1 & raw_in_isZeroFractIn_1; // @[rawFloatFromFN.scala 60:30]
  wire [9:0] rawIn_3_sExp = {1'b0,$signed(raw_in_adjustedExp_1)}; // @[rawFloatFromFN.scala 68:42]
  wire  _rawIn_out_sig_T_12 = ~rawIn_isZero_3; // @[rawFloatFromFN.scala 70:19]
  wire [22:0] _rawIn_out_sig_T_14 = raw_in_isZeroExpIn_1 ? rawIn_subnormFract_3 : raw_in_fractIn_1; // @[rawFloatFromFN.scala 70:33]
  wire [24:0] rawIn_3_sig = {1'h0,_rawIn_out_sig_T_12,_rawIn_out_sig_T_14}; // @[rawFloatFromFN.scala 70:27]
  wire [2:0] _T_41 = rawIn_isZero_3 ? 3'h0 : rawIn_3_sExp[8:6]; // @[recFNFromFN.scala 48:15]
  wire [2:0] _GEN_21 = {{2'd0}, raw_in_out_1_isNaN}; // @[recFNFromFN.scala 48:76]
  wire [2:0] _T_43 = _T_41 | _GEN_21; // @[recFNFromFN.scala 48:76]
  wire [9:0] _T_46 = {rawIn_sign_3,_T_43,rawIn_3_sExp[5:0]}; // @[recFNFromFN.scala 49:45]
  wire  _io_out_T_6 = io_aluOp == 5'h1 | io_aluOp == 5'h2 | io_aluOp == 5'h3 | io_aluOp == 5'h4; // @[FPU.scala 111:46]
  wire  _io_out_T_9 = io_aluOp == 5'h5 | _T_15; // @[FPU.scala 111:46]
  wire  _io_out_T_10 = io_aluOp == 5'h7; // @[FPU.scala 111:28]
  wire  _io_out_T_11 = io_aluOp == 5'ha; // @[FPU.scala 113:20]
  wire  _io_out_T_14 = ~rawIn_sign_3; // @[FPU.scala 16:5]
  wire  _io_out_T_17 = rawIn_sign_1 ^ rawIn_sign_3; // @[FPU.scala 17:13]
  wire [31:0] _io_out_T_19 = {rawIn_sign_3,io_in_0[30:0]}; // @[FPU.scala 19:33]
  wire [31:0] _io_out_T_21 = {_io_out_T_14,io_in_0[30:0]}; // @[FPU.scala 19:33]
  wire [31:0] _io_out_T_23 = {_io_out_T_17,io_in_0[30:0]}; // @[FPU.scala 19:33]
  wire  _io_out_T_30 = io_aluOp == 5'hb; // @[FPU.scala 113:20]
  wire  _io_out_T_49 = io_aluOp == 5'hc; // @[FPU.scala 113:20]
  wire  _io_out_T_68 = io_aluOp == 5'hd; // @[FPU.scala 115:20]
  wire [31:0] _io_out_T_70 = CompareRecFN_io_eq | CompareRecFN_io_lt ? io_in_0 : io_in_1; // @[FPU.scala 116:10]
  wire  _io_out_T_71 = raw_in_out_isNaN & raw_in_out_1_isNaN; // @[FPU.scala 117:26]
  wire  _io_out_T_74 = io_in_0 == 32'h80000000 | io_in_1 == 32'h80000000; // @[FPU.scala 121:56]
  wire  _io_out_T_77 = io_in_0 == 32'h0 | io_in_1 == 32'h0; // @[FPU.scala 122:56]
  wire  _io_out_T_78 = _io_out_T_74 & _io_out_T_77; // @[FPU.scala 123:20]
  wire [31:0] _io_out_T_79 = _io_out_T_78 ? 32'h80000000 : _io_out_T_70; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_80 = raw_in_out_1_isNaN ? io_in_0 : _io_out_T_79; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_81 = raw_in_out_isNaN ? io_in_1 : _io_out_T_80; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_82 = _io_out_T_71 ? 32'h7fc00000 : _io_out_T_81; // @[Mux.scala 101:16]
  wire  _io_out_T_83 = io_aluOp == 5'he; // @[FPU.scala 115:20]
  wire [31:0] _io_out_T_85 = CompareRecFN_io_eq | CompareRecFN_io_gt ? io_in_0 : io_in_1; // @[FPU.scala 116:10]
  wire [31:0] _io_out_T_94 = _io_out_T_78 ? 32'h0 : _io_out_T_85; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_95 = raw_in_out_1_isNaN ? io_in_0 : _io_out_T_94; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_96 = raw_in_out_isNaN ? io_in_1 : _io_out_T_95; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_97 = _io_out_T_71 ? 32'h7fc00000 : _io_out_T_96; // @[Mux.scala 101:16]
  wire  _io_out_T_99 = io_aluOp == 5'h10; // @[FPU.scala 127:20]
  wire  _io_out_T_100 = io_aluOp == 5'h11; // @[FPU.scala 129:20]
  wire  _io_out_T_101 = io_aluOp == 5'h18; // @[FPU.scala 129:20]
  wire  _io_out_T_102 = ~CompareRecFN_io_gt; // @[FPU.scala 130:31]
  wire  _io_out_T_103 = io_aluOp == 5'h12; // @[FPU.scala 131:20]
  wire  _io_out_T_105 = raw_in_out_isNaN | raw_in_out_1_isNaN ? 1'h0 : CompareRecFN_io_eq; // @[FPU.scala 131:45]
  wire  _io_out_T_108 = raw_in_out_isNaN | raw_in_out_1_isNaN ? 1'h0 : CompareRecFN_io_lt; // @[FPU.scala 131:45]
  wire  _io_out_T_111 = raw_in_out_isNaN | raw_in_out_1_isNaN ? 1'h0 : _io_out_T_102; // @[FPU.scala 131:45]
  wire  _io_out_T_112 = io_aluOp == 5'h15; // @[FPU.scala 132:25]
  wire [8:0] io_out_rawIn_exp = _T_28[31:23]; // @[rawFloatFromRecFN.scala 51:21]
  wire  io_out_rawIn_isZero_1 = io_out_rawIn_exp[8:6] == 3'h0; // @[rawFloatFromRecFN.scala 52:53]
  wire  io_out_rawIn_isSpecial_1 = io_out_rawIn_exp[8:7] == 2'h3; // @[rawFloatFromRecFN.scala 53:53]
  wire  io_out_rawIn_1_isNaN = io_out_rawIn_isSpecial_1 & io_out_rawIn_exp[6]; // @[rawFloatFromRecFN.scala 56:33]
  wire  io_out_rawIn_1_isInf = io_out_rawIn_isSpecial_1 & ~io_out_rawIn_exp[6]; // @[rawFloatFromRecFN.scala 57:33]
  wire  io_out_rawIn_1_sign = _T_28[32]; // @[rawFloatFromRecFN.scala 59:25]
  wire [9:0] io_out_rawIn_1_sExp = {1'b0,$signed(io_out_rawIn_exp)}; // @[rawFloatFromRecFN.scala 60:27]
  wire  _io_out_rawIn_out_sig_T_4 = ~io_out_rawIn_isZero_1; // @[rawFloatFromRecFN.scala 61:35]
  wire [24:0] io_out_rawIn_1_sig = {1'h0,_io_out_rawIn_out_sig_T_4,_T_28[22:0]}; // @[rawFloatFromRecFN.scala 61:44]
  wire  io_out_isSigNaN = io_out_rawIn_1_isNaN & ~io_out_rawIn_1_sig[22]; // @[common.scala 82:46]
  wire  io_out_isFiniteNonzero = ~io_out_rawIn_1_isNaN & ~io_out_rawIn_1_isInf & _io_out_rawIn_out_sig_T_4; // @[classifyRecFN.scala 50:68]
  wire  io_out_isSubnormal = $signed(io_out_rawIn_1_sExp) < 10'sh82; // @[classifyRecFN.scala 51:44]
  wire  _io_out_T_123 = io_out_rawIn_1_isNaN & ~io_out_isSigNaN; // @[classifyRecFN.scala 54:22]
  wire  _io_out_T_125 = ~io_out_rawIn_1_sign; // @[classifyRecFN.scala 56:10]
  wire  _io_out_T_126 = ~io_out_rawIn_1_sign & io_out_rawIn_1_isInf; // @[classifyRecFN.scala 56:23]
  wire  _io_out_T_129 = _io_out_T_125 & io_out_isFiniteNonzero; // @[classifyRecFN.scala 57:23]
  wire  _io_out_T_130 = ~io_out_isSubnormal; // @[classifyRecFN.scala 57:45]
  wire  _io_out_T_131 = _io_out_T_125 & io_out_isFiniteNonzero & ~io_out_isSubnormal; // @[classifyRecFN.scala 57:42]
  wire  _io_out_T_135 = _io_out_T_129 & io_out_isSubnormal; // @[classifyRecFN.scala 58:42]
  wire  _io_out_T_138 = _io_out_T_125 & io_out_rawIn_isZero_1; // @[classifyRecFN.scala 59:23]
  wire  _io_out_T_140 = io_out_rawIn_1_sign & io_out_rawIn_isZero_1; // @[classifyRecFN.scala 60:23]
  wire  _io_out_T_142 = io_out_rawIn_1_sign & io_out_isFiniteNonzero; // @[classifyRecFN.scala 61:23]
  wire  _io_out_T_143 = io_out_rawIn_1_sign & io_out_isFiniteNonzero & io_out_isSubnormal; // @[classifyRecFN.scala 61:42]
  wire  _io_out_T_147 = _io_out_T_142 & _io_out_T_130; // @[classifyRecFN.scala 62:42]
  wire  _io_out_T_149 = io_out_rawIn_1_sign & io_out_rawIn_1_isInf; // @[classifyRecFN.scala 63:23]
  wire [9:0] _io_out_T_150 = {_io_out_T_123,io_out_isSigNaN,_io_out_T_126,_io_out_T_131,_io_out_T_135,_io_out_T_138,
    _io_out_T_140,_io_out_T_143,_io_out_T_147,_io_out_T_149}; // @[classifyRecFN.scala 62:60]
  wire  _io_out_T_152 = io_aluOp == 5'h17; // @[FPU.scala 137:20]
  wire [31:0] _io_out_T_154 = _io_div_sqrt_valid_out_T ? op_out_3 : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_155 = _io_out_T_152 ? op_out_4 : _io_out_T_154; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_156 = _T_30 ? op_out_4 : _io_out_T_155; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_157 = _io_out_T_112 ? {{22'd0}, _io_out_T_150} : _io_out_T_156; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_158 = _T_18 ? {{31'd0}, _io_out_T_111} : _io_out_T_157; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_159 = _T_17 ? {{31'd0}, _io_out_T_108} : _io_out_T_158; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_160 = _io_out_T_103 ? {{31'd0}, _io_out_T_105} : _io_out_T_159; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_161 = _io_out_T_101 ? io_in_0 : _io_out_T_160; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_162 = _io_out_T_100 ? io_in_0 : _io_out_T_161; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_163 = _io_out_T_99 ? RecFNToIN_e8_s24_i32_io_out : _io_out_T_162; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_164 = _T_29 ? RecFNToIN_e8_s24_i32_io_out : _io_out_T_163; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_165 = _io_out_T_83 ? _io_out_T_97 : _io_out_T_164; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_166 = _io_out_T_68 ? _io_out_T_82 : _io_out_T_165; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_167 = _io_out_T_49 ? _io_out_T_23 : _io_out_T_166; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_168 = _io_out_T_30 ? _io_out_T_21 : _io_out_T_167; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_169 = _io_out_T_11 ? _io_out_T_19 : _io_out_T_168; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_170 = _io_out_T_10 ? op_out_2 : _io_out_T_169; // @[Mux.scala 101:16]
  wire [31:0] _io_out_T_171 = _io_out_T_9 ? op_out_1 : _io_out_T_170; // @[Mux.scala 101:16]
  wire  _T_140 = _io_out_T_68 | _io_out_T_83 | _io_out_T_103 | _T_17 | _T_18; // @[FPU.scala 147:46]
  wire  _T_143 = _T_30 | _io_out_T_152; // @[FPU.scala 147:46]
  wire  _T_147 = RecFNToIN_e8_s24_i32_io_intExceptionFlags[2] | RecFNToIN_e8_s24_i32_io_intExceptionFlags[1]; // @[FPU.scala 150:36]
  wire [4:0] _T_152 = {_T_147,1'h0,1'h0,1'h0,RecFNToIN_e8_s24_i32_io_intExceptionFlags[0]}; // @[FPU.scala 150:88]
  wire [4:0] _T_163 = _io_div_sqrt_valid_out_T ? DivSqrtRecFM_small_e8_s24_io_exceptionFlags : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _T_164 = _io_out_T_99 ? _T_152 : _T_163; // @[Mux.scala 101:16]
  wire [4:0] _T_165 = _T_29 ? _T_152 : _T_164; // @[Mux.scala 101:16]
  wire [4:0] _T_166 = _T_143 ? INToRecFN_i32_e8_s24_io_exceptionFlags : _T_165; // @[Mux.scala 101:16]
  wire [4:0] _T_167 = _T_140 ? CompareRecFN_io_exceptionFlags : _T_166; // @[Mux.scala 101:16]
  wire [4:0] _T_168 = _io_out_T_10 ? MulRecFN_io_exceptionFlags : _T_167; // @[Mux.scala 101:16]
  wire [4:0] _T_169 = _io_out_T_9 ? AddRecFN_io_exceptionFlags : _T_168; // @[Mux.scala 101:16]
  wire [4:0] _T_170 = _io_out_T_6 ? MulAddRecFN_e8_s24_io_exceptionFlags : _T_169; // @[Mux.scala 101:16]
  MulAddRecFN_e8_s24 MulAddRecFN_e8_s24 ( // @[FPU.scala 41:20]
    .io_op(MulAddRecFN_e8_s24_io_op),
    .io_a(MulAddRecFN_e8_s24_io_a),
    .io_b(MulAddRecFN_e8_s24_io_b),
    .io_c(MulAddRecFN_e8_s24_io_c),
    .io_roundingMode(MulAddRecFN_e8_s24_io_roundingMode),
    .io_out(MulAddRecFN_e8_s24_io_out),
    .io_exceptionFlags(MulAddRecFN_e8_s24_io_exceptionFlags)
  );
  AddRecFN AddRecFN ( // @[FPU.scala 42:19]
    .io_subOp(AddRecFN_io_subOp),
    .io_a(AddRecFN_io_a),
    .io_b(AddRecFN_io_b),
    .io_roundingMode(AddRecFN_io_roundingMode),
    .io_out(AddRecFN_io_out),
    .io_exceptionFlags(AddRecFN_io_exceptionFlags)
  );
  MulRecFN MulRecFN ( // @[FPU.scala 43:19]
    .io_a(MulRecFN_io_a),
    .io_b(MulRecFN_io_b),
    .io_roundingMode(MulRecFN_io_roundingMode),
    .io_out(MulRecFN_io_out),
    .io_exceptionFlags(MulRecFN_io_exceptionFlags)
  );
  DivSqrtRecFM_small_e8_s24 DivSqrtRecFM_small_e8_s24 ( // @[FPU.scala 44:19]
    .clock(DivSqrtRecFM_small_e8_s24_clock),
    .reset(DivSqrtRecFM_small_e8_s24_reset),
    .io_inReady(DivSqrtRecFM_small_e8_s24_io_inReady),
    .io_inValid(DivSqrtRecFM_small_e8_s24_io_inValid),
    .io_sqrtOp(DivSqrtRecFM_small_e8_s24_io_sqrtOp),
    .io_a(DivSqrtRecFM_small_e8_s24_io_a),
    .io_b(DivSqrtRecFM_small_e8_s24_io_b),
    .io_roundingMode(DivSqrtRecFM_small_e8_s24_io_roundingMode),
    .io_outValid_div(DivSqrtRecFM_small_e8_s24_io_outValid_div),
    .io_outValid_sqrt(DivSqrtRecFM_small_e8_s24_io_outValid_sqrt),
    .io_out(DivSqrtRecFM_small_e8_s24_io_out),
    .io_exceptionFlags(DivSqrtRecFM_small_e8_s24_io_exceptionFlags)
  );
  CompareRecFN CompareRecFN ( // @[FPU.scala 45:19]
    .io_a(CompareRecFN_io_a),
    .io_b(CompareRecFN_io_b),
    .io_signaling(CompareRecFN_io_signaling),
    .io_lt(CompareRecFN_io_lt),
    .io_eq(CompareRecFN_io_eq),
    .io_gt(CompareRecFN_io_gt),
    .io_exceptionFlags(CompareRecFN_io_exceptionFlags)
  );
  RecFNToIN_e8_s24_i32 RecFNToIN_e8_s24_i32 ( // @[FPU.scala 46:22]
    .io_in(RecFNToIN_e8_s24_i32_io_in),
    .io_roundingMode(RecFNToIN_e8_s24_i32_io_roundingMode),
    .io_signedOut(RecFNToIN_e8_s24_i32_io_signedOut),
    .io_out(RecFNToIN_e8_s24_i32_io_out),
    .io_intExceptionFlags(RecFNToIN_e8_s24_i32_io_intExceptionFlags)
  );
  INToRecFN_i32_e8_s24 INToRecFN_i32_e8_s24 ( // @[FPU.scala 47:22]
    .io_signedIn(INToRecFN_i32_e8_s24_io_signedIn),
    .io_in(INToRecFN_i32_e8_s24_io_in),
    .io_roundingMode(INToRecFN_i32_e8_s24_io_roundingMode),
    .io_out(INToRecFN_i32_e8_s24_io_out),
    .io_exceptionFlags(INToRecFN_i32_e8_s24_io_exceptionFlags)
  );
  assign io_out = _io_out_T_6 ? op_out_0 : _io_out_T_171; // @[Mux.scala 101:16]
  assign io_exceptions_0 = _T_170[0]; // @[FPU.scala 152:79]
  assign io_exceptions_1 = _T_170[1]; // @[FPU.scala 152:79]
  assign io_exceptions_2 = _T_170[2]; // @[FPU.scala 152:79]
  assign io_exceptions_3 = _T_170[3]; // @[FPU.scala 152:79]
  assign io_exceptions_4 = _T_170[4]; // @[FPU.scala 152:79]
  assign io_div_sqrt_ready = DivSqrtRecFM_small_e8_s24_io_inReady; // @[FPU.scala 105:21]
  assign io_div_sqrt_valid_out = DivSqrtRecFM_small_e8_s24_io_outValid_div | DivSqrtRecFM_small_e8_s24_io_outValid_sqrt; // @[FPU.scala 73:45]
  assign MulAddRecFN_e8_s24_io_op = 5'h4 == io_aluOp ? 2'h3 : _T_12; // @[Mux.scala 81:58]
  assign MulAddRecFN_e8_s24_io_a = {_T_26,rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign MulAddRecFN_e8_s24_io_b = {_T_46,rawIn_3_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign MulAddRecFN_e8_s24_io_c = {_T_6,rawIn__sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign MulAddRecFN_e8_s24_io_roundingMode = io_rm; // @[FPU.scala 102:26]
  assign AddRecFN_io_subOp = io_aluOp == 5'h6; // @[FPU.scala 65:25]
  assign AddRecFN_io_a = {_T_26,rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign AddRecFN_io_b = {_T_46,rawIn_3_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign AddRecFN_io_roundingMode = io_rm; // @[FPU.scala 102:26]
  assign MulRecFN_io_a = {_T_26,rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign MulRecFN_io_b = {_T_46,rawIn_3_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign MulRecFN_io_roundingMode = io_rm; // @[FPU.scala 102:26]
  assign DivSqrtRecFM_small_e8_s24_clock = clock;
  assign DivSqrtRecFM_small_e8_s24_reset = reset;
  assign DivSqrtRecFM_small_e8_s24_io_inValid = io_div_sqrt_valid; // @[FPU.scala 66:15]
  assign DivSqrtRecFM_small_e8_s24_io_sqrtOp = io_aluOp == 5'h9; // @[FPU.scala 67:26]
  assign DivSqrtRecFM_small_e8_s24_io_a = {_T_26,rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign DivSqrtRecFM_small_e8_s24_io_b = {_T_46,rawIn_3_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign DivSqrtRecFM_small_e8_s24_io_roundingMode = io_rm; // @[FPU.scala 102:26]
  assign CompareRecFN_io_a = {_T_26,rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign CompareRecFN_io_b = {_T_46,rawIn_3_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign CompareRecFN_io_signaling = io_aluOp == 5'h13 | io_aluOp == 5'h14; // @[FPU.scala 68:63]
  assign RecFNToIN_e8_s24_i32_io_in = {_T_26,rawIn_1_sig[22:0]}; // @[recFNFromFN.scala 50:41]
  assign RecFNToIN_e8_s24_i32_io_roundingMode = io_rm; // @[FPU.scala 102:26]
  assign RecFNToIN_e8_s24_i32_io_signedOut = io_aluOp == 5'hf; // @[FPU.scala 70:32]
  assign INToRecFN_i32_e8_s24_io_signedIn = io_aluOp == 5'h16; // @[FPU.scala 71:31]
  assign INToRecFN_i32_e8_s24_io_in = io_in_0; // @[FPU.scala 72:13]
  assign INToRecFN_i32_e8_s24_io_roundingMode = io_rm; // @[FPU.scala 102:26]
endmodule
module Execute(
  input         clock,
  input         reset,
  input  [31:0] io_immediate,
  input  [31:0] io_readData1,
  input  [31:0] io_readData2,
  input  [31:0] io_pcAddress,
  input  [6:0]  io_func7,
  input  [2:0]  io_func3,
  input  [31:0] io_mem_result,
  input  [31:0] io_wb_result,
  input         io_ex_mem_regWrite_0,
  input         io_ex_mem_regWrite_1,
  input         io_mem_wb_regWrite_0,
  input         io_mem_wb_regWrite_1,
  input  [31:0] io_id_ex_ins,
  input  [31:0] io_ex_mem_ins,
  input  [31:0] io_mem_wb_ins,
  input         io_ctl_aluSrc,
  input  [1:0]  io_ctl_aluOp,
  input  [1:0]  io_ctl_aluSrc1,
  output [31:0] io_writeData,
  output [31:0] io_ALUresult,
  output        io_stall,
  output [31:0] io_rs1_rdata,
  input         io_f_read_0,
  input         io_f_read_1,
  input         io_f_read_2,
  input  [31:0] io_readData3,
  input  [31:0] io_fcsr_o_data,
  input         io_is_f_i,
  output        io_is_f_o,
  output        io_exceptions_0,
  output        io_exceptions_1,
  output        io_exceptions_2,
  output        io_exceptions_3,
  output        io_exceptions_4
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] alu_io_input1; // @[Execute.scala 47:19]
  wire [31:0] alu_io_input2; // @[Execute.scala 47:19]
  wire [3:0] alu_io_aluCtl; // @[Execute.scala 47:19]
  wire [31:0] alu_io_result; // @[Execute.scala 47:19]
  wire [1:0] aluCtl_io_aluOp; // @[Execute.scala 48:22]
  wire  aluCtl_io_f7; // @[Execute.scala 48:22]
  wire [2:0] aluCtl_io_f3; // @[Execute.scala 48:22]
  wire  aluCtl_io_aluSrc; // @[Execute.scala 48:22]
  wire [3:0] aluCtl_io_out; // @[Execute.scala 48:22]
  wire [4:0] ForwardingUnit_io_ex_reg_rd; // @[Execute.scala 49:18]
  wire [4:0] ForwardingUnit_io_mem_reg_rd; // @[Execute.scala 49:18]
  wire [4:0] ForwardingUnit_io_reg_rs1; // @[Execute.scala 49:18]
  wire [4:0] ForwardingUnit_io_reg_rs2; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_ex_regWrite_0; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_ex_regWrite_1; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_mem_regWrite_0; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_mem_regWrite_1; // @[Execute.scala 49:18]
  wire [1:0] ForwardingUnit_io_forwardA; // @[Execute.scala 49:18]
  wire [1:0] ForwardingUnit_io_forwardB; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_f_read_0; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_f_read_1; // @[Execute.scala 49:18]
  wire  ForwardingUnit_io_f_read_2; // @[Execute.scala 49:18]
  wire [4:0] ForwardingUnit_io_reg_rs3; // @[Execute.scala 49:18]
  wire [1:0] ForwardingUnit_io_forwardC; // @[Execute.scala 49:18]
  wire  mdu_clock; // @[Execute.scala 107:32]
  wire  mdu_reset; // @[Execute.scala 107:32]
  wire [31:0] mdu_io_src_a; // @[Execute.scala 107:32]
  wire [31:0] mdu_io_src_b; // @[Execute.scala 107:32]
  wire [4:0] mdu_io_op; // @[Execute.scala 107:32]
  wire  mdu_io_valid; // @[Execute.scala 107:32]
  wire  mdu_io_ready; // @[Execute.scala 107:32]
  wire  mdu_io_output_valid; // @[Execute.scala 107:32]
  wire [31:0] mdu_io_output_bits; // @[Execute.scala 107:32]
  wire  FPU_clock; // @[Execute.scala 164:41]
  wire  FPU_reset; // @[Execute.scala 164:41]
  wire [31:0] FPU_io_in_0; // @[Execute.scala 164:41]
  wire [31:0] FPU_io_in_1; // @[Execute.scala 164:41]
  wire [31:0] FPU_io_in_2; // @[Execute.scala 164:41]
  wire [4:0] FPU_io_aluOp; // @[Execute.scala 164:41]
  wire [2:0] FPU_io_rm; // @[Execute.scala 164:41]
  wire  FPU_io_div_sqrt_valid; // @[Execute.scala 164:41]
  wire [31:0] FPU_io_out; // @[Execute.scala 164:41]
  wire  FPU_io_exceptions_0; // @[Execute.scala 164:41]
  wire  FPU_io_exceptions_1; // @[Execute.scala 164:41]
  wire  FPU_io_exceptions_2; // @[Execute.scala 164:41]
  wire  FPU_io_exceptions_3; // @[Execute.scala 164:41]
  wire  FPU_io_exceptions_4; // @[Execute.scala 164:41]
  wire  FPU_io_div_sqrt_ready; // @[Execute.scala 164:41]
  wire  FPU_io_div_sqrt_valid_out; // @[Execute.scala 164:41]
  wire  _inputMux1_T = ForwardingUnit_io_forwardA == 2'h0; // @[Execute.scala 67:20]
  wire  _inputMux1_T_1 = ForwardingUnit_io_forwardA == 2'h1; // @[Execute.scala 68:20]
  wire  _inputMux1_T_2 = ForwardingUnit_io_forwardA == 2'h2; // @[Execute.scala 69:20]
  wire [31:0] _inputMux1_T_3 = _inputMux1_T_2 ? io_wb_result : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _inputMux1_T_4 = _inputMux1_T_1 ? io_mem_result : _inputMux1_T_3; // @[Mux.scala 101:16]
  wire [31:0] inputMux1 = _inputMux1_T ? io_readData1 : _inputMux1_T_4; // @[Mux.scala 101:16]
  wire  _inputMux2_T = ForwardingUnit_io_forwardB == 2'h0; // @[Execute.scala 75:20]
  wire  _inputMux2_T_1 = ForwardingUnit_io_forwardB == 2'h1; // @[Execute.scala 76:20]
  wire  _inputMux2_T_2 = ForwardingUnit_io_forwardB == 2'h2; // @[Execute.scala 77:20]
  wire [31:0] _inputMux2_T_3 = _inputMux2_T_2 ? io_wb_result : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _inputMux2_T_4 = _inputMux2_T_1 ? io_mem_result : _inputMux2_T_3; // @[Mux.scala 101:16]
  wire [31:0] inputMux2 = _inputMux2_T ? io_readData2 : _inputMux2_T_4; // @[Mux.scala 101:16]
  wire [31:0] _inputMux3_T_1 = 2'h0 == ForwardingUnit_io_forwardC ? io_readData3 : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _inputMux3_T_3 = 2'h1 == ForwardingUnit_io_forwardC ? io_mem_result : _inputMux3_T_1; // @[Mux.scala 81:58]
  wire  _aluIn1_T = io_ctl_aluSrc1 == 2'h1; // @[Execute.scala 89:23]
  wire  _aluIn1_T_1 = io_ctl_aluSrc1 == 2'h2; // @[Execute.scala 90:23]
  wire [31:0] _aluIn1_T_2 = _aluIn1_T_1 ? 32'h0 : inputMux1; // @[Mux.scala 101:16]
  wire [31:0] aluIn1 = _aluIn1_T ? io_pcAddress : _aluIn1_T_2; // @[Mux.scala 101:16]
  wire [31:0] aluIn2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 93:19]
  reg [31:0] src_a_reg; // @[Execute.scala 108:38]
  reg [31:0] src_b_reg; // @[Execute.scala 109:38]
  reg [2:0] op_reg; // @[Execute.scala 110:38]
  reg  div_en; // @[Execute.scala 111:38]
  reg [5:0] f7_reg; // @[Execute.scala 112:38]
  reg [5:0] counter; // @[Execute.scala 113:38]
  wire  _T_5 = io_func7 == 7'h1; // @[Execute.scala 121:19]
  wire  _T_13 = io_func7 == 7'h1 & (io_func3 == 3'h0 | io_func3 == 3'h1 | io_func3 == 3'h2 | io_func3 == 3'h3); // @[Execute.scala 121:27]
  wire  _T_22 = io_func3 == 3'h7; // @[Execute.scala 127:115]
  wire  _T_24 = _T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7); // @[Execute.scala 127:42]
  wire  _GEN_1 = _T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | _T_13; // @[Execute.scala 127:124 128:24]
  wire  _GEN_2 = _T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) | div_en; // @[Execute.scala 127:124 129:18 111:38]
  wire [6:0] _GEN_6 = _T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7) ?
    io_func7 : {{1'd0}, f7_reg}; // @[Execute.scala 127:124 133:18 112:38]
  wire  _T_25 = counter < 6'h20; // @[Execute.scala 139:25]
  wire [5:0] _counter_T_1 = counter + 6'h1; // @[Execute.scala 145:36]
  wire  _GEN_11 = counter < 6'h20 & _GEN_1; // @[Execute.scala 139:32 147:26]
  wire  _GEN_12 = counter < 6'h20 & _GEN_2; // @[Execute.scala 139:32 148:26]
  wire [2:0] _GEN_15 = div_en ? op_reg : io_func3; // @[Execute.scala 138:21 117:22]
  wire [31:0] _f_mono_cycle_inst_T = io_id_ex_ins & 32'h7f; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_1 = 32'h43 == _f_mono_cycle_inst_T; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_3 = 32'h47 == _f_mono_cycle_inst_T; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_5 = 32'h4b == _f_mono_cycle_inst_T; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_7 = 32'h4f == _f_mono_cycle_inst_T; // @[Execute.scala 189:12]
  wire [31:0] _f_mono_cycle_inst_T_8 = io_id_ex_ins & 32'hfe00007f; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_9 = 32'h53 == _f_mono_cycle_inst_T_8; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_11 = 32'h8000053 == _f_mono_cycle_inst_T_8; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_13 = 32'h10000053 == _f_mono_cycle_inst_T_8; // @[Execute.scala 189:12]
  wire [31:0] _f_mono_cycle_inst_T_14 = io_id_ex_ins & 32'hfe00707f; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_15 = 32'h20000053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_17 = 32'h20001053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_19 = 32'h20002053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_21 = 32'h28000053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_23 = 32'h28001053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire [31:0] _f_mono_cycle_inst_T_24 = io_id_ex_ins & 32'hfff0007f; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_25 = 32'hc0000053 == _f_mono_cycle_inst_T_24; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_27 = 32'hc0100053 == _f_mono_cycle_inst_T_24; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_29 = 32'he0000053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_31 = 32'ha0002053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_33 = 32'ha0001053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_35 = 32'ha0000053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_37 = 32'he0001053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_39 = 32'hd0000053 == _f_mono_cycle_inst_T_24; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_41 = 32'hd0100053 == _f_mono_cycle_inst_T_24; // @[Execute.scala 189:12]
  wire  _f_mono_cycle_inst_T_43 = 32'hf0000053 == _f_mono_cycle_inst_T_14; // @[Execute.scala 189:12]
  wire  f_mono_cycle_inst = _f_mono_cycle_inst_T_1 | _f_mono_cycle_inst_T_3 | _f_mono_cycle_inst_T_5 |
    _f_mono_cycle_inst_T_7 | _f_mono_cycle_inst_T_9 | _f_mono_cycle_inst_T_11 | _f_mono_cycle_inst_T_13 |
    _f_mono_cycle_inst_T_15 | _f_mono_cycle_inst_T_17 | _f_mono_cycle_inst_T_19 | _f_mono_cycle_inst_T_21 |
    _f_mono_cycle_inst_T_23 | _f_mono_cycle_inst_T_25 | _f_mono_cycle_inst_T_27 | _f_mono_cycle_inst_T_29 |
    _f_mono_cycle_inst_T_31 | _f_mono_cycle_inst_T_33 | _f_mono_cycle_inst_T_35 | _f_mono_cycle_inst_T_37 |
    _f_mono_cycle_inst_T_39 | _f_mono_cycle_inst_T_41 | _f_mono_cycle_inst_T_43; // @[Execute.scala 191:17]
  wire  _f_multi_cycle_inst_T_1 = 32'h18000053 == _f_mono_cycle_inst_T_8; // @[Execute.scala 194:12]
  wire  _f_multi_cycle_inst_T_3 = 32'h58000053 == _f_mono_cycle_inst_T_8; // @[Execute.scala 194:12]
  wire  f_multi_cycle_inst = _f_multi_cycle_inst_T_1 | _f_multi_cycle_inst_T_3; // @[Execute.scala 195:14]
  wire  f_stall = io_func7 == 7'hc | io_func7 == 7'h2c | ~FPU_io_div_sqrt_ready; // @[Execute.scala 196:88]
  wire [4:0] _T_77 = _f_mono_cycle_inst_T_43 ? 5'h18 : 5'h0; // @[Mux.scala 101:16]
  wire [4:0] _T_78 = _f_mono_cycle_inst_T_41 ? 5'h17 : _T_77; // @[Mux.scala 101:16]
  wire [4:0] _T_79 = _f_mono_cycle_inst_T_39 ? 5'h16 : _T_78; // @[Mux.scala 101:16]
  wire [4:0] _T_80 = _f_mono_cycle_inst_T_37 ? 5'h15 : _T_79; // @[Mux.scala 101:16]
  wire [4:0] _T_81 = _f_mono_cycle_inst_T_35 ? 5'h14 : _T_80; // @[Mux.scala 101:16]
  wire [4:0] _T_82 = _f_mono_cycle_inst_T_33 ? 5'h13 : _T_81; // @[Mux.scala 101:16]
  wire [4:0] _T_83 = _f_mono_cycle_inst_T_31 ? 5'h12 : _T_82; // @[Mux.scala 101:16]
  wire [4:0] _T_84 = _f_mono_cycle_inst_T_29 ? 5'h11 : _T_83; // @[Mux.scala 101:16]
  wire [4:0] _T_85 = _f_mono_cycle_inst_T_27 ? 5'h10 : _T_84; // @[Mux.scala 101:16]
  wire [4:0] _T_86 = _f_mono_cycle_inst_T_25 ? 5'hf : _T_85; // @[Mux.scala 101:16]
  wire [4:0] _T_87 = _f_mono_cycle_inst_T_23 ? 5'he : _T_86; // @[Mux.scala 101:16]
  wire [4:0] _T_88 = _f_mono_cycle_inst_T_21 ? 5'hd : _T_87; // @[Mux.scala 101:16]
  wire [4:0] _T_89 = _f_mono_cycle_inst_T_19 ? 5'hc : _T_88; // @[Mux.scala 101:16]
  wire [4:0] _T_90 = _f_mono_cycle_inst_T_17 ? 5'hb : _T_89; // @[Mux.scala 101:16]
  wire [4:0] _T_91 = _f_mono_cycle_inst_T_15 ? 5'ha : _T_90; // @[Mux.scala 101:16]
  wire [4:0] _T_92 = _f_multi_cycle_inst_T_3 ? 5'h9 : _T_91; // @[Mux.scala 101:16]
  wire [4:0] _T_93 = _f_multi_cycle_inst_T_1 ? 5'h8 : _T_92; // @[Mux.scala 101:16]
  wire [4:0] _T_94 = _f_mono_cycle_inst_T_13 ? 5'h7 : _T_93; // @[Mux.scala 101:16]
  wire [4:0] _T_95 = _f_mono_cycle_inst_T_11 ? 5'h6 : _T_94; // @[Mux.scala 101:16]
  wire [4:0] _T_96 = _f_mono_cycle_inst_T_9 ? 5'h5 : _T_95; // @[Mux.scala 101:16]
  wire [4:0] _T_97 = _f_mono_cycle_inst_T_7 ? 5'h4 : _T_96; // @[Mux.scala 101:16]
  wire [4:0] _T_98 = _f_mono_cycle_inst_T_5 ? 5'h3 : _T_97; // @[Mux.scala 101:16]
  wire [4:0] _T_99 = _f_mono_cycle_inst_T_3 ? 5'h2 : _T_98; // @[Mux.scala 101:16]
  reg  io_is_f_o_REG; // @[Execute.scala 236:45]
  wire  _io_ALUresult_T_2 = div_en & f7_reg == 6'h1 & mdu_io_ready; // @[Execute.scala 241:41]
  wire [31:0] _io_ALUresult_T_3 = mdu_io_output_valid ? mdu_io_output_bits : 32'h0; // @[Execute.scala 241:68]
  wire  _io_ALUresult_T_5 = _T_5 & mdu_io_ready; // @[Execute.scala 242:25]
  wire [31:0] _io_ALUresult_T_7 = FPU_io_div_sqrt_valid_out ? FPU_io_out : alu_io_result; // @[Mux.scala 101:16]
  wire [31:0] _io_ALUresult_T_8 = f_mono_cycle_inst ? FPU_io_out : _io_ALUresult_T_7; // @[Mux.scala 101:16]
  wire [31:0] _io_ALUresult_T_9 = _io_ALUresult_T_5 ? _io_ALUresult_T_3 : _io_ALUresult_T_8; // @[Mux.scala 101:16]
  wire  _io_stall_T_13 = _T_24 | div_en & _T_25; // @[Execute.scala 254:7]
  wire [6:0] _GEN_19 = reset ? 7'h0 : _GEN_6; // @[Execute.scala 112:{38,38}]
  ALU alu ( // @[Execute.scala 47:19]
    .io_input1(alu_io_input1),
    .io_input2(alu_io_input2),
    .io_aluCtl(alu_io_aluCtl),
    .io_result(alu_io_result)
  );
  AluControl aluCtl ( // @[Execute.scala 48:22]
    .io_aluOp(aluCtl_io_aluOp),
    .io_f7(aluCtl_io_f7),
    .io_f3(aluCtl_io_f3),
    .io_aluSrc(aluCtl_io_aluSrc),
    .io_out(aluCtl_io_out)
  );
  ForwardingUnit ForwardingUnit ( // @[Execute.scala 49:18]
    .io_ex_reg_rd(ForwardingUnit_io_ex_reg_rd),
    .io_mem_reg_rd(ForwardingUnit_io_mem_reg_rd),
    .io_reg_rs1(ForwardingUnit_io_reg_rs1),
    .io_reg_rs2(ForwardingUnit_io_reg_rs2),
    .io_ex_regWrite_0(ForwardingUnit_io_ex_regWrite_0),
    .io_ex_regWrite_1(ForwardingUnit_io_ex_regWrite_1),
    .io_mem_regWrite_0(ForwardingUnit_io_mem_regWrite_0),
    .io_mem_regWrite_1(ForwardingUnit_io_mem_regWrite_1),
    .io_forwardA(ForwardingUnit_io_forwardA),
    .io_forwardB(ForwardingUnit_io_forwardB),
    .io_f_read_0(ForwardingUnit_io_f_read_0),
    .io_f_read_1(ForwardingUnit_io_f_read_1),
    .io_f_read_2(ForwardingUnit_io_f_read_2),
    .io_reg_rs3(ForwardingUnit_io_reg_rs3),
    .io_forwardC(ForwardingUnit_io_forwardC)
  );
  MDU mdu ( // @[Execute.scala 107:32]
    .clock(mdu_clock),
    .reset(mdu_reset),
    .io_src_a(mdu_io_src_a),
    .io_src_b(mdu_io_src_b),
    .io_op(mdu_io_op),
    .io_valid(mdu_io_valid),
    .io_ready(mdu_io_ready),
    .io_output_valid(mdu_io_output_valid),
    .io_output_bits(mdu_io_output_bits)
  );
  FPU FPU ( // @[Execute.scala 164:41]
    .clock(FPU_clock),
    .reset(FPU_reset),
    .io_in_0(FPU_io_in_0),
    .io_in_1(FPU_io_in_1),
    .io_in_2(FPU_io_in_2),
    .io_aluOp(FPU_io_aluOp),
    .io_rm(FPU_io_rm),
    .io_div_sqrt_valid(FPU_io_div_sqrt_valid),
    .io_out(FPU_io_out),
    .io_exceptions_0(FPU_io_exceptions_0),
    .io_exceptions_1(FPU_io_exceptions_1),
    .io_exceptions_2(FPU_io_exceptions_2),
    .io_exceptions_3(FPU_io_exceptions_3),
    .io_exceptions_4(FPU_io_exceptions_4),
    .io_div_sqrt_ready(FPU_io_div_sqrt_ready),
    .io_div_sqrt_valid_out(FPU_io_div_sqrt_valid_out)
  );
  assign io_writeData = _inputMux2_T ? io_readData2 : _inputMux2_T_4; // @[Mux.scala 101:16]
  assign io_ALUresult = _io_ALUresult_T_2 ? _io_ALUresult_T_3 : _io_ALUresult_T_9; // @[Mux.scala 101:16]
  assign io_stall = _io_stall_T_13 | f_stall; // @[Execute.scala 256:5]
  assign io_rs1_rdata = _inputMux1_T ? io_readData1 : _inputMux1_T_4; // @[Mux.scala 101:16]
  assign io_is_f_o = io_is_f_i | io_is_f_o_REG; // @[Execute.scala 236:36]
  assign io_exceptions_0 = FPU_io_exceptions_0; // @[Execute.scala 235:23]
  assign io_exceptions_1 = FPU_io_exceptions_1; // @[Execute.scala 235:23]
  assign io_exceptions_2 = FPU_io_exceptions_2; // @[Execute.scala 235:23]
  assign io_exceptions_3 = FPU_io_exceptions_3; // @[Execute.scala 235:23]
  assign io_exceptions_4 = FPU_io_exceptions_4; // @[Execute.scala 235:23]
  assign alu_io_input1 = _aluIn1_T ? io_pcAddress : _aluIn1_T_2; // @[Mux.scala 101:16]
  assign alu_io_input2 = io_ctl_aluSrc ? inputMux2 : io_immediate; // @[Execute.scala 93:19]
  assign alu_io_aluCtl = aluCtl_io_out; // @[Execute.scala 102:17]
  assign aluCtl_io_aluOp = io_ctl_aluOp; // @[Execute.scala 97:19]
  assign aluCtl_io_f7 = io_func7[5]; // @[Execute.scala 96:27]
  assign aluCtl_io_f3 = io_func3; // @[Execute.scala 95:16]
  assign aluCtl_io_aluSrc = io_ctl_aluSrc; // @[Execute.scala 98:20]
  assign ForwardingUnit_io_ex_reg_rd = io_ex_mem_ins[11:7]; // @[Execute.scala 55:32]
  assign ForwardingUnit_io_mem_reg_rd = io_mem_wb_ins[11:7]; // @[Execute.scala 56:33]
  assign ForwardingUnit_io_reg_rs1 = io_id_ex_ins[19:15]; // @[Execute.scala 57:29]
  assign ForwardingUnit_io_reg_rs2 = io_id_ex_ins[24:20]; // @[Execute.scala 58:29]
  assign ForwardingUnit_io_ex_regWrite_0 = io_ex_mem_regWrite_0; // @[Execute.scala 53:18]
  assign ForwardingUnit_io_ex_regWrite_1 = io_ex_mem_regWrite_1; // @[Execute.scala 53:18]
  assign ForwardingUnit_io_mem_regWrite_0 = io_mem_wb_regWrite_0; // @[Execute.scala 54:19]
  assign ForwardingUnit_io_mem_regWrite_1 = io_mem_wb_regWrite_1; // @[Execute.scala 54:19]
  assign ForwardingUnit_io_f_read_0 = io_f_read_0; // @[Execute.scala 60:19]
  assign ForwardingUnit_io_f_read_1 = io_f_read_1; // @[Execute.scala 60:19]
  assign ForwardingUnit_io_f_read_2 = io_f_read_2; // @[Execute.scala 60:19]
  assign ForwardingUnit_io_reg_rs3 = io_id_ex_ins[31:27]; // @[Execute.scala 61:35]
  assign mdu_clock = clock;
  assign mdu_reset = reset;
  assign mdu_io_src_a = div_en ? src_a_reg : aluIn1; // @[Execute.scala 138:21 115:22]
  assign mdu_io_src_b = div_en ? src_b_reg : aluIn2; // @[Execute.scala 138:21 116:22]
  assign mdu_io_op = {{2'd0}, _GEN_15};
  assign mdu_io_valid = div_en ? _GEN_11 : _GEN_1; // @[Execute.scala 138:21]
  assign FPU_clock = clock;
  assign FPU_reset = reset;
  assign FPU_io_in_0 = _inputMux1_T ? io_readData1 : _inputMux1_T_4; // @[Mux.scala 101:16]
  assign FPU_io_in_1 = _inputMux2_T ? io_readData2 : _inputMux2_T_4; // @[Mux.scala 101:16]
  assign FPU_io_in_2 = 2'h2 == ForwardingUnit_io_forwardC ? io_wb_result : _inputMux3_T_3; // @[Mux.scala 81:58]
  assign FPU_io_aluOp = _f_mono_cycle_inst_T_1 ? 5'h1 : _T_99; // @[Mux.scala 101:16]
  assign FPU_io_rm = _T_22 ? io_fcsr_o_data[7:5] : io_func3; // @[Execute.scala 198:22]
  assign FPU_io_div_sqrt_valid = f_multi_cycle_inst; // @[Execute.scala 234:28]
  always @(posedge clock) begin
    if (reset) begin // @[Execute.scala 108:38]
      src_a_reg <= 32'h0; // @[Execute.scala 108:38]
    end else if (_T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 127:124]
      if (_aluIn1_T) begin // @[Mux.scala 101:16]
        src_a_reg <= io_pcAddress;
      end else if (_aluIn1_T_1) begin // @[Mux.scala 101:16]
        src_a_reg <= 32'h0;
      end else begin
        src_a_reg <= inputMux1;
      end
    end
    if (reset) begin // @[Execute.scala 109:38]
      src_b_reg <= 32'h0; // @[Execute.scala 109:38]
    end else if (_T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 127:124]
      if (io_ctl_aluSrc) begin // @[Execute.scala 93:19]
        if (_inputMux2_T) begin // @[Mux.scala 101:16]
          src_b_reg <= io_readData2;
        end else begin
          src_b_reg <= _inputMux2_T_4;
        end
      end else begin
        src_b_reg <= io_immediate;
      end
    end
    if (reset) begin // @[Execute.scala 110:38]
      op_reg <= 3'h0; // @[Execute.scala 110:38]
    end else if (_T_5 & ~div_en & (io_func3 == 3'h4 | io_func3 == 3'h5 | io_func3 == 3'h6 | io_func3 == 3'h7)) begin // @[Execute.scala 127:124]
      op_reg <= io_func3; // @[Execute.scala 132:18]
    end
    if (reset) begin // @[Execute.scala 111:38]
      div_en <= 1'h0; // @[Execute.scala 111:38]
    end else if (div_en) begin // @[Execute.scala 138:21]
      div_en <= _GEN_12;
    end else begin
      div_en <= _GEN_2;
    end
    f7_reg <= _GEN_19[5:0]; // @[Execute.scala 112:{38,38}]
    if (reset) begin // @[Execute.scala 113:38]
      counter <= 6'h0; // @[Execute.scala 113:38]
    end else if (div_en) begin // @[Execute.scala 138:21]
      if (counter < 6'h20) begin // @[Execute.scala 139:32]
        counter <= _counter_T_1; // @[Execute.scala 145:21]
      end else begin
        counter <= 6'h0; // @[Execute.scala 152:21]
      end
    end
    io_is_f_o_REG <= io_func7 == 7'hc | io_func7 == 7'h2c | ~FPU_io_div_sqrt_ready; // @[Execute.scala 196:88]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  src_a_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  src_b_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  op_reg = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  div_en = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  f7_reg = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  counter = _RAND_5[5:0];
  _RAND_6 = {1{`RANDOM}};
  io_is_f_o_REG = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MemoryFetch(
  input         clock,
  input         reset,
  input  [31:0] io_aluResultIn,
  input  [31:0] io_writeData,
  input         io_writeEnable,
  input         io_readEnable,
  output [31:0] io_readData,
  input  [2:0]  io_f3,
  output        io_dccmReq_valid,
  output [31:0] io_dccmReq_bits_addrRequest,
  output [31:0] io_dccmReq_bits_dataRequest,
  output [3:0]  io_dccmReq_bits_activeByteLane,
  output        io_dccmReq_bits_isWrite,
  input         io_dccmRsp_valid,
  input  [31:0] io_dccmRsp_bits_dataResponse,
  output [3:0]  io_wmask,
  output        io_baby_kyber_req_valid,
  output [31:0] io_baby_kyber_req_bits_addrRequest,
  output [31:0] io_baby_kyber_req_bits_dataRequest,
  output [3:0]  io_baby_kyber_req_bits_activeByteLane,
  output        io_baby_kyber_req_bits_isWrite,
  output        io_baby_kyber_rsp_ready,
  output        io_uart_req_valid,
  output [31:0] io_uart_req_bits_addrRequest,
  output [31:0] io_uart_req_bits_dataRequest,
  output [3:0]  io_uart_req_bits_activeByteLane,
  output        io_uart_req_bits_isWrite,
  output        io_uart_rsp_ready,
  output        io_key_enable_trigger,
  output        io_encryption_enable_trigger,
  output        io_decryption_enable_trigger
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] offset; // @[MemoryFetch.scala 69:23]
  reg [2:0] funct3; // @[MemoryFetch.scala 70:23]
  wire [1:0] offsetSW = io_aluResultIn[1:0]; // @[MemoryFetch.scala 71:32]
  wire  _T_3 = offsetSW == 2'h0; // @[MemoryFetch.scala 88:19]
  wire  _T_4 = offsetSW == 2'h1; // @[MemoryFetch.scala 91:25]
  wire [7:0] _GEN_2 = offsetSW == 2'h2 ? io_writeData[15:8] : io_writeData[15:8]; // @[MemoryFetch.scala 106:16 98:33 99:16]
  wire [7:0] _GEN_3 = offsetSW == 2'h2 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 100:16 107:16 98:33]
  wire [7:0] _GEN_4 = offsetSW == 2'h2 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 101:16 108:16 98:33]
  wire [7:0] _GEN_5 = offsetSW == 2'h2 ? io_writeData[31:24] : io_writeData[7:0]; // @[MemoryFetch.scala 102:16 109:16 98:33]
  wire [3:0] _GEN_6 = offsetSW == 2'h2 ? 4'h4 : 4'h8; // @[MemoryFetch.scala 98:33 103:38 110:38]
  wire [7:0] _GEN_7 = offsetSW == 2'h1 ? io_writeData[15:8] : _GEN_2; // @[MemoryFetch.scala 91:33 92:16]
  wire [7:0] _GEN_8 = offsetSW == 2'h1 ? io_writeData[7:0] : _GEN_3; // @[MemoryFetch.scala 91:33 93:16]
  wire [7:0] _GEN_9 = offsetSW == 2'h1 ? io_writeData[23:16] : _GEN_4; // @[MemoryFetch.scala 91:33 94:16]
  wire [7:0] _GEN_10 = offsetSW == 2'h1 ? io_writeData[31:24] : _GEN_5; // @[MemoryFetch.scala 91:33 95:16]
  wire [3:0] _GEN_11 = offsetSW == 2'h1 ? 4'h2 : _GEN_6; // @[MemoryFetch.scala 91:33 96:38]
  wire [3:0] _GEN_12 = offsetSW == 2'h0 ? 4'h1 : _GEN_11; // @[MemoryFetch.scala 88:27 89:38]
  wire [7:0] _GEN_13 = offsetSW == 2'h0 ? io_writeData[7:0] : _GEN_7; // @[MemoryFetch.scala 81:12 88:27]
  wire [7:0] _GEN_14 = offsetSW == 2'h0 ? io_writeData[15:8] : _GEN_8; // @[MemoryFetch.scala 82:12 88:27]
  wire [7:0] _GEN_15 = offsetSW == 2'h0 ? io_writeData[23:16] : _GEN_9; // @[MemoryFetch.scala 83:12 88:27]
  wire [7:0] _GEN_16 = offsetSW == 2'h0 ? io_writeData[31:24] : _GEN_10; // @[MemoryFetch.scala 84:12 88:27]
  wire [3:0] _GEN_17 = _T_4 ? 4'h6 : 4'hc; // @[MemoryFetch.scala 121:33 123:38 131:38]
  wire [7:0] _GEN_18 = _T_4 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 121:33 125:16 135:16]
  wire [7:0] _GEN_19 = _T_4 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 121:33 126:16 136:16]
  wire [7:0] _GEN_20 = _T_4 ? io_writeData[15:8] : io_writeData[7:0]; // @[MemoryFetch.scala 121:33 127:16 133:16]
  wire [7:0] _GEN_21 = _T_4 ? io_writeData[31:24] : io_writeData[15:8]; // @[MemoryFetch.scala 121:33 128:16 134:16]
  wire [3:0] _GEN_22 = _T_3 ? 4'h3 : _GEN_17; // @[MemoryFetch.scala 117:27 119:38]
  wire [7:0] _GEN_23 = _T_3 ? io_writeData[7:0] : _GEN_18; // @[MemoryFetch.scala 117:27 81:12]
  wire [7:0] _GEN_24 = _T_3 ? io_writeData[15:8] : _GEN_19; // @[MemoryFetch.scala 117:27 82:12]
  wire [7:0] _GEN_25 = _T_3 ? io_writeData[23:16] : _GEN_20; // @[MemoryFetch.scala 117:27 83:12]
  wire [7:0] _GEN_26 = _T_3 ? io_writeData[31:24] : _GEN_21; // @[MemoryFetch.scala 117:27 84:12]
  wire [3:0] _io_wmask_T = io_writeEnable ? 4'hf : 4'h0; // @[MemoryFetch.scala 142:24]
  wire [3:0] _GEN_27 = io_writeEnable & io_f3 == 3'h1 ? _GEN_22 : 4'hf; // @[MemoryFetch.scala 115:52 141:36]
  wire [3:0] _GEN_28 = io_writeEnable & io_f3 == 3'h1 ? _GEN_22 : _io_wmask_T; // @[MemoryFetch.scala 115:52 142:18]
  wire [7:0] _GEN_29 = io_writeEnable & io_f3 == 3'h1 ? _GEN_23 : io_writeData[7:0]; // @[MemoryFetch.scala 115:52 81:12]
  wire [7:0] _GEN_30 = io_writeEnable & io_f3 == 3'h1 ? _GEN_24 : io_writeData[15:8]; // @[MemoryFetch.scala 115:52 82:12]
  wire [7:0] _GEN_31 = io_writeEnable & io_f3 == 3'h1 ? _GEN_25 : io_writeData[23:16]; // @[MemoryFetch.scala 115:52 83:12]
  wire [7:0] _GEN_32 = io_writeEnable & io_f3 == 3'h1 ? _GEN_26 : io_writeData[31:24]; // @[MemoryFetch.scala 115:52 84:12]
  wire [7:0] wdata_0 = io_writeEnable & io_f3 == 3'h0 ? _GEN_13 : _GEN_29; // @[MemoryFetch.scala 87:45]
  wire [7:0] wdata_1 = io_writeEnable & io_f3 == 3'h0 ? _GEN_14 : _GEN_30; // @[MemoryFetch.scala 87:45]
  wire [7:0] wdata_2 = io_writeEnable & io_f3 == 3'h0 ? _GEN_15 : _GEN_31; // @[MemoryFetch.scala 87:45]
  wire [7:0] wdata_3 = io_writeEnable & io_f3 == 3'h0 ? _GEN_16 : _GEN_32; // @[MemoryFetch.scala 87:45]
  wire [15:0] io_dccmReq_bits_dataRequest_lo = {wdata_1,wdata_0}; // @[MemoryFetch.scala 145:40]
  wire [15:0] io_dccmReq_bits_dataRequest_hi = {wdata_3,wdata_2}; // @[MemoryFetch.scala 145:40]
  wire [31:0] _io_dccmReq_bits_addrRequest_T = io_aluResultIn & 32'h3fffffff; // @[MemoryFetch.scala 146:63]
  wire [30:0] _io_dccmReq_bits_addrRequest_T_2 = {1'h0,_io_dccmReq_bits_addrRequest_T[31:2]}; // @[Cat.scala 33:92]
  wire [31:0] rdata = io_dccmRsp_valid ? io_dccmRsp_bits_dataResponse : 32'h0; // @[MemoryFetch.scala 152:15]
  wire  babyKyberAddrRange = io_aluResultIn >= 32'h40007000 & io_aluResultIn <= 32'h40007fff; // @[MemoryFetch.scala 155:64]
  wire  uartAddrRange = io_aluResultIn >= 32'h40008000 & io_aluResultIn <= 32'h40008fff; // @[MemoryFetch.scala 175:59]
  wire  _T_12 = offset == 2'h0; // @[MemoryFetch.scala 207:21]
  wire [23:0] _io_readData_T_2 = rdata[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_4 = {_io_readData_T_2,rdata[7:0]}; // @[Cat.scala 33:92]
  wire  _T_13 = offset == 2'h1; // @[MemoryFetch.scala 210:28]
  wire [23:0] _io_readData_T_7 = rdata[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_9 = {_io_readData_T_7,rdata[15:8]}; // @[Cat.scala 33:92]
  wire  _T_14 = offset == 2'h2; // @[MemoryFetch.scala 213:28]
  wire [23:0] _io_readData_T_12 = rdata[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_14 = {_io_readData_T_12,rdata[23:16]}; // @[Cat.scala 33:92]
  wire [23:0] _io_readData_T_17 = rdata[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_19 = {_io_readData_T_17,rdata[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_51 = offset == 2'h2 ? _io_readData_T_14 : _io_readData_T_19; // @[MemoryFetch.scala 213:41 215:23]
  wire [31:0] _GEN_52 = offset == 2'h1 ? _io_readData_T_9 : _GEN_51; // @[MemoryFetch.scala 210:41 212:23]
  wire [31:0] _GEN_53 = offset == 2'h0 ? _io_readData_T_4 : _GEN_52; // @[MemoryFetch.scala 207:34 209:23]
  wire [31:0] _io_readData_T_22 = {24'h0,rdata[7:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_25 = {24'h0,rdata[15:8]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_28 = {24'h0,rdata[23:16]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_31 = {24'h0,rdata[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_55 = _T_14 ? _io_readData_T_28 : _io_readData_T_31; // @[MemoryFetch.scala 232:40 234:23]
  wire [31:0] _GEN_56 = _T_13 ? _io_readData_T_25 : _GEN_55; // @[MemoryFetch.scala 229:40 231:23]
  wire [31:0] _GEN_57 = _T_12 ? _io_readData_T_22 : _GEN_56; // @[MemoryFetch.scala 226:34 228:23]
  wire [31:0] _io_readData_T_34 = {16'h0,rdata[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_37 = {16'h0,rdata[23:8]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_40 = {16'h0,rdata[31:16]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_59 = _T_13 ? _io_readData_T_37 : _io_readData_T_40; // @[MemoryFetch.scala 248:41 250:23]
  wire [31:0] _GEN_60 = _T_12 ? _io_readData_T_34 : _GEN_59; // @[MemoryFetch.scala 245:34 247:23]
  wire [15:0] _io_readData_T_43 = rdata[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_45 = {_io_readData_T_43,rdata[15:0]}; // @[Cat.scala 33:92]
  wire [15:0] _io_readData_T_48 = rdata[23] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_50 = {_io_readData_T_48,rdata[23:8]}; // @[Cat.scala 33:92]
  wire [15:0] _io_readData_T_53 = rdata[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_55 = {_io_readData_T_53,rdata[31:16]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_62 = _T_13 ? _io_readData_T_50 : _io_readData_T_55; // @[MemoryFetch.scala 264:41 266:23]
  wire [31:0] _GEN_63 = _T_12 ? _io_readData_T_45 : _GEN_62; // @[MemoryFetch.scala 261:34 263:23]
  wire [31:0] _GEN_65 = funct3 == 3'h5 ? _GEN_60 : _GEN_63; // @[MemoryFetch.scala 243:38]
  wire [31:0] _GEN_66 = funct3 == 3'h4 ? _GEN_57 : _GEN_65; // @[MemoryFetch.scala 224:38]
  wire [31:0] _GEN_67 = funct3 == 3'h0 ? _GEN_53 : _GEN_66; // @[MemoryFetch.scala 205:38]
  assign io_readData = funct3 == 3'h2 ? rdata : _GEN_67; // @[MemoryFetch.scala 201:31 203:19]
  assign io_dccmReq_valid = io_writeEnable | io_readEnable; // @[MemoryFetch.scala 148:42]
  assign io_dccmReq_bits_addrRequest = {{1'd0}, _io_dccmReq_bits_addrRequest_T_2}; // @[MemoryFetch.scala 146:31]
  assign io_dccmReq_bits_dataRequest = {io_dccmReq_bits_dataRequest_hi,io_dccmReq_bits_dataRequest_lo}; // @[MemoryFetch.scala 145:40]
  assign io_dccmReq_bits_activeByteLane = io_writeEnable & io_f3 == 3'h0 ? _GEN_12 : _GEN_27; // @[MemoryFetch.scala 87:45]
  assign io_dccmReq_bits_isWrite = io_writeEnable; // @[MemoryFetch.scala 147:27]
  assign io_wmask = io_writeEnable & io_f3 == 3'h0 ? _GEN_12 : _GEN_28; // @[MemoryFetch.scala 87:45]
  assign io_baby_kyber_req_valid = io_aluResultIn >= 32'h40007000 & io_aluResultIn <= 32'h40007fff; // @[MemoryFetch.scala 155:64]
  assign io_baby_kyber_req_bits_addrRequest = babyKyberAddrRange ? io_aluResultIn : 32'h0; // @[MemoryFetch.scala 164:30 157:44 165:46]
  assign io_baby_kyber_req_bits_dataRequest = babyKyberAddrRange ? io_writeData : 32'h0; // @[MemoryFetch.scala 164:30 158:44 166:46]
  assign io_baby_kyber_req_bits_activeByteLane = babyKyberAddrRange ? 4'hf : 4'h0; // @[MemoryFetch.scala 164:30 159:47 167:49]
  assign io_baby_kyber_req_bits_isWrite = babyKyberAddrRange & io_writeEnable; // @[MemoryFetch.scala 164:30 160:40 168:42]
  assign io_baby_kyber_rsp_ready = io_aluResultIn >= 32'h40007000 & io_aluResultIn <= 32'h40007fff; // @[MemoryFetch.scala 155:64]
  assign io_uart_req_valid = io_aluResultIn >= 32'h40008000 & io_aluResultIn <= 32'h40008fff; // @[MemoryFetch.scala 175:59]
  assign io_uart_req_bits_addrRequest = uartAddrRange ? io_aluResultIn : 32'h0; // @[MemoryFetch.scala 186:25 177:38 187:40]
  assign io_uart_req_bits_dataRequest = uartAddrRange ? io_writeData : 32'h0; // @[MemoryFetch.scala 186:25 178:38 188:40]
  assign io_uart_req_bits_activeByteLane = uartAddrRange ? 4'hf : 4'h0; // @[MemoryFetch.scala 186:25 179:41 189:43]
  assign io_uart_req_bits_isWrite = uartAddrRange & io_writeEnable; // @[MemoryFetch.scala 186:25 180:34 190:36]
  assign io_uart_rsp_ready = io_aluResultIn >= 32'h40008000 & io_aluResultIn <= 32'h40008fff; // @[MemoryFetch.scala 175:59]
  assign io_key_enable_trigger = io_writeEnable & io_aluResultIn == 32'h40007164; // @[MemoryFetch.scala 61:43]
  assign io_encryption_enable_trigger = io_writeEnable & io_aluResultIn == 32'h40007168; // @[MemoryFetch.scala 62:50]
  assign io_decryption_enable_trigger = io_writeEnable & io_aluResultIn == 32'h4000716c; // @[MemoryFetch.scala 63:50]
  always @(posedge clock) begin
    if (reset) begin // @[MemoryFetch.scala 69:23]
      offset <= 2'h0; // @[MemoryFetch.scala 69:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 73:26]
      offset <= offsetSW; // @[MemoryFetch.scala 75:12]
    end
    if (reset) begin // @[MemoryFetch.scala 70:23]
      funct3 <= 3'h0; // @[MemoryFetch.scala 70:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 73:26]
      funct3 <= io_f3; // @[MemoryFetch.scala 74:12]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"[MEMFETCH] writeEnable: %d, aluResultIn: 0x%x, writeData: 0x%x\n",io_writeEnable,
            io_aluResultIn,io_writeData); // @[MemoryFetch.scala 289:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  offset = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  funct3 = _RAND_1[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PC(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  input         io_halt,
  output [31:0] io_out,
  output [31:0] io_pc4,
  output [31:0] io_pc2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc_reg; // @[PC.scala 13:23]
  wire [31:0] _io_pc4_T_2 = $signed(pc_reg) + 32'sh4; // @[PC.scala 16:41]
  wire [31:0] _io_pc2_T_2 = $signed(pc_reg) + 32'sh2; // @[PC.scala 17:41]
  assign io_out = pc_reg; // @[PC.scala 15:10]
  assign io_pc4 = io_halt ? $signed(pc_reg) : $signed(_io_pc4_T_2); // @[PC.scala 16:16]
  assign io_pc2 = io_halt ? $signed(pc_reg) : $signed(_io_pc2_T_2); // @[PC.scala 17:16]
  always @(posedge clock) begin
    if (reset) begin // @[PC.scala 13:23]
      pc_reg <= -32'sh4; // @[PC.scala 13:23]
    end else begin
      pc_reg <= io_in; // @[PC.scala 14:10]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_reg = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Core(
  input         clock,
  input         reset,
  output [31:0] io_pin,
  output        io_dmemReq_valid,
  output [31:0] io_dmemReq_bits_addrRequest,
  output [31:0] io_dmemReq_bits_dataRequest,
  output [3:0]  io_dmemReq_bits_activeByteLane,
  output        io_dmemReq_bits_isWrite,
  input         io_dmemRsp_valid,
  input  [31:0] io_dmemRsp_bits_dataResponse,
  input         io_imemReq_ready,
  output        io_imemReq_valid,
  output [31:0] io_imemReq_bits_addrRequest,
  output        io_imemRsp_ready,
  input         io_imemRsp_valid,
  input  [31:0] io_imemRsp_bits_dataResponse,
  output        io_rvfi_bool,
  output [3:0]  io_rvfi_uint4,
  output [4:0]  io_rvfi_uint5_0,
  output [4:0]  io_rvfi_uint5_1,
  output [4:0]  io_rvfi_uint5_2,
  output [31:0] io_rvfi_uint32_0,
  output [31:0] io_rvfi_uint32_1,
  output [31:0] io_rvfi_uint32_2,
  output [31:0] io_rvfi_uint32_3,
  output [31:0] io_rvfi_uint32_4,
  output [31:0] io_rvfi_uint32_5,
  output [31:0] io_rvfi_uint32_6,
  output [31:0] io_rvfi_uint32_7,
  output [31:0] io_rvfi_uint32_8,
  input         io_baby_kyber_req_ready,
  output        io_baby_kyber_req_valid,
  output [31:0] io_baby_kyber_req_bits_addrRequest,
  output [31:0] io_baby_kyber_req_bits_dataRequest,
  output [3:0]  io_baby_kyber_req_bits_activeByteLane,
  output        io_baby_kyber_req_bits_isWrite,
  output        io_baby_kyber_rsp_ready,
  input         io_baby_kyber_rsp_valid,
  input  [31:0] io_baby_kyber_rsp_bits_dataResponse,
  input         io_baby_kyber_rsp_bits_error,
  input         io_baby_kyber_cio_babykyber_intr_key,
  input         io_baby_kyber_cio_babykyber_intr_encrypt,
  input         io_baby_kyber_cio_babykyber_intr_decrypt,
  input         io_uart_req_ready,
  output        io_uart_req_valid,
  output [31:0] io_uart_req_bits_addrRequest,
  output [31:0] io_uart_req_bits_dataRequest,
  output [3:0]  io_uart_req_bits_activeByteLane,
  output        io_uart_req_bits_isWrite,
  output        io_uart_rsp_ready,
  input         io_uart_rsp_valid,
  input  [31:0] io_uart_rsp_bits_dataResponse,
  input         io_uart_rsp_bits_error,
  input         io_uart_cio_uart_rx_i,
  output        io_uart_cio_uart_tx_o,
  output        io_uart_cio_uart_intr_tx_o,
  output        io_key_enable_trigger,
  output        io_encryption_enable_trigger,
  output        io_decryption_enable_trigger
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
`endif // RANDOMIZE_REG_INIT
  wire  InstructionFetch_clock; // @[Core.scala 108:18]
  wire  InstructionFetch_reset; // @[Core.scala 108:18]
  wire [31:0] InstructionFetch_io_address; // @[Core.scala 108:18]
  wire [31:0] InstructionFetch_io_instruction; // @[Core.scala 108:18]
  wire  InstructionFetch_io_stall; // @[Core.scala 108:18]
  wire  InstructionFetch_io_coreInstrReq_ready; // @[Core.scala 108:18]
  wire  InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 108:18]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 108:18]
  wire  InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 108:18]
  wire  InstructionFetch_io_coreInstrResp_valid; // @[Core.scala 108:18]
  wire [31:0] InstructionFetch_io_coreInstrResp_bits_dataResponse; // @[Core.scala 108:18]
  wire  InstructionDecode_clock; // @[Core.scala 109:18]
  wire  InstructionDecode_reset; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_id_instruction; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_writeData; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_writeReg; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_pcAddress; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_writeEnable_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_writeEnable_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ex_mem_mem_read; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_id_ex_rd; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_ex_mem_rd; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_ex_mem_ins; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_mem_wb_ins; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_ex_ins; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_ex_result; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_ex_mem_result; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_mem_wb_result; // @[Core.scala 109:18]
  wire  InstructionDecode_io_id_ex_regWr; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ex_mem_regWr; // @[Core.scala 109:18]
  wire  InstructionDecode_io_csr_Ex; // @[Core.scala 109:18]
  wire  InstructionDecode_io_csr_Mem; // @[Core.scala 109:18]
  wire  InstructionDecode_io_csr_Wb; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_csr_Ex_data; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_csr_Mem_data; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_csr_Wb_data; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_dmem_data; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ex_stall; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_immediate; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_writeRegAddress; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_readData1; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_readData2; // @[Core.scala 109:18]
  wire [6:0] InstructionDecode_io_func7; // @[Core.scala 109:18]
  wire [2:0] InstructionDecode_io_func3; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_aluSrc; // @[Core.scala 109:18]
  wire [1:0] InstructionDecode_io_ctl_memToReg; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_regWrite_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_regWrite_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_memRead; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_memWrite; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ctl_branch; // @[Core.scala 109:18]
  wire [1:0] InstructionDecode_io_ctl_aluOp; // @[Core.scala 109:18]
  wire [1:0] InstructionDecode_io_ctl_jump; // @[Core.scala 109:18]
  wire [1:0] InstructionDecode_io_ctl_aluSrc1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_hdu_pcWrite; // @[Core.scala 109:18]
  wire  InstructionDecode_io_pcSrc; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_pcPlusOffset; // @[Core.scala 109:18]
  wire  InstructionDecode_io_ifid_flush; // @[Core.scala 109:18]
  wire  InstructionDecode_io_stall; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_csr_o_data; // @[Core.scala 109:18]
  wire  InstructionDecode_io_is_csr; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_fcsr_o_data; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_reg_0_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_reg_1_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_reg_1_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_reg_2_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_reg_2_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_0_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_0_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_0_2; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_0_3; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_0_4; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_1_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_1_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_1_2; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_1_3; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_1_4; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_2_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_2_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_2_2; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_2_3; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_except_2_4; // @[Core.scala 109:18]
  wire  InstructionDecode_io_is_f_in_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_is_f_in_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_is_f_in_2; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_0; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_1; // @[Core.scala 109:18]
  wire  InstructionDecode_io_f_read_2; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_readData3; // @[Core.scala 109:18]
  wire  InstructionDecode_io_is_f; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_raddr_0; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_raddr_1; // @[Core.scala 109:18]
  wire [4:0] InstructionDecode_io_raddr_2; // @[Core.scala 109:18]
  wire [31:0] InstructionDecode_io_rd_wdata; // @[Core.scala 109:18]
  wire  Execute_clock; // @[Core.scala 110:18]
  wire  Execute_reset; // @[Core.scala 110:18]
  wire [31:0] Execute_io_immediate; // @[Core.scala 110:18]
  wire [31:0] Execute_io_readData1; // @[Core.scala 110:18]
  wire [31:0] Execute_io_readData2; // @[Core.scala 110:18]
  wire [31:0] Execute_io_pcAddress; // @[Core.scala 110:18]
  wire [6:0] Execute_io_func7; // @[Core.scala 110:18]
  wire [2:0] Execute_io_func3; // @[Core.scala 110:18]
  wire [31:0] Execute_io_mem_result; // @[Core.scala 110:18]
  wire [31:0] Execute_io_wb_result; // @[Core.scala 110:18]
  wire  Execute_io_ex_mem_regWrite_0; // @[Core.scala 110:18]
  wire  Execute_io_ex_mem_regWrite_1; // @[Core.scala 110:18]
  wire  Execute_io_mem_wb_regWrite_0; // @[Core.scala 110:18]
  wire  Execute_io_mem_wb_regWrite_1; // @[Core.scala 110:18]
  wire [31:0] Execute_io_id_ex_ins; // @[Core.scala 110:18]
  wire [31:0] Execute_io_ex_mem_ins; // @[Core.scala 110:18]
  wire [31:0] Execute_io_mem_wb_ins; // @[Core.scala 110:18]
  wire  Execute_io_ctl_aluSrc; // @[Core.scala 110:18]
  wire [1:0] Execute_io_ctl_aluOp; // @[Core.scala 110:18]
  wire [1:0] Execute_io_ctl_aluSrc1; // @[Core.scala 110:18]
  wire [31:0] Execute_io_writeData; // @[Core.scala 110:18]
  wire [31:0] Execute_io_ALUresult; // @[Core.scala 110:18]
  wire  Execute_io_stall; // @[Core.scala 110:18]
  wire [31:0] Execute_io_rs1_rdata; // @[Core.scala 110:18]
  wire  Execute_io_f_read_0; // @[Core.scala 110:18]
  wire  Execute_io_f_read_1; // @[Core.scala 110:18]
  wire  Execute_io_f_read_2; // @[Core.scala 110:18]
  wire [31:0] Execute_io_readData3; // @[Core.scala 110:18]
  wire [31:0] Execute_io_fcsr_o_data; // @[Core.scala 110:18]
  wire  Execute_io_is_f_i; // @[Core.scala 110:18]
  wire  Execute_io_is_f_o; // @[Core.scala 110:18]
  wire  Execute_io_exceptions_0; // @[Core.scala 110:18]
  wire  Execute_io_exceptions_1; // @[Core.scala 110:18]
  wire  Execute_io_exceptions_2; // @[Core.scala 110:18]
  wire  Execute_io_exceptions_3; // @[Core.scala 110:18]
  wire  Execute_io_exceptions_4; // @[Core.scala 110:18]
  wire  MEM_clock; // @[Core.scala 111:19]
  wire  MEM_reset; // @[Core.scala 111:19]
  wire [31:0] MEM_io_aluResultIn; // @[Core.scala 111:19]
  wire [31:0] MEM_io_writeData; // @[Core.scala 111:19]
  wire  MEM_io_writeEnable; // @[Core.scala 111:19]
  wire  MEM_io_readEnable; // @[Core.scala 111:19]
  wire [31:0] MEM_io_readData; // @[Core.scala 111:19]
  wire [2:0] MEM_io_f3; // @[Core.scala 111:19]
  wire  MEM_io_dccmReq_valid; // @[Core.scala 111:19]
  wire [31:0] MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 111:19]
  wire [31:0] MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 111:19]
  wire [3:0] MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 111:19]
  wire  MEM_io_dccmReq_bits_isWrite; // @[Core.scala 111:19]
  wire  MEM_io_dccmRsp_valid; // @[Core.scala 111:19]
  wire [31:0] MEM_io_dccmRsp_bits_dataResponse; // @[Core.scala 111:19]
  wire [3:0] MEM_io_wmask; // @[Core.scala 111:19]
  wire  MEM_io_baby_kyber_req_valid; // @[Core.scala 111:19]
  wire [31:0] MEM_io_baby_kyber_req_bits_addrRequest; // @[Core.scala 111:19]
  wire [31:0] MEM_io_baby_kyber_req_bits_dataRequest; // @[Core.scala 111:19]
  wire [3:0] MEM_io_baby_kyber_req_bits_activeByteLane; // @[Core.scala 111:19]
  wire  MEM_io_baby_kyber_req_bits_isWrite; // @[Core.scala 111:19]
  wire  MEM_io_baby_kyber_rsp_ready; // @[Core.scala 111:19]
  wire  MEM_io_uart_req_valid; // @[Core.scala 111:19]
  wire [31:0] MEM_io_uart_req_bits_addrRequest; // @[Core.scala 111:19]
  wire [31:0] MEM_io_uart_req_bits_dataRequest; // @[Core.scala 111:19]
  wire [3:0] MEM_io_uart_req_bits_activeByteLane; // @[Core.scala 111:19]
  wire  MEM_io_uart_req_bits_isWrite; // @[Core.scala 111:19]
  wire  MEM_io_uart_rsp_ready; // @[Core.scala 111:19]
  wire  MEM_io_key_enable_trigger; // @[Core.scala 111:19]
  wire  MEM_io_encryption_enable_trigger; // @[Core.scala 111:19]
  wire  MEM_io_decryption_enable_trigger; // @[Core.scala 111:19]
  wire  pc_clock; // @[Core.scala 118:18]
  wire  pc_reset; // @[Core.scala 118:18]
  wire [31:0] pc_io_in; // @[Core.scala 118:18]
  wire  pc_io_halt; // @[Core.scala 118:18]
  wire [31:0] pc_io_out; // @[Core.scala 118:18]
  wire [31:0] pc_io_pc4; // @[Core.scala 118:18]
  wire [31:0] pc_io_pc2; // @[Core.scala 118:18]
  reg [31:0] if_reg_pc; // @[Core.scala 42:26]
  reg [31:0] if_reg_ins; // @[Core.scala 43:27]
  reg [31:0] id_reg_pc; // @[Core.scala 46:26]
  reg [31:0] id_reg_rd1; // @[Core.scala 47:27]
  reg [31:0] id_reg_rd2; // @[Core.scala 48:27]
  reg [31:0] id_reg_imm; // @[Core.scala 49:27]
  reg [4:0] id_reg_wra; // @[Core.scala 50:27]
  reg [6:0] id_reg_f7; // @[Core.scala 51:26]
  reg [2:0] id_reg_f3; // @[Core.scala 52:26]
  reg [31:0] id_reg_ins; // @[Core.scala 53:27]
  reg  id_reg_ctl_aluSrc; // @[Core.scala 54:34]
  reg [1:0] id_reg_ctl_aluSrc1; // @[Core.scala 55:35]
  reg [1:0] id_reg_ctl_memToReg; // @[Core.scala 56:36]
  reg  id_reg_ctl_regWrite_0; // @[Core.scala 57:36]
  reg  id_reg_ctl_regWrite_1; // @[Core.scala 57:36]
  reg  id_reg_ctl_memRead; // @[Core.scala 58:35]
  reg  id_reg_ctl_memWrite; // @[Core.scala 59:36]
  reg [1:0] id_reg_ctl_aluOp; // @[Core.scala 61:33]
  reg  id_reg_is_csr; // @[Core.scala 63:30]
  reg [31:0] id_reg_csr_data; // @[Core.scala 64:32]
  reg  id_reg_f_read_0; // @[Core.scala 66:38]
  reg  id_reg_f_read_1; // @[Core.scala 66:38]
  reg  id_reg_f_read_2; // @[Core.scala 66:38]
  reg [31:0] id_reg_rd3; // @[Core.scala 67:39]
  reg [31:0] id_reg_fcsr_o_data; // @[Core.scala 68:47]
  reg  id_reg_is_f; // @[Core.scala 69:40]
  reg [31:0] ex_reg_result; // @[Core.scala 74:30]
  reg [31:0] ex_reg_wd; // @[Core.scala 75:26]
  reg [4:0] ex_reg_wra; // @[Core.scala 76:27]
  reg [31:0] ex_reg_ins; // @[Core.scala 77:27]
  reg [1:0] ex_reg_ctl_memToReg; // @[Core.scala 78:36]
  reg  ex_reg_ctl_regWrite_0; // @[Core.scala 79:36]
  reg  ex_reg_ctl_regWrite_1; // @[Core.scala 79:36]
  reg  ex_reg_ctl_memRead; // @[Core.scala 80:35]
  reg  ex_reg_ctl_memWrite; // @[Core.scala 81:36]
  reg [31:0] ex_reg_pc; // @[Core.scala 83:26]
  reg  ex_reg_is_csr; // @[Core.scala 84:30]
  reg [31:0] ex_reg_csr_data; // @[Core.scala 85:32]
  reg  ex_reg_f_read_0; // @[Core.scala 87:38]
  reg  ex_reg_f_read_1; // @[Core.scala 87:38]
  reg  ex_reg_f_except_0; // @[Core.scala 88:44]
  reg  ex_reg_f_except_1; // @[Core.scala 88:44]
  reg  ex_reg_f_except_2; // @[Core.scala 88:44]
  reg  ex_reg_f_except_3; // @[Core.scala 88:44]
  reg  ex_reg_f_except_4; // @[Core.scala 88:44]
  reg  ex_reg_is_f; // @[Core.scala 89:40]
  reg [31:0] mem_reg_rd; // @[Core.scala 92:27]
  reg [31:0] mem_reg_ins; // @[Core.scala 93:28]
  reg [31:0] mem_reg_result; // @[Core.scala 94:31]
  reg [4:0] mem_reg_wra; // @[Core.scala 96:28]
  reg [1:0] mem_reg_ctl_memToReg; // @[Core.scala 97:37]
  reg  mem_reg_ctl_regWrite_0; // @[Core.scala 98:37]
  reg  mem_reg_ctl_regWrite_1; // @[Core.scala 98:37]
  reg [31:0] mem_reg_pc; // @[Core.scala 99:27]
  reg  mem_reg_is_csr; // @[Core.scala 100:31]
  reg [31:0] mem_reg_csr_data; // @[Core.scala 101:33]
  reg  mem_reg_f_read_0; // @[Core.scala 103:39]
  reg  mem_reg_f_read_1; // @[Core.scala 103:39]
  reg  mem_reg_f_except_0; // @[Core.scala 104:45]
  reg  mem_reg_f_except_1; // @[Core.scala 104:45]
  reg  mem_reg_f_except_2; // @[Core.scala 104:45]
  reg  mem_reg_f_except_3; // @[Core.scala 104:45]
  reg  mem_reg_f_except_4; // @[Core.scala 104:45]
  reg  mem_reg_is_f; // @[Core.scala 105:41]
  wire [31:0] instruction = InstructionFetch_io_instruction; // @[Core.scala 123:25 156:17]
  wire [2:0] func3 = instruction[14:12]; // @[Core.scala 160:26]
  wire [6:0] func7 = instruction[6:0] == 7'h33 | instruction[6:0] == 7'h53 ? instruction[31:25] : 7'h0; // @[Core.scala 162:84 163:11 165:11]
  wire  _IF_stall_T_8 = func7 == 7'h1 & (func3 == 3'h4 | func3 == 3'h5 | func3 == 3'h6 | func3 == 3'h7); // @[Core.scala 169:19]
  wire  IF_stall = _IF_stall_T_8 | (func7 == 7'hc | func7 == 7'h2c); // @[Core.scala 170:5]
  wire  ral_halt_o = 1'h0; // @[Core.scala 124:{29,29}]
  wire  is_comp = 1'h0; // @[Core.scala 125:{39,39}]
  wire [31:0] _npc_T_1 = ral_halt_o ? $signed(pc_io_pc2) : $signed(pc_io_pc4); // @[Core.scala 181:10]
  wire [31:0] _npc_T_2 = InstructionDecode_io_pcSrc ? $signed(InstructionDecode_io_pcPlusOffset) : $signed(_npc_T_1); // @[Core.scala 178:8]
  wire [31:0] npc = InstructionDecode_io_hdu_pcWrite ? $signed(_npc_T_2) : $signed(pc_io_out); // @[Core.scala 176:16]
  wire [31:0] _wb_data_T_1 = mem_reg_pc + 32'h4; // @[Core.scala 371:28]
  wire [31:0] _GEN_7 = mem_reg_ctl_memToReg == 2'h2 ? _wb_data_T_1 : mem_reg_result; // @[Core.scala 370:44 371:15 375:15]
  reg [3:0] io_rvfi_uint4_REG; // @[Tracer.scala 87:14]
  reg [4:0] io_rvfi_uint5_0_REG; // @[Tracer.scala 87:14]
  reg [4:0] io_rvfi_uint5_0_REG_1; // @[Tracer.scala 89:14]
  reg [4:0] io_rvfi_uint5_0_REG_2; // @[Tracer.scala 89:14]
  reg [4:0] io_rvfi_uint5_1_REG; // @[Tracer.scala 87:14]
  reg [4:0] io_rvfi_uint5_1_REG_1; // @[Tracer.scala 89:14]
  reg [4:0] io_rvfi_uint5_1_REG_2; // @[Tracer.scala 89:14]
  reg [31:0] REG; // @[Tracer.scala 87:14]
  reg [31:0] REG_1; // @[Tracer.scala 89:14]
  reg [31:0] REG_2; // @[Tracer.scala 87:14]
  reg [31:0] REG_3; // @[Tracer.scala 87:14]
  reg [31:0] REG_4; // @[Tracer.scala 89:14]
  reg [31:0] REG_5; // @[Tracer.scala 89:14]
  reg [31:0] REG_6; // @[Tracer.scala 89:14]
  reg  REG_7; // @[Tracer.scala 87:14]
  reg [31:0] REG_8; // @[Tracer.scala 87:14]
  reg  REG_9; // @[Tracer.scala 87:14]
  reg  REG_10; // @[Tracer.scala 87:14]
  reg [31:0] REG_11; // @[Tracer.scala 87:14]
  wire [31:0] wb_data = mem_reg_ctl_memToReg == 2'h1 ? MEM_io_readData : _GEN_7; // @[Core.scala 367:38 368:13]
  InstructionFetch InstructionFetch ( // @[Core.scala 108:18]
    .clock(InstructionFetch_clock),
    .reset(InstructionFetch_reset),
    .io_address(InstructionFetch_io_address),
    .io_instruction(InstructionFetch_io_instruction),
    .io_stall(InstructionFetch_io_stall),
    .io_coreInstrReq_ready(InstructionFetch_io_coreInstrReq_ready),
    .io_coreInstrReq_valid(InstructionFetch_io_coreInstrReq_valid),
    .io_coreInstrReq_bits_addrRequest(InstructionFetch_io_coreInstrReq_bits_addrRequest),
    .io_coreInstrResp_ready(InstructionFetch_io_coreInstrResp_ready),
    .io_coreInstrResp_valid(InstructionFetch_io_coreInstrResp_valid),
    .io_coreInstrResp_bits_dataResponse(InstructionFetch_io_coreInstrResp_bits_dataResponse)
  );
  InstructionDecode InstructionDecode ( // @[Core.scala 109:18]
    .clock(InstructionDecode_clock),
    .reset(InstructionDecode_reset),
    .io_id_instruction(InstructionDecode_io_id_instruction),
    .io_writeData(InstructionDecode_io_writeData),
    .io_writeReg(InstructionDecode_io_writeReg),
    .io_pcAddress(InstructionDecode_io_pcAddress),
    .io_ctl_writeEnable_0(InstructionDecode_io_ctl_writeEnable_0),
    .io_ctl_writeEnable_1(InstructionDecode_io_ctl_writeEnable_1),
    .io_ex_mem_mem_read(InstructionDecode_io_ex_mem_mem_read),
    .io_id_ex_rd(InstructionDecode_io_id_ex_rd),
    .io_ex_mem_rd(InstructionDecode_io_ex_mem_rd),
    .io_ex_mem_ins(InstructionDecode_io_ex_mem_ins),
    .io_mem_wb_ins(InstructionDecode_io_mem_wb_ins),
    .io_ex_ins(InstructionDecode_io_ex_ins),
    .io_ex_result(InstructionDecode_io_ex_result),
    .io_ex_mem_result(InstructionDecode_io_ex_mem_result),
    .io_mem_wb_result(InstructionDecode_io_mem_wb_result),
    .io_id_ex_regWr(InstructionDecode_io_id_ex_regWr),
    .io_ex_mem_regWr(InstructionDecode_io_ex_mem_regWr),
    .io_csr_Ex(InstructionDecode_io_csr_Ex),
    .io_csr_Mem(InstructionDecode_io_csr_Mem),
    .io_csr_Wb(InstructionDecode_io_csr_Wb),
    .io_csr_Ex_data(InstructionDecode_io_csr_Ex_data),
    .io_csr_Mem_data(InstructionDecode_io_csr_Mem_data),
    .io_csr_Wb_data(InstructionDecode_io_csr_Wb_data),
    .io_dmem_data(InstructionDecode_io_dmem_data),
    .io_ex_stall(InstructionDecode_io_ex_stall),
    .io_immediate(InstructionDecode_io_immediate),
    .io_writeRegAddress(InstructionDecode_io_writeRegAddress),
    .io_readData1(InstructionDecode_io_readData1),
    .io_readData2(InstructionDecode_io_readData2),
    .io_func7(InstructionDecode_io_func7),
    .io_func3(InstructionDecode_io_func3),
    .io_ctl_aluSrc(InstructionDecode_io_ctl_aluSrc),
    .io_ctl_memToReg(InstructionDecode_io_ctl_memToReg),
    .io_ctl_regWrite_0(InstructionDecode_io_ctl_regWrite_0),
    .io_ctl_regWrite_1(InstructionDecode_io_ctl_regWrite_1),
    .io_ctl_memRead(InstructionDecode_io_ctl_memRead),
    .io_ctl_memWrite(InstructionDecode_io_ctl_memWrite),
    .io_ctl_branch(InstructionDecode_io_ctl_branch),
    .io_ctl_aluOp(InstructionDecode_io_ctl_aluOp),
    .io_ctl_jump(InstructionDecode_io_ctl_jump),
    .io_ctl_aluSrc1(InstructionDecode_io_ctl_aluSrc1),
    .io_hdu_pcWrite(InstructionDecode_io_hdu_pcWrite),
    .io_pcSrc(InstructionDecode_io_pcSrc),
    .io_pcPlusOffset(InstructionDecode_io_pcPlusOffset),
    .io_ifid_flush(InstructionDecode_io_ifid_flush),
    .io_stall(InstructionDecode_io_stall),
    .io_csr_o_data(InstructionDecode_io_csr_o_data),
    .io_is_csr(InstructionDecode_io_is_csr),
    .io_fcsr_o_data(InstructionDecode_io_fcsr_o_data),
    .io_f_read_reg_0_0(InstructionDecode_io_f_read_reg_0_0),
    .io_f_read_reg_1_0(InstructionDecode_io_f_read_reg_1_0),
    .io_f_read_reg_1_1(InstructionDecode_io_f_read_reg_1_1),
    .io_f_read_reg_2_0(InstructionDecode_io_f_read_reg_2_0),
    .io_f_read_reg_2_1(InstructionDecode_io_f_read_reg_2_1),
    .io_f_except_0_0(InstructionDecode_io_f_except_0_0),
    .io_f_except_0_1(InstructionDecode_io_f_except_0_1),
    .io_f_except_0_2(InstructionDecode_io_f_except_0_2),
    .io_f_except_0_3(InstructionDecode_io_f_except_0_3),
    .io_f_except_0_4(InstructionDecode_io_f_except_0_4),
    .io_f_except_1_0(InstructionDecode_io_f_except_1_0),
    .io_f_except_1_1(InstructionDecode_io_f_except_1_1),
    .io_f_except_1_2(InstructionDecode_io_f_except_1_2),
    .io_f_except_1_3(InstructionDecode_io_f_except_1_3),
    .io_f_except_1_4(InstructionDecode_io_f_except_1_4),
    .io_f_except_2_0(InstructionDecode_io_f_except_2_0),
    .io_f_except_2_1(InstructionDecode_io_f_except_2_1),
    .io_f_except_2_2(InstructionDecode_io_f_except_2_2),
    .io_f_except_2_3(InstructionDecode_io_f_except_2_3),
    .io_f_except_2_4(InstructionDecode_io_f_except_2_4),
    .io_is_f_in_0(InstructionDecode_io_is_f_in_0),
    .io_is_f_in_1(InstructionDecode_io_is_f_in_1),
    .io_is_f_in_2(InstructionDecode_io_is_f_in_2),
    .io_f_read_0(InstructionDecode_io_f_read_0),
    .io_f_read_1(InstructionDecode_io_f_read_1),
    .io_f_read_2(InstructionDecode_io_f_read_2),
    .io_readData3(InstructionDecode_io_readData3),
    .io_is_f(InstructionDecode_io_is_f),
    .io_raddr_0(InstructionDecode_io_raddr_0),
    .io_raddr_1(InstructionDecode_io_raddr_1),
    .io_raddr_2(InstructionDecode_io_raddr_2),
    .io_rd_wdata(InstructionDecode_io_rd_wdata)
  );
  Execute Execute ( // @[Core.scala 110:18]
    .clock(Execute_clock),
    .reset(Execute_reset),
    .io_immediate(Execute_io_immediate),
    .io_readData1(Execute_io_readData1),
    .io_readData2(Execute_io_readData2),
    .io_pcAddress(Execute_io_pcAddress),
    .io_func7(Execute_io_func7),
    .io_func3(Execute_io_func3),
    .io_mem_result(Execute_io_mem_result),
    .io_wb_result(Execute_io_wb_result),
    .io_ex_mem_regWrite_0(Execute_io_ex_mem_regWrite_0),
    .io_ex_mem_regWrite_1(Execute_io_ex_mem_regWrite_1),
    .io_mem_wb_regWrite_0(Execute_io_mem_wb_regWrite_0),
    .io_mem_wb_regWrite_1(Execute_io_mem_wb_regWrite_1),
    .io_id_ex_ins(Execute_io_id_ex_ins),
    .io_ex_mem_ins(Execute_io_ex_mem_ins),
    .io_mem_wb_ins(Execute_io_mem_wb_ins),
    .io_ctl_aluSrc(Execute_io_ctl_aluSrc),
    .io_ctl_aluOp(Execute_io_ctl_aluOp),
    .io_ctl_aluSrc1(Execute_io_ctl_aluSrc1),
    .io_writeData(Execute_io_writeData),
    .io_ALUresult(Execute_io_ALUresult),
    .io_stall(Execute_io_stall),
    .io_rs1_rdata(Execute_io_rs1_rdata),
    .io_f_read_0(Execute_io_f_read_0),
    .io_f_read_1(Execute_io_f_read_1),
    .io_f_read_2(Execute_io_f_read_2),
    .io_readData3(Execute_io_readData3),
    .io_fcsr_o_data(Execute_io_fcsr_o_data),
    .io_is_f_i(Execute_io_is_f_i),
    .io_is_f_o(Execute_io_is_f_o),
    .io_exceptions_0(Execute_io_exceptions_0),
    .io_exceptions_1(Execute_io_exceptions_1),
    .io_exceptions_2(Execute_io_exceptions_2),
    .io_exceptions_3(Execute_io_exceptions_3),
    .io_exceptions_4(Execute_io_exceptions_4)
  );
  MemoryFetch MEM ( // @[Core.scala 111:19]
    .clock(MEM_clock),
    .reset(MEM_reset),
    .io_aluResultIn(MEM_io_aluResultIn),
    .io_writeData(MEM_io_writeData),
    .io_writeEnable(MEM_io_writeEnable),
    .io_readEnable(MEM_io_readEnable),
    .io_readData(MEM_io_readData),
    .io_f3(MEM_io_f3),
    .io_dccmReq_valid(MEM_io_dccmReq_valid),
    .io_dccmReq_bits_addrRequest(MEM_io_dccmReq_bits_addrRequest),
    .io_dccmReq_bits_dataRequest(MEM_io_dccmReq_bits_dataRequest),
    .io_dccmReq_bits_activeByteLane(MEM_io_dccmReq_bits_activeByteLane),
    .io_dccmReq_bits_isWrite(MEM_io_dccmReq_bits_isWrite),
    .io_dccmRsp_valid(MEM_io_dccmRsp_valid),
    .io_dccmRsp_bits_dataResponse(MEM_io_dccmRsp_bits_dataResponse),
    .io_wmask(MEM_io_wmask),
    .io_baby_kyber_req_valid(MEM_io_baby_kyber_req_valid),
    .io_baby_kyber_req_bits_addrRequest(MEM_io_baby_kyber_req_bits_addrRequest),
    .io_baby_kyber_req_bits_dataRequest(MEM_io_baby_kyber_req_bits_dataRequest),
    .io_baby_kyber_req_bits_activeByteLane(MEM_io_baby_kyber_req_bits_activeByteLane),
    .io_baby_kyber_req_bits_isWrite(MEM_io_baby_kyber_req_bits_isWrite),
    .io_baby_kyber_rsp_ready(MEM_io_baby_kyber_rsp_ready),
    .io_uart_req_valid(MEM_io_uart_req_valid),
    .io_uart_req_bits_addrRequest(MEM_io_uart_req_bits_addrRequest),
    .io_uart_req_bits_dataRequest(MEM_io_uart_req_bits_dataRequest),
    .io_uart_req_bits_activeByteLane(MEM_io_uart_req_bits_activeByteLane),
    .io_uart_req_bits_isWrite(MEM_io_uart_req_bits_isWrite),
    .io_uart_rsp_ready(MEM_io_uart_rsp_ready),
    .io_key_enable_trigger(MEM_io_key_enable_trigger),
    .io_encryption_enable_trigger(MEM_io_encryption_enable_trigger),
    .io_decryption_enable_trigger(MEM_io_decryption_enable_trigger)
  );
  PC pc ( // @[Core.scala 118:18]
    .clock(pc_clock),
    .reset(pc_reset),
    .io_in(pc_io_in),
    .io_halt(pc_io_halt),
    .io_out(pc_io_out),
    .io_pc4(pc_io_pc4),
    .io_pc2(pc_io_pc2)
  );
  assign io_pin = wb_data; // @[Core.scala 388:10]
  assign io_dmemReq_valid = MEM_io_dccmReq_valid; // @[Core.scala 302:14]
  assign io_dmemReq_bits_addrRequest = MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 302:14]
  assign io_dmemReq_bits_dataRequest = MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 302:14]
  assign io_dmemReq_bits_activeByteLane = MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 302:14]
  assign io_dmemReq_bits_isWrite = MEM_io_dccmReq_bits_isWrite; // @[Core.scala 302:14]
  assign io_imemReq_valid = InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 120:14]
  assign io_imemReq_bits_addrRequest = InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 120:14]
  assign io_imemRsp_ready = InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 121:20]
  assign io_rvfi_bool = mem_reg_ins != 32'h0 & ~clock; // @[Core.scala 405:47]
  assign io_rvfi_uint4 = io_rvfi_uint4_REG; // @[Core.scala 407:23]
  assign io_rvfi_uint5_0 = io_rvfi_uint5_0_REG_2; // @[Core.scala 410:36]
  assign io_rvfi_uint5_1 = io_rvfi_uint5_1_REG_2; // @[Core.scala 410:36]
  assign io_rvfi_uint5_2 = InstructionDecode_io_raddr_2; // @[Core.scala 410:36]
  assign io_rvfi_uint32_0 = mem_reg_ins; // @[Core.scala 436:37]
  assign io_rvfi_uint32_1 = REG_1; // @[Core.scala 436:37]
  assign io_rvfi_uint32_2 = REG_2; // @[Core.scala 436:37]
  assign io_rvfi_uint32_3 = InstructionDecode_io_rd_wdata; // @[Core.scala 436:37]
  assign io_rvfi_uint32_4 = mem_reg_pc; // @[Core.scala 436:37]
  assign io_rvfi_uint32_5 = REG_6; // @[Core.scala 436:37]
  assign io_rvfi_uint32_6 = REG_7 ? REG_8 : 32'h0; // @[Core.scala 420:10]
  assign io_rvfi_uint32_7 = REG_9 ? mem_reg_rd : 32'h0; // @[Core.scala 425:10]
  assign io_rvfi_uint32_8 = REG_10 ? REG_11 : 32'h0; // @[Core.scala 430:10]
  assign io_baby_kyber_req_valid = MEM_io_baby_kyber_req_valid; // @[Core.scala 348:34]
  assign io_baby_kyber_req_bits_addrRequest = MEM_io_baby_kyber_req_bits_addrRequest; // @[Core.scala 348:34]
  assign io_baby_kyber_req_bits_dataRequest = MEM_io_baby_kyber_req_bits_dataRequest; // @[Core.scala 348:34]
  assign io_baby_kyber_req_bits_activeByteLane = MEM_io_baby_kyber_req_bits_activeByteLane; // @[Core.scala 348:34]
  assign io_baby_kyber_req_bits_isWrite = MEM_io_baby_kyber_req_bits_isWrite; // @[Core.scala 348:34]
  assign io_baby_kyber_rsp_ready = MEM_io_baby_kyber_rsp_ready; // @[Core.scala 348:34]
  assign io_uart_req_valid = MEM_io_uart_req_valid; // @[Core.scala 356:28]
  assign io_uart_req_bits_addrRequest = MEM_io_uart_req_bits_addrRequest; // @[Core.scala 356:28]
  assign io_uart_req_bits_dataRequest = MEM_io_uart_req_bits_dataRequest; // @[Core.scala 356:28]
  assign io_uart_req_bits_activeByteLane = MEM_io_uart_req_bits_activeByteLane; // @[Core.scala 356:28]
  assign io_uart_req_bits_isWrite = MEM_io_uart_req_bits_isWrite; // @[Core.scala 356:28]
  assign io_uart_rsp_ready = MEM_io_uart_rsp_ready; // @[Core.scala 356:28]
  assign io_uart_cio_uart_tx_o = 1'h0; // @[Core.scala 356:28]
  assign io_uart_cio_uart_intr_tx_o = 1'h0; // @[Core.scala 356:28]
  assign io_key_enable_trigger = MEM_io_key_enable_trigger; // @[Core.scala 351:27]
  assign io_encryption_enable_trigger = MEM_io_encryption_enable_trigger; // @[Core.scala 352:34]
  assign io_decryption_enable_trigger = MEM_io_decryption_enable_trigger; // @[Core.scala 353:34]
  assign InstructionFetch_clock = clock;
  assign InstructionFetch_reset = reset;
  assign InstructionFetch_io_address = pc_io_out; // @[Core.scala 155:29]
  assign InstructionFetch_io_stall = Execute_io_stall | InstructionDecode_io_stall | IF_stall |
    InstructionDecode_io_pcSrc; // @[Core.scala 172:60]
  assign InstructionFetch_io_coreInstrReq_ready = io_imemReq_ready; // @[Core.scala 120:14]
  assign InstructionFetch_io_coreInstrResp_valid = io_imemRsp_valid; // @[Core.scala 121:20]
  assign InstructionFetch_io_coreInstrResp_bits_dataResponse = io_imemRsp_bits_dataResponse; // @[Core.scala 121:20]
  assign InstructionDecode_clock = clock;
  assign InstructionDecode_reset = reset;
  assign InstructionDecode_io_id_instruction = if_reg_ins; // @[Core.scala 219:21]
  assign InstructionDecode_io_writeData = wb_data; // @[Core.scala 380:16]
  assign InstructionDecode_io_writeReg = mem_reg_wra; // @[Core.scala 367:38 369:13]
  assign InstructionDecode_io_pcAddress = if_reg_pc; // @[Core.scala 220:16]
  assign InstructionDecode_io_ctl_writeEnable_0 = mem_reg_ctl_regWrite_0; // @[Core.scala 384:22]
  assign InstructionDecode_io_ctl_writeEnable_1 = mem_reg_ctl_regWrite_1; // @[Core.scala 384:22]
  assign InstructionDecode_io_ex_mem_mem_read = ex_reg_ctl_memRead; // @[Core.scala 270:22]
  assign InstructionDecode_io_id_ex_rd = id_reg_ins[11:7]; // @[Core.scala 274:28]
  assign InstructionDecode_io_ex_mem_rd = ex_reg_ins[11:7]; // @[Core.scala 276:29]
  assign InstructionDecode_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 224:17]
  assign InstructionDecode_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 225:17]
  assign InstructionDecode_io_ex_ins = id_reg_ins; // @[Core.scala 223:13]
  assign InstructionDecode_io_ex_result = Execute_io_ALUresult; // @[Core.scala 277:16]
  assign InstructionDecode_io_ex_mem_result = ex_reg_result; // @[Core.scala 226:20]
  assign InstructionDecode_io_mem_wb_result = wb_data; // @[Core.scala 379:20]
  assign InstructionDecode_io_id_ex_regWr = id_reg_ctl_regWrite_0; // @[Core.scala 230:18]
  assign InstructionDecode_io_ex_mem_regWr = ex_reg_ctl_regWrite_0; // @[Core.scala 231:19]
  assign InstructionDecode_io_csr_Ex = id_reg_is_csr; // @[Core.scala 278:13]
  assign InstructionDecode_io_csr_Mem = ex_reg_is_csr; // @[Core.scala 337:14]
  assign InstructionDecode_io_csr_Wb = mem_reg_is_csr; // @[Core.scala 385:13]
  assign InstructionDecode_io_csr_Ex_data = id_reg_csr_data; // @[Core.scala 279:18]
  assign InstructionDecode_io_csr_Mem_data = ex_reg_csr_data; // @[Core.scala 338:19]
  assign InstructionDecode_io_csr_Wb_data = mem_reg_csr_data; // @[Core.scala 386:18]
  assign InstructionDecode_io_dmem_data = io_dmemRsp_bits_dataResponse; // @[Core.scala 387:16]
  assign InstructionDecode_io_ex_stall = Execute_io_stall; // @[Core.scala 280:15]
  assign InstructionDecode_io_f_read_reg_0_0 = id_reg_f_read_0; // @[Core.scala 239:31]
  assign InstructionDecode_io_f_read_reg_1_0 = ex_reg_f_read_0; // @[Core.scala 240:31]
  assign InstructionDecode_io_f_read_reg_1_1 = ex_reg_f_read_1; // @[Core.scala 240:31]
  assign InstructionDecode_io_f_read_reg_2_0 = mem_reg_f_read_0; // @[Core.scala 241:31]
  assign InstructionDecode_io_f_read_reg_2_1 = mem_reg_f_read_1; // @[Core.scala 241:31]
  assign InstructionDecode_io_f_except_0_0 = Execute_io_exceptions_0; // @[Core.scala 295:24]
  assign InstructionDecode_io_f_except_0_1 = Execute_io_exceptions_1; // @[Core.scala 295:24]
  assign InstructionDecode_io_f_except_0_2 = Execute_io_exceptions_2; // @[Core.scala 295:24]
  assign InstructionDecode_io_f_except_0_3 = Execute_io_exceptions_3; // @[Core.scala 295:24]
  assign InstructionDecode_io_f_except_0_4 = Execute_io_exceptions_4; // @[Core.scala 295:24]
  assign InstructionDecode_io_f_except_1_0 = ex_reg_f_except_0; // @[Core.scala 344:24]
  assign InstructionDecode_io_f_except_1_1 = ex_reg_f_except_1; // @[Core.scala 344:24]
  assign InstructionDecode_io_f_except_1_2 = ex_reg_f_except_2; // @[Core.scala 344:24]
  assign InstructionDecode_io_f_except_1_3 = ex_reg_f_except_3; // @[Core.scala 344:24]
  assign InstructionDecode_io_f_except_1_4 = ex_reg_f_except_4; // @[Core.scala 344:24]
  assign InstructionDecode_io_f_except_2_0 = mem_reg_f_except_0; // @[Core.scala 391:24]
  assign InstructionDecode_io_f_except_2_1 = mem_reg_f_except_1; // @[Core.scala 391:24]
  assign InstructionDecode_io_f_except_2_2 = mem_reg_f_except_2; // @[Core.scala 391:24]
  assign InstructionDecode_io_f_except_2_3 = mem_reg_f_except_3; // @[Core.scala 391:24]
  assign InstructionDecode_io_f_except_2_4 = mem_reg_f_except_4; // @[Core.scala 391:24]
  assign InstructionDecode_io_is_f_in_0 = Execute_io_is_f_o; // @[Core.scala 397:33]
  assign InstructionDecode_io_is_f_in_1 = ex_reg_is_f; // @[Core.scala 397:33]
  assign InstructionDecode_io_is_f_in_2 = mem_reg_is_f; // @[Core.scala 397:33]
  assign Execute_clock = clock;
  assign Execute_reset = reset;
  assign Execute_io_immediate = id_reg_imm; // @[Core.scala 251:16]
  assign Execute_io_readData1 = id_reg_rd1; // @[Core.scala 252:16]
  assign Execute_io_readData2 = id_reg_rd2; // @[Core.scala 253:16]
  assign Execute_io_pcAddress = id_reg_pc; // @[Core.scala 254:16]
  assign Execute_io_func7 = id_reg_f7; // @[Core.scala 256:12]
  assign Execute_io_func3 = id_reg_f3; // @[Core.scala 255:12]
  assign Execute_io_mem_result = ex_reg_result; // @[Core.scala 336:17]
  assign Execute_io_wb_result = wb_data; // @[Core.scala 381:16]
  assign Execute_io_ex_mem_regWrite_0 = ex_reg_ctl_regWrite_0; // @[Core.scala 330:22]
  assign Execute_io_ex_mem_regWrite_1 = ex_reg_ctl_regWrite_1; // @[Core.scala 330:22]
  assign Execute_io_mem_wb_regWrite_0 = mem_reg_ctl_regWrite_0; // @[Core.scala 382:22]
  assign Execute_io_mem_wb_regWrite_1 = mem_reg_ctl_regWrite_1; // @[Core.scala 382:22]
  assign Execute_io_id_ex_ins = id_reg_ins; // @[Core.scala 271:16]
  assign Execute_io_ex_mem_ins = ex_reg_ins; // @[Core.scala 272:17]
  assign Execute_io_mem_wb_ins = mem_reg_ins; // @[Core.scala 273:17]
  assign Execute_io_ctl_aluSrc = id_reg_ctl_aluSrc; // @[Core.scala 257:17]
  assign Execute_io_ctl_aluOp = id_reg_ctl_aluOp; // @[Core.scala 258:16]
  assign Execute_io_ctl_aluSrc1 = id_reg_ctl_aluSrc1; // @[Core.scala 259:18]
  assign Execute_io_f_read_0 = id_reg_f_read_0; // @[Core.scala 289:19]
  assign Execute_io_f_read_1 = id_reg_f_read_1; // @[Core.scala 289:19]
  assign Execute_io_f_read_2 = id_reg_f_read_2; // @[Core.scala 289:19]
  assign Execute_io_readData3 = id_reg_rd3; // @[Core.scala 290:22]
  assign Execute_io_fcsr_o_data = id_reg_fcsr_o_data; // @[Core.scala 291:24]
  assign Execute_io_is_f_i = id_reg_is_f; // @[Core.scala 292:19]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_aluResultIn = ex_reg_result; // @[Core.scala 331:22]
  assign MEM_io_writeData = ex_reg_wd; // @[Core.scala 332:20]
  assign MEM_io_writeEnable = ex_reg_ctl_memWrite; // @[Core.scala 334:22]
  assign MEM_io_readEnable = ex_reg_ctl_memRead; // @[Core.scala 333:21]
  assign MEM_io_f3 = ex_reg_ins[14:12]; // @[Core.scala 335:26]
  assign MEM_io_dccmRsp_valid = io_dmemRsp_valid; // @[Core.scala 303:18]
  assign MEM_io_dccmRsp_bits_dataResponse = io_dmemRsp_bits_dataResponse; // @[Core.scala 303:18]
  assign pc_clock = clock;
  assign pc_reset = reset;
  assign pc_io_in = npc; // @[Core.scala 185:12]
  assign pc_io_halt = Execute_io_stall | InstructionDecode_io_stall | io_imemReq_valid; // @[Core.scala 174:41]
  always @(posedge clock) begin
    if (reset) begin // @[Core.scala 42:26]
      if_reg_pc <= 32'h0; // @[Core.scala 42:26]
    end else begin
      if_reg_pc <= pc_io_out;
    end
    if (reset) begin // @[Core.scala 43:27]
      if_reg_ins <= 32'h0; // @[Core.scala 43:27]
    end else if (InstructionDecode_io_ifid_flush) begin // @[Core.scala 191:23]
      if_reg_ins <= 32'h0; // @[Core.scala 192:16]
    end else begin
      if_reg_ins <= instruction;
    end
    if (reset) begin // @[Core.scala 46:26]
      id_reg_pc <= 32'h0; // @[Core.scala 46:26]
    end else begin
      id_reg_pc <= if_reg_pc; // @[Core.scala 207:13]
    end
    if (reset) begin // @[Core.scala 47:27]
      id_reg_rd1 <= 32'h0; // @[Core.scala 47:27]
    end else begin
      id_reg_rd1 <= InstructionDecode_io_readData1; // @[Core.scala 200:14]
    end
    if (reset) begin // @[Core.scala 48:27]
      id_reg_rd2 <= 32'h0; // @[Core.scala 48:27]
    end else begin
      id_reg_rd2 <= InstructionDecode_io_readData2; // @[Core.scala 201:14]
    end
    if (reset) begin // @[Core.scala 49:27]
      id_reg_imm <= 32'h0; // @[Core.scala 49:27]
    end else begin
      id_reg_imm <= InstructionDecode_io_immediate; // @[Core.scala 202:14]
    end
    if (reset) begin // @[Core.scala 50:27]
      id_reg_wra <= 5'h0; // @[Core.scala 50:27]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 282:17]
      id_reg_wra <= InstructionDecode_io_writeRegAddress; // @[Core.scala 203:14]
    end
    if (reset) begin // @[Core.scala 51:26]
      id_reg_f7 <= 7'h0; // @[Core.scala 51:26]
    end else begin
      id_reg_f7 <= InstructionDecode_io_func7; // @[Core.scala 205:13]
    end
    if (reset) begin // @[Core.scala 52:26]
      id_reg_f3 <= 3'h0; // @[Core.scala 52:26]
    end else begin
      id_reg_f3 <= InstructionDecode_io_func3; // @[Core.scala 204:13]
    end
    if (reset) begin // @[Core.scala 53:27]
      id_reg_ins <= 32'h0; // @[Core.scala 53:27]
    end else begin
      id_reg_ins <= if_reg_ins; // @[Core.scala 206:14]
    end
    if (reset) begin // @[Core.scala 54:34]
      id_reg_ctl_aluSrc <= 1'h0; // @[Core.scala 54:34]
    end else begin
      id_reg_ctl_aluSrc <= InstructionDecode_io_ctl_aluSrc; // @[Core.scala 208:21]
    end
    if (reset) begin // @[Core.scala 55:35]
      id_reg_ctl_aluSrc1 <= 2'h0; // @[Core.scala 55:35]
    end else begin
      id_reg_ctl_aluSrc1 <= InstructionDecode_io_ctl_aluSrc1; // @[Core.scala 216:22]
    end
    if (reset) begin // @[Core.scala 56:36]
      id_reg_ctl_memToReg <= 2'h0; // @[Core.scala 56:36]
    end else begin
      id_reg_ctl_memToReg <= InstructionDecode_io_ctl_memToReg; // @[Core.scala 209:23]
    end
    if (reset) begin // @[Core.scala 57:36]
      id_reg_ctl_regWrite_0 <= 1'h0; // @[Core.scala 57:36]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 282:17]
      id_reg_ctl_regWrite_0 <= InstructionDecode_io_ctl_regWrite_0; // @[Core.scala 210:23]
    end
    if (reset) begin // @[Core.scala 57:36]
      id_reg_ctl_regWrite_1 <= 1'h0; // @[Core.scala 57:36]
    end else if (!(Execute_io_stall)) begin // @[Core.scala 282:17]
      id_reg_ctl_regWrite_1 <= InstructionDecode_io_ctl_regWrite_1; // @[Core.scala 210:23]
    end
    if (reset) begin // @[Core.scala 58:35]
      id_reg_ctl_memRead <= 1'h0; // @[Core.scala 58:35]
    end else begin
      id_reg_ctl_memRead <= InstructionDecode_io_ctl_memRead; // @[Core.scala 211:22]
    end
    if (reset) begin // @[Core.scala 59:36]
      id_reg_ctl_memWrite <= 1'h0; // @[Core.scala 59:36]
    end else begin
      id_reg_ctl_memWrite <= InstructionDecode_io_ctl_memWrite; // @[Core.scala 212:23]
    end
    if (reset) begin // @[Core.scala 61:33]
      id_reg_ctl_aluOp <= 2'h0; // @[Core.scala 61:33]
    end else begin
      id_reg_ctl_aluOp <= InstructionDecode_io_ctl_aluOp; // @[Core.scala 214:20]
    end
    if (reset) begin // @[Core.scala 63:30]
      id_reg_is_csr <= 1'h0; // @[Core.scala 63:30]
    end else begin
      id_reg_is_csr <= InstructionDecode_io_is_csr; // @[Core.scala 217:17]
    end
    if (reset) begin // @[Core.scala 64:32]
      id_reg_csr_data <= 32'h0; // @[Core.scala 64:32]
    end else begin
      id_reg_csr_data <= InstructionDecode_io_csr_o_data; // @[Core.scala 218:19]
    end
    id_reg_f_read_0 <= InstructionDecode_io_f_read_0; // @[Core.scala 234:23]
    id_reg_f_read_1 <= InstructionDecode_io_f_read_1; // @[Core.scala 234:23]
    id_reg_f_read_2 <= InstructionDecode_io_f_read_2; // @[Core.scala 234:23]
    if (reset) begin // @[Core.scala 67:39]
      id_reg_rd3 <= 32'h0; // @[Core.scala 67:39]
    end else begin
      id_reg_rd3 <= InstructionDecode_io_readData3; // @[Core.scala 235:20]
    end
    if (reset) begin // @[Core.scala 68:47]
      id_reg_fcsr_o_data <= 32'h0; // @[Core.scala 68:47]
    end else begin
      id_reg_fcsr_o_data <= InstructionDecode_io_fcsr_o_data; // @[Core.scala 236:28]
    end
    if (reset) begin // @[Core.scala 69:40]
      id_reg_is_f <= 1'h0; // @[Core.scala 69:40]
    end else begin
      id_reg_is_f <= InstructionDecode_io_is_f; // @[Core.scala 237:21]
    end
    if (reset) begin // @[Core.scala 74:30]
      ex_reg_result <= 32'h0; // @[Core.scala 74:30]
    end else begin
      ex_reg_result <= Execute_io_ALUresult; // @[Core.scala 324:19]
    end
    if (reset) begin // @[Core.scala 75:26]
      ex_reg_wd <= 32'h0; // @[Core.scala 75:26]
    end else begin
      ex_reg_wd <= Execute_io_writeData; // @[Core.scala 323:15]
    end
    if (reset) begin // @[Core.scala 76:27]
      ex_reg_wra <= 5'h0; // @[Core.scala 76:27]
    end else begin
      ex_reg_wra <= id_reg_wra; // @[Core.scala 263:14]
    end
    if (reset) begin // @[Core.scala 77:27]
      ex_reg_ins <= 32'h0; // @[Core.scala 77:27]
    end else begin
      ex_reg_ins <= id_reg_ins; // @[Core.scala 264:14]
    end
    if (reset) begin // @[Core.scala 78:36]
      ex_reg_ctl_memToReg <= 2'h0; // @[Core.scala 78:36]
    end else begin
      ex_reg_ctl_memToReg <= id_reg_ctl_memToReg; // @[Core.scala 265:23]
    end
    if (reset) begin // @[Core.scala 79:36]
      ex_reg_ctl_regWrite_0 <= 1'h0; // @[Core.scala 79:36]
    end else begin
      ex_reg_ctl_regWrite_0 <= id_reg_ctl_regWrite_0; // @[Core.scala 266:23]
    end
    if (reset) begin // @[Core.scala 79:36]
      ex_reg_ctl_regWrite_1 <= 1'h0; // @[Core.scala 79:36]
    end else begin
      ex_reg_ctl_regWrite_1 <= id_reg_ctl_regWrite_1; // @[Core.scala 266:23]
    end
    if (reset) begin // @[Core.scala 80:35]
      ex_reg_ctl_memRead <= 1'h0; // @[Core.scala 80:35]
    end else begin
      ex_reg_ctl_memRead <= id_reg_ctl_memRead; // @[Core.scala 321:24]
    end
    if (reset) begin // @[Core.scala 81:36]
      ex_reg_ctl_memWrite <= 1'h0; // @[Core.scala 81:36]
    end else begin
      ex_reg_ctl_memWrite <= id_reg_ctl_memWrite; // @[Core.scala 322:25]
    end
    if (reset) begin // @[Core.scala 83:26]
      ex_reg_pc <= 32'h0; // @[Core.scala 83:26]
    end else begin
      ex_reg_pc <= id_reg_pc; // @[Core.scala 262:13]
    end
    if (reset) begin // @[Core.scala 84:30]
      ex_reg_is_csr <= 1'h0; // @[Core.scala 84:30]
    end else begin
      ex_reg_is_csr <= id_reg_is_csr; // @[Core.scala 267:17]
    end
    if (reset) begin // @[Core.scala 85:32]
      ex_reg_csr_data <= 32'h0; // @[Core.scala 85:32]
    end else begin
      ex_reg_csr_data <= id_reg_csr_data; // @[Core.scala 268:19]
    end
    ex_reg_f_read_0 <= id_reg_f_read_0; // @[Core.scala 288:23]
    ex_reg_f_read_1 <= id_reg_f_read_1; // @[Core.scala 288:23]
    if (reset) begin // @[Core.scala 88:44]
      ex_reg_f_except_0 <= 1'h0; // @[Core.scala 88:44]
    end else begin
      ex_reg_f_except_0 <= Execute_io_exceptions_0; // @[Core.scala 293:25]
    end
    if (reset) begin // @[Core.scala 88:44]
      ex_reg_f_except_1 <= 1'h0; // @[Core.scala 88:44]
    end else begin
      ex_reg_f_except_1 <= Execute_io_exceptions_1; // @[Core.scala 293:25]
    end
    if (reset) begin // @[Core.scala 88:44]
      ex_reg_f_except_2 <= 1'h0; // @[Core.scala 88:44]
    end else begin
      ex_reg_f_except_2 <= Execute_io_exceptions_2; // @[Core.scala 293:25]
    end
    if (reset) begin // @[Core.scala 88:44]
      ex_reg_f_except_3 <= 1'h0; // @[Core.scala 88:44]
    end else begin
      ex_reg_f_except_3 <= Execute_io_exceptions_3; // @[Core.scala 293:25]
    end
    if (reset) begin // @[Core.scala 88:44]
      ex_reg_f_except_4 <= 1'h0; // @[Core.scala 88:44]
    end else begin
      ex_reg_f_except_4 <= Execute_io_exceptions_4; // @[Core.scala 293:25]
    end
    if (reset) begin // @[Core.scala 89:40]
      ex_reg_is_f <= 1'h0; // @[Core.scala 89:40]
    end else begin
      ex_reg_is_f <= Execute_io_is_f_o; // @[Core.scala 294:21]
    end
    if (reset) begin // @[Core.scala 92:27]
      mem_reg_rd <= 32'h0; // @[Core.scala 92:27]
    end else begin
      mem_reg_rd <= MEM_io_readData; // @[Core.scala 315:16]
    end
    if (reset) begin // @[Core.scala 93:28]
      mem_reg_ins <= 32'h0; // @[Core.scala 93:28]
    end else begin
      mem_reg_ins <= ex_reg_ins; // @[Core.scala 319:17]
    end
    if (reset) begin // @[Core.scala 94:31]
      mem_reg_result <= 32'h0; // @[Core.scala 94:31]
    end else begin
      mem_reg_result <= ex_reg_result; // @[Core.scala 316:20]
    end
    if (reset) begin // @[Core.scala 96:28]
      mem_reg_wra <= 5'h0; // @[Core.scala 96:28]
    end else begin
      mem_reg_wra <= ex_reg_wra; // @[Core.scala 326:15]
    end
    if (reset) begin // @[Core.scala 97:37]
      mem_reg_ctl_memToReg <= 2'h0; // @[Core.scala 97:37]
    end else begin
      mem_reg_ctl_memToReg <= ex_reg_ctl_memToReg; // @[Core.scala 327:24]
    end
    if (reset) begin // @[Core.scala 98:37]
      mem_reg_ctl_regWrite_0 <= 1'h0; // @[Core.scala 98:37]
    end else begin
      mem_reg_ctl_regWrite_0 <= ex_reg_ctl_regWrite_0; // @[Core.scala 318:26]
    end
    if (reset) begin // @[Core.scala 98:37]
      mem_reg_ctl_regWrite_1 <= 1'h0; // @[Core.scala 98:37]
    end else begin
      mem_reg_ctl_regWrite_1 <= ex_reg_ctl_regWrite_1; // @[Core.scala 318:26]
    end
    if (reset) begin // @[Core.scala 99:27]
      mem_reg_pc <= 32'h0; // @[Core.scala 99:27]
    end else begin
      mem_reg_pc <= ex_reg_pc; // @[Core.scala 320:16]
    end
    if (reset) begin // @[Core.scala 100:31]
      mem_reg_is_csr <= 1'h0; // @[Core.scala 100:31]
    end else begin
      mem_reg_is_csr <= ex_reg_is_csr; // @[Core.scala 328:18]
    end
    if (reset) begin // @[Core.scala 101:33]
      mem_reg_csr_data <= 32'h0; // @[Core.scala 101:33]
    end else begin
      mem_reg_csr_data <= ex_reg_csr_data; // @[Core.scala 329:20]
    end
    mem_reg_f_read_0 <= ex_reg_f_read_0; // @[Core.scala 341:24]
    mem_reg_f_read_1 <= ex_reg_f_read_1; // @[Core.scala 341:24]
    if (reset) begin // @[Core.scala 104:45]
      mem_reg_f_except_0 <= 1'h0; // @[Core.scala 104:45]
    end else begin
      mem_reg_f_except_0 <= ex_reg_f_except_0; // @[Core.scala 342:26]
    end
    if (reset) begin // @[Core.scala 104:45]
      mem_reg_f_except_1 <= 1'h0; // @[Core.scala 104:45]
    end else begin
      mem_reg_f_except_1 <= ex_reg_f_except_1; // @[Core.scala 342:26]
    end
    if (reset) begin // @[Core.scala 104:45]
      mem_reg_f_except_2 <= 1'h0; // @[Core.scala 104:45]
    end else begin
      mem_reg_f_except_2 <= ex_reg_f_except_2; // @[Core.scala 342:26]
    end
    if (reset) begin // @[Core.scala 104:45]
      mem_reg_f_except_3 <= 1'h0; // @[Core.scala 104:45]
    end else begin
      mem_reg_f_except_3 <= ex_reg_f_except_3; // @[Core.scala 342:26]
    end
    if (reset) begin // @[Core.scala 104:45]
      mem_reg_f_except_4 <= 1'h0; // @[Core.scala 104:45]
    end else begin
      mem_reg_f_except_4 <= ex_reg_f_except_4; // @[Core.scala 342:26]
    end
    if (reset) begin // @[Core.scala 105:41]
      mem_reg_is_f <= 1'h0; // @[Core.scala 105:41]
    end else begin
      mem_reg_is_f <= ex_reg_is_f; // @[Core.scala 343:22]
    end
    io_rvfi_uint4_REG <= MEM_io_wmask; // @[Tracer.scala 87:14]
    io_rvfi_uint5_0_REG <= InstructionDecode_io_raddr_0; // @[Tracer.scala 87:14]
    io_rvfi_uint5_0_REG_1 <= io_rvfi_uint5_0_REG; // @[Tracer.scala 89:14]
    io_rvfi_uint5_0_REG_2 <= io_rvfi_uint5_0_REG_1; // @[Tracer.scala 89:14]
    io_rvfi_uint5_1_REG <= InstructionDecode_io_raddr_1; // @[Tracer.scala 87:14]
    io_rvfi_uint5_1_REG_1 <= io_rvfi_uint5_1_REG; // @[Tracer.scala 89:14]
    io_rvfi_uint5_1_REG_2 <= io_rvfi_uint5_1_REG_1; // @[Tracer.scala 89:14]
    REG <= Execute_io_rs1_rdata; // @[Tracer.scala 87:14]
    REG_1 <= REG; // @[Tracer.scala 89:14]
    REG_2 <= ex_reg_wd; // @[Tracer.scala 87:14]
    REG_3 <= InstructionDecode_io_hdu_pcWrite ? $signed(_npc_T_2) : $signed(pc_io_out); // @[Core.scala 419:21]
    REG_4 <= REG_3; // @[Tracer.scala 89:14]
    REG_5 <= REG_4; // @[Tracer.scala 89:14]
    REG_6 <= REG_5; // @[Tracer.scala 89:14]
    REG_7 <= MEM_io_dccmReq_valid; // @[Tracer.scala 87:14]
    REG_8 <= ex_reg_result; // @[Tracer.scala 87:14]
    REG_9 <= ex_reg_ctl_memRead; // @[Tracer.scala 87:14]
    REG_10 <= ex_reg_ctl_memWrite; // @[Tracer.scala 87:14]
    REG_11 <= MEM_io_dccmReq_bits_dataRequest; // @[Tracer.scala 87:14]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  if_reg_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  if_reg_ins = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  id_reg_pc = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  id_reg_rd1 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  id_reg_rd2 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  id_reg_imm = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  id_reg_wra = _RAND_6[4:0];
  _RAND_7 = {1{`RANDOM}};
  id_reg_f7 = _RAND_7[6:0];
  _RAND_8 = {1{`RANDOM}};
  id_reg_f3 = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  id_reg_ins = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  id_reg_ctl_aluSrc = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  id_reg_ctl_aluSrc1 = _RAND_11[1:0];
  _RAND_12 = {1{`RANDOM}};
  id_reg_ctl_memToReg = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  id_reg_ctl_regWrite_0 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  id_reg_ctl_regWrite_1 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  id_reg_ctl_memRead = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  id_reg_ctl_memWrite = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  id_reg_ctl_aluOp = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  id_reg_is_csr = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  id_reg_csr_data = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  id_reg_f_read_0 = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  id_reg_f_read_1 = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  id_reg_f_read_2 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  id_reg_rd3 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  id_reg_fcsr_o_data = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  id_reg_is_f = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  ex_reg_result = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  ex_reg_wd = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  ex_reg_wra = _RAND_28[4:0];
  _RAND_29 = {1{`RANDOM}};
  ex_reg_ins = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  ex_reg_ctl_memToReg = _RAND_30[1:0];
  _RAND_31 = {1{`RANDOM}};
  ex_reg_ctl_regWrite_0 = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  ex_reg_ctl_regWrite_1 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  ex_reg_ctl_memRead = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  ex_reg_ctl_memWrite = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  ex_reg_pc = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  ex_reg_is_csr = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  ex_reg_csr_data = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  ex_reg_f_read_0 = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  ex_reg_f_read_1 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  ex_reg_f_except_0 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  ex_reg_f_except_1 = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  ex_reg_f_except_2 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  ex_reg_f_except_3 = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  ex_reg_f_except_4 = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  ex_reg_is_f = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  mem_reg_rd = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  mem_reg_ins = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  mem_reg_result = _RAND_48[31:0];
  _RAND_49 = {1{`RANDOM}};
  mem_reg_wra = _RAND_49[4:0];
  _RAND_50 = {1{`RANDOM}};
  mem_reg_ctl_memToReg = _RAND_50[1:0];
  _RAND_51 = {1{`RANDOM}};
  mem_reg_ctl_regWrite_0 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  mem_reg_ctl_regWrite_1 = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  mem_reg_pc = _RAND_53[31:0];
  _RAND_54 = {1{`RANDOM}};
  mem_reg_is_csr = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  mem_reg_csr_data = _RAND_55[31:0];
  _RAND_56 = {1{`RANDOM}};
  mem_reg_f_read_0 = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  mem_reg_f_read_1 = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  mem_reg_f_except_0 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  mem_reg_f_except_1 = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  mem_reg_f_except_2 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  mem_reg_f_except_3 = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  mem_reg_f_except_4 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  mem_reg_is_f = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  io_rvfi_uint4_REG = _RAND_64[3:0];
  _RAND_65 = {1{`RANDOM}};
  io_rvfi_uint5_0_REG = _RAND_65[4:0];
  _RAND_66 = {1{`RANDOM}};
  io_rvfi_uint5_0_REG_1 = _RAND_66[4:0];
  _RAND_67 = {1{`RANDOM}};
  io_rvfi_uint5_0_REG_2 = _RAND_67[4:0];
  _RAND_68 = {1{`RANDOM}};
  io_rvfi_uint5_1_REG = _RAND_68[4:0];
  _RAND_69 = {1{`RANDOM}};
  io_rvfi_uint5_1_REG_1 = _RAND_69[4:0];
  _RAND_70 = {1{`RANDOM}};
  io_rvfi_uint5_1_REG_2 = _RAND_70[4:0];
  _RAND_71 = {1{`RANDOM}};
  REG = _RAND_71[31:0];
  _RAND_72 = {1{`RANDOM}};
  REG_1 = _RAND_72[31:0];
  _RAND_73 = {1{`RANDOM}};
  REG_2 = _RAND_73[31:0];
  _RAND_74 = {1{`RANDOM}};
  REG_3 = _RAND_74[31:0];
  _RAND_75 = {1{`RANDOM}};
  REG_4 = _RAND_75[31:0];
  _RAND_76 = {1{`RANDOM}};
  REG_5 = _RAND_76[31:0];
  _RAND_77 = {1{`RANDOM}};
  REG_6 = _RAND_77[31:0];
  _RAND_78 = {1{`RANDOM}};
  REG_7 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  REG_8 = _RAND_79[31:0];
  _RAND_80 = {1{`RANDOM}};
  REG_9 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  REG_10 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  REG_11 = _RAND_82[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRamTop(
  input         clock,
  input         reset,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clk_i; // @[SRamTop.scala 27:22]
  wire  sram_rst_i; // @[SRamTop.scala 27:22]
  wire  sram_csb_i; // @[SRamTop.scala 27:22]
  wire  sram_we_i; // @[SRamTop.scala 27:22]
  wire [3:0] sram_wmask_i; // @[SRamTop.scala 27:22]
  wire [27:0] sram_addr_i; // @[SRamTop.scala 27:22]
  wire [31:0] sram_wdata_i; // @[SRamTop.scala 27:22]
  wire [31:0] sram_rdata_o; // @[SRamTop.scala 27:22]
  reg [1:0] state_reg; // @[SRamTop.scala 14:38]
  wire  _state_reg_T_3 = state_reg == 2'h0 | state_reg == 2'h2; // @[SRamTop.scala 16:27]
  wire  _state_reg_T_5 = state_reg == 2'h1 & io_req_valid; // @[SRamTop.scala 17:27]
  sram_top #(.IFILE_IN("/home/mhussain/XSoC-Lite/output/kyber_demo.c/dmem.hex")) sram ( // @[SRamTop.scala 27:22]
    .clk_i(sram_clk_i),
    .rst_i(sram_rst_i),
    .csb_i(sram_csb_i),
    .we_i(sram_we_i),
    .wmask_i(sram_wmask_i),
    .addr_i(sram_addr_i),
    .wdata_i(sram_wdata_i),
    .rdata_o(sram_rdata_o)
  );
  assign io_rsp_valid = state_reg == 2'h2; // @[SRamTop.scala 21:31]
  assign io_rsp_bits_dataResponse = sram_rdata_o; // @[SRamTop.scala 69:30]
  assign sram_clk_i = clock; // @[SRamTop.scala 29:30]
  assign sram_rst_i = reset; // @[SRamTop.scala 31:18]
  assign sram_csb_i = ~io_req_valid; // @[SRamTop.scala 35:22]
  assign sram_we_i = io_req_valid & ~io_req_bits_isWrite; // @[SRamTop.scala 47:27]
  assign sram_wmask_i = io_req_bits_activeByteLane; // @[SRamTop.scala 54:58 60:29]
  assign sram_addr_i = io_req_bits_addrRequest[27:0];
  assign sram_wdata_i = io_req_bits_dataRequest; // @[SRamTop.scala 54:58 62:29]
  always @(posedge clock) begin
    if (reset) begin // @[SRamTop.scala 14:38]
      state_reg <= 2'h0; // @[SRamTop.scala 14:38]
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      state_reg <= 2'h1;
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      state_reg <= 2'h2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_reg = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRamTop_1(
  input         clock,
  input         reset,
  output        io_req_ready,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input         io_rsp_ready,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clk_i; // @[SRamTop.scala 27:22]
  wire  sram_rst_i; // @[SRamTop.scala 27:22]
  wire  sram_csb_i; // @[SRamTop.scala 27:22]
  wire  sram_we_i; // @[SRamTop.scala 27:22]
  wire [3:0] sram_wmask_i; // @[SRamTop.scala 27:22]
  wire [27:0] sram_addr_i; // @[SRamTop.scala 27:22]
  wire [31:0] sram_wdata_i; // @[SRamTop.scala 27:22]
  wire [31:0] sram_rdata_o; // @[SRamTop.scala 27:22]
  reg [1:0] state_reg; // @[SRamTop.scala 14:38]
  wire  _state_reg_T_3 = state_reg == 2'h0 | state_reg == 2'h2 & io_rsp_ready; // @[SRamTop.scala 16:27]
  wire  _state_reg_T_5 = state_reg == 2'h1 & io_req_valid; // @[SRamTop.scala 17:27]
  sram_top #(.IFILE_IN("/home/mhussain/XSoC-Lite/output/kyber_demo.c/imem.hex")) sram ( // @[SRamTop.scala 27:22]
    .clk_i(sram_clk_i),
    .rst_i(sram_rst_i),
    .csb_i(sram_csb_i),
    .we_i(sram_we_i),
    .wmask_i(sram_wmask_i),
    .addr_i(sram_addr_i),
    .wdata_i(sram_wdata_i),
    .rdata_o(sram_rdata_o)
  );
  assign io_req_ready = state_reg == 2'h1; // @[SRamTop.scala 22:31]
  assign io_rsp_valid = state_reg == 2'h2; // @[SRamTop.scala 21:31]
  assign io_rsp_bits_dataResponse = sram_rdata_o; // @[SRamTop.scala 69:30]
  assign sram_clk_i = clock; // @[SRamTop.scala 29:30]
  assign sram_rst_i = reset; // @[SRamTop.scala 31:18]
  assign sram_csb_i = ~io_req_valid; // @[SRamTop.scala 35:22]
  assign sram_we_i = io_req_valid; // @[SRamTop.scala 47:27]
  assign sram_wmask_i = 4'hf; // @[SRamTop.scala 54:58 60:29]
  assign sram_addr_i = io_req_bits_addrRequest[27:0];
  assign sram_wdata_i = 32'h0; // @[SRamTop.scala 54:58 62:29]
  always @(posedge clock) begin
    if (reset) begin // @[SRamTop.scala 14:38]
      state_reg <= 2'h0; // @[SRamTop.scala 14:38]
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      state_reg <= 2'h1;
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      state_reg <= 2'h2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_reg = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Tracer(
  input         rvfi_i_bool,
  input  [3:0]  rvfi_i_uint4,
  input  [4:0]  rvfi_i_uint5_0,
  input  [4:0]  rvfi_i_uint5_1,
  input  [4:0]  rvfi_i_uint5_2,
  input  [31:0] rvfi_i_uint32_0,
  input  [31:0] rvfi_i_uint32_1,
  input  [31:0] rvfi_i_uint32_2,
  input  [31:0] rvfi_i_uint32_3,
  input  [31:0] rvfi_i_uint32_4,
  input  [31:0] rvfi_i_uint32_5,
  input  [31:0] rvfi_i_uint32_6,
  input  [31:0] rvfi_i_uint32_7,
  input  [31:0] rvfi_i_uint32_8,
  output        rvfi_o_valid_0,
  output [31:0] rvfi_o_insn_0,
  output [4:0]  rvfi_o_rs1_addr_0,
  output [4:0]  rvfi_o_rs2_addr_0,
  output [31:0] rvfi_o_rs1_rdata_0,
  output [31:0] rvfi_o_rs2_rdata_0,
  output [4:0]  rvfi_o_rd_addr_0,
  output [31:0] rvfi_o_rd_wdata_0,
  output [31:0] rvfi_o_pc_rdata_0,
  output [31:0] rvfi_o_pc_wdata_0,
  output [31:0] rvfi_o_mem_addr_0,
  output [3:0]  rvfi_o_mem_wmask_0,
  output [31:0] rvfi_o_mem_rdata_0,
  output [31:0] rvfi_o_mem_wdata_0
);
  assign rvfi_o_valid_0 = rvfi_i_bool; // @[Tracer.scala 55:19]
  assign rvfi_o_insn_0 = rvfi_i_uint32_0; // @[Tracer.scala 78:18]
  assign rvfi_o_rs1_addr_0 = rvfi_i_uint5_0; // @[Tracer.scala 64:18]
  assign rvfi_o_rs2_addr_0 = rvfi_i_uint5_1; // @[Tracer.scala 64:18]
  assign rvfi_o_rs1_rdata_0 = rvfi_i_uint32_1; // @[Tracer.scala 78:18]
  assign rvfi_o_rs2_rdata_0 = rvfi_i_uint32_2; // @[Tracer.scala 78:18]
  assign rvfi_o_rd_addr_0 = rvfi_i_uint5_2; // @[Tracer.scala 64:18]
  assign rvfi_o_rd_wdata_0 = rvfi_i_uint32_3; // @[Tracer.scala 78:18]
  assign rvfi_o_pc_rdata_0 = rvfi_i_uint32_4; // @[Tracer.scala 78:18]
  assign rvfi_o_pc_wdata_0 = rvfi_i_uint32_5; // @[Tracer.scala 78:18]
  assign rvfi_o_mem_addr_0 = rvfi_i_uint32_6; // @[Tracer.scala 78:18]
  assign rvfi_o_mem_wmask_0 = rvfi_i_uint4; // @[Tracer.scala 57:23]
  assign rvfi_o_mem_rdata_0 = rvfi_i_uint32_7; // @[Tracer.scala 78:18]
  assign rvfi_o_mem_wdata_0 = rvfi_i_uint32_8; // @[Tracer.scala 78:18]
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_pin,
  output        io_rvfi_valid_0,
  output [31:0] io_rvfi_insn_0,
  output [4:0]  io_rvfi_rs1_addr_0,
  output [4:0]  io_rvfi_rs2_addr_0,
  output [31:0] io_rvfi_rs1_rdata_0,
  output [31:0] io_rvfi_rs2_rdata_0,
  output [4:0]  io_rvfi_rd_addr_0,
  output [31:0] io_rvfi_rd_wdata_0,
  output [31:0] io_rvfi_pc_rdata_0,
  output [31:0] io_rvfi_pc_wdata_0,
  output [31:0] io_rvfi_mem_addr_0,
  output [3:0]  io_rvfi_mem_wmask_0,
  output [31:0] io_rvfi_mem_rdata_0,
  output [31:0] io_rvfi_mem_wdata_0,
  input         io_baby_kyber_req_ready,
  output        io_baby_kyber_req_valid,
  output [31:0] io_baby_kyber_req_bits_addrRequest,
  output [31:0] io_baby_kyber_req_bits_dataRequest,
  output [3:0]  io_baby_kyber_req_bits_activeByteLane,
  output        io_baby_kyber_req_bits_isWrite,
  input         io_baby_kyber_rsp_valid,
  input  [31:0] io_baby_kyber_rsp_bits_dataResponse,
  input         io_baby_kyber_cio_babykyber_intr_key,
  input         io_baby_kyber_cio_babykyber_intr_encrypt,
  input         io_baby_kyber_cio_babykyber_intr_decrypt,
  output        io_key_enable_trigger,
  output        io_encryption_enable_trigger,
  output        io_decryption_enable_trigger
);
  wire  core_clock; // @[Top.scala 57:26]
  wire  core_reset; // @[Top.scala 57:26]
  wire [31:0] core_io_pin; // @[Top.scala 57:26]
  wire  core_io_dmemReq_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_dmemReq_bits_addrRequest; // @[Top.scala 57:26]
  wire [31:0] core_io_dmemReq_bits_dataRequest; // @[Top.scala 57:26]
  wire [3:0] core_io_dmemReq_bits_activeByteLane; // @[Top.scala 57:26]
  wire  core_io_dmemReq_bits_isWrite; // @[Top.scala 57:26]
  wire  core_io_dmemRsp_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_dmemRsp_bits_dataResponse; // @[Top.scala 57:26]
  wire  core_io_imemReq_ready; // @[Top.scala 57:26]
  wire  core_io_imemReq_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_imemReq_bits_addrRequest; // @[Top.scala 57:26]
  wire  core_io_imemRsp_ready; // @[Top.scala 57:26]
  wire  core_io_imemRsp_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_imemRsp_bits_dataResponse; // @[Top.scala 57:26]
  wire  core_io_rvfi_bool; // @[Top.scala 57:26]
  wire [3:0] core_io_rvfi_uint4; // @[Top.scala 57:26]
  wire [4:0] core_io_rvfi_uint5_0; // @[Top.scala 57:26]
  wire [4:0] core_io_rvfi_uint5_1; // @[Top.scala 57:26]
  wire [4:0] core_io_rvfi_uint5_2; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_0; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_1; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_2; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_3; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_4; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_5; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_6; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_7; // @[Top.scala 57:26]
  wire [31:0] core_io_rvfi_uint32_8; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_req_ready; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_req_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_baby_kyber_req_bits_addrRequest; // @[Top.scala 57:26]
  wire [31:0] core_io_baby_kyber_req_bits_dataRequest; // @[Top.scala 57:26]
  wire [3:0] core_io_baby_kyber_req_bits_activeByteLane; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_req_bits_isWrite; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_rsp_ready; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_rsp_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_baby_kyber_rsp_bits_dataResponse; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_rsp_bits_error; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_cio_babykyber_intr_key; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_cio_babykyber_intr_encrypt; // @[Top.scala 57:26]
  wire  core_io_baby_kyber_cio_babykyber_intr_decrypt; // @[Top.scala 57:26]
  wire  core_io_uart_req_ready; // @[Top.scala 57:26]
  wire  core_io_uart_req_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_uart_req_bits_addrRequest; // @[Top.scala 57:26]
  wire [31:0] core_io_uart_req_bits_dataRequest; // @[Top.scala 57:26]
  wire [3:0] core_io_uart_req_bits_activeByteLane; // @[Top.scala 57:26]
  wire  core_io_uart_req_bits_isWrite; // @[Top.scala 57:26]
  wire  core_io_uart_rsp_ready; // @[Top.scala 57:26]
  wire  core_io_uart_rsp_valid; // @[Top.scala 57:26]
  wire [31:0] core_io_uart_rsp_bits_dataResponse; // @[Top.scala 57:26]
  wire  core_io_uart_rsp_bits_error; // @[Top.scala 57:26]
  wire  core_io_uart_cio_uart_rx_i; // @[Top.scala 57:26]
  wire  core_io_uart_cio_uart_tx_o; // @[Top.scala 57:26]
  wire  core_io_uart_cio_uart_intr_tx_o; // @[Top.scala 57:26]
  wire  core_io_key_enable_trigger; // @[Top.scala 57:26]
  wire  core_io_encryption_enable_trigger; // @[Top.scala 57:26]
  wire  core_io_decryption_enable_trigger; // @[Top.scala 57:26]
  wire  dmem_clock; // @[Top.scala 111:20]
  wire  dmem_reset; // @[Top.scala 111:20]
  wire  dmem_io_req_valid; // @[Top.scala 111:20]
  wire [31:0] dmem_io_req_bits_addrRequest; // @[Top.scala 111:20]
  wire [31:0] dmem_io_req_bits_dataRequest; // @[Top.scala 111:20]
  wire [3:0] dmem_io_req_bits_activeByteLane; // @[Top.scala 111:20]
  wire  dmem_io_req_bits_isWrite; // @[Top.scala 111:20]
  wire  dmem_io_rsp_valid; // @[Top.scala 111:20]
  wire [31:0] dmem_io_rsp_bits_dataResponse; // @[Top.scala 111:20]
  wire  imem_clock; // @[Top.scala 112:20]
  wire  imem_reset; // @[Top.scala 112:20]
  wire  imem_io_req_ready; // @[Top.scala 112:20]
  wire  imem_io_req_valid; // @[Top.scala 112:20]
  wire [31:0] imem_io_req_bits_addrRequest; // @[Top.scala 112:20]
  wire  imem_io_rsp_ready; // @[Top.scala 112:20]
  wire  imem_io_rsp_valid; // @[Top.scala 112:20]
  wire [31:0] imem_io_rsp_bits_dataResponse; // @[Top.scala 112:20]
  wire  tracer_rvfi_i_bool; // @[Top.scala 125:24]
  wire [3:0] tracer_rvfi_i_uint4; // @[Top.scala 125:24]
  wire [4:0] tracer_rvfi_i_uint5_0; // @[Top.scala 125:24]
  wire [4:0] tracer_rvfi_i_uint5_1; // @[Top.scala 125:24]
  wire [4:0] tracer_rvfi_i_uint5_2; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_1; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_2; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_3; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_4; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_5; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_6; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_7; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_i_uint32_8; // @[Top.scala 125:24]
  wire  tracer_rvfi_o_valid_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_insn_0; // @[Top.scala 125:24]
  wire [4:0] tracer_rvfi_o_rs1_addr_0; // @[Top.scala 125:24]
  wire [4:0] tracer_rvfi_o_rs2_addr_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_rs1_rdata_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_rs2_rdata_0; // @[Top.scala 125:24]
  wire [4:0] tracer_rvfi_o_rd_addr_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_rd_wdata_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_pc_rdata_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_pc_wdata_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_mem_addr_0; // @[Top.scala 125:24]
  wire [3:0] tracer_rvfi_o_mem_wmask_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_mem_rdata_0; // @[Top.scala 125:24]
  wire [31:0] tracer_rvfi_o_mem_wdata_0; // @[Top.scala 125:24]
  Core core ( // @[Top.scala 57:26]
    .clock(core_clock),
    .reset(core_reset),
    .io_pin(core_io_pin),
    .io_dmemReq_valid(core_io_dmemReq_valid),
    .io_dmemReq_bits_addrRequest(core_io_dmemReq_bits_addrRequest),
    .io_dmemReq_bits_dataRequest(core_io_dmemReq_bits_dataRequest),
    .io_dmemReq_bits_activeByteLane(core_io_dmemReq_bits_activeByteLane),
    .io_dmemReq_bits_isWrite(core_io_dmemReq_bits_isWrite),
    .io_dmemRsp_valid(core_io_dmemRsp_valid),
    .io_dmemRsp_bits_dataResponse(core_io_dmemRsp_bits_dataResponse),
    .io_imemReq_ready(core_io_imemReq_ready),
    .io_imemReq_valid(core_io_imemReq_valid),
    .io_imemReq_bits_addrRequest(core_io_imemReq_bits_addrRequest),
    .io_imemRsp_ready(core_io_imemRsp_ready),
    .io_imemRsp_valid(core_io_imemRsp_valid),
    .io_imemRsp_bits_dataResponse(core_io_imemRsp_bits_dataResponse),
    .io_rvfi_bool(core_io_rvfi_bool),
    .io_rvfi_uint4(core_io_rvfi_uint4),
    .io_rvfi_uint5_0(core_io_rvfi_uint5_0),
    .io_rvfi_uint5_1(core_io_rvfi_uint5_1),
    .io_rvfi_uint5_2(core_io_rvfi_uint5_2),
    .io_rvfi_uint32_0(core_io_rvfi_uint32_0),
    .io_rvfi_uint32_1(core_io_rvfi_uint32_1),
    .io_rvfi_uint32_2(core_io_rvfi_uint32_2),
    .io_rvfi_uint32_3(core_io_rvfi_uint32_3),
    .io_rvfi_uint32_4(core_io_rvfi_uint32_4),
    .io_rvfi_uint32_5(core_io_rvfi_uint32_5),
    .io_rvfi_uint32_6(core_io_rvfi_uint32_6),
    .io_rvfi_uint32_7(core_io_rvfi_uint32_7),
    .io_rvfi_uint32_8(core_io_rvfi_uint32_8),
    .io_baby_kyber_req_ready(core_io_baby_kyber_req_ready),
    .io_baby_kyber_req_valid(core_io_baby_kyber_req_valid),
    .io_baby_kyber_req_bits_addrRequest(core_io_baby_kyber_req_bits_addrRequest),
    .io_baby_kyber_req_bits_dataRequest(core_io_baby_kyber_req_bits_dataRequest),
    .io_baby_kyber_req_bits_activeByteLane(core_io_baby_kyber_req_bits_activeByteLane),
    .io_baby_kyber_req_bits_isWrite(core_io_baby_kyber_req_bits_isWrite),
    .io_baby_kyber_rsp_ready(core_io_baby_kyber_rsp_ready),
    .io_baby_kyber_rsp_valid(core_io_baby_kyber_rsp_valid),
    .io_baby_kyber_rsp_bits_dataResponse(core_io_baby_kyber_rsp_bits_dataResponse),
    .io_baby_kyber_rsp_bits_error(core_io_baby_kyber_rsp_bits_error),
    .io_baby_kyber_cio_babykyber_intr_key(core_io_baby_kyber_cio_babykyber_intr_key),
    .io_baby_kyber_cio_babykyber_intr_encrypt(core_io_baby_kyber_cio_babykyber_intr_encrypt),
    .io_baby_kyber_cio_babykyber_intr_decrypt(core_io_baby_kyber_cio_babykyber_intr_decrypt),
    .io_uart_req_ready(core_io_uart_req_ready),
    .io_uart_req_valid(core_io_uart_req_valid),
    .io_uart_req_bits_addrRequest(core_io_uart_req_bits_addrRequest),
    .io_uart_req_bits_dataRequest(core_io_uart_req_bits_dataRequest),
    .io_uart_req_bits_activeByteLane(core_io_uart_req_bits_activeByteLane),
    .io_uart_req_bits_isWrite(core_io_uart_req_bits_isWrite),
    .io_uart_rsp_ready(core_io_uart_rsp_ready),
    .io_uart_rsp_valid(core_io_uart_rsp_valid),
    .io_uart_rsp_bits_dataResponse(core_io_uart_rsp_bits_dataResponse),
    .io_uart_rsp_bits_error(core_io_uart_rsp_bits_error),
    .io_uart_cio_uart_rx_i(core_io_uart_cio_uart_rx_i),
    .io_uart_cio_uart_tx_o(core_io_uart_cio_uart_tx_o),
    .io_uart_cio_uart_intr_tx_o(core_io_uart_cio_uart_intr_tx_o),
    .io_key_enable_trigger(core_io_key_enable_trigger),
    .io_encryption_enable_trigger(core_io_encryption_enable_trigger),
    .io_decryption_enable_trigger(core_io_decryption_enable_trigger)
  );
  SRamTop dmem ( // @[Top.scala 111:20]
    .clock(dmem_clock),
    .reset(dmem_reset),
    .io_req_valid(dmem_io_req_valid),
    .io_req_bits_addrRequest(dmem_io_req_bits_addrRequest),
    .io_req_bits_dataRequest(dmem_io_req_bits_dataRequest),
    .io_req_bits_activeByteLane(dmem_io_req_bits_activeByteLane),
    .io_req_bits_isWrite(dmem_io_req_bits_isWrite),
    .io_rsp_valid(dmem_io_rsp_valid),
    .io_rsp_bits_dataResponse(dmem_io_rsp_bits_dataResponse)
  );
  SRamTop_1 imem ( // @[Top.scala 112:20]
    .clock(imem_clock),
    .reset(imem_reset),
    .io_req_ready(imem_io_req_ready),
    .io_req_valid(imem_io_req_valid),
    .io_req_bits_addrRequest(imem_io_req_bits_addrRequest),
    .io_rsp_ready(imem_io_rsp_ready),
    .io_rsp_valid(imem_io_rsp_valid),
    .io_rsp_bits_dataResponse(imem_io_rsp_bits_dataResponse)
  );
  Tracer tracer ( // @[Top.scala 125:24]
    .rvfi_i_bool(tracer_rvfi_i_bool),
    .rvfi_i_uint4(tracer_rvfi_i_uint4),
    .rvfi_i_uint5_0(tracer_rvfi_i_uint5_0),
    .rvfi_i_uint5_1(tracer_rvfi_i_uint5_1),
    .rvfi_i_uint5_2(tracer_rvfi_i_uint5_2),
    .rvfi_i_uint32_0(tracer_rvfi_i_uint32_0),
    .rvfi_i_uint32_1(tracer_rvfi_i_uint32_1),
    .rvfi_i_uint32_2(tracer_rvfi_i_uint32_2),
    .rvfi_i_uint32_3(tracer_rvfi_i_uint32_3),
    .rvfi_i_uint32_4(tracer_rvfi_i_uint32_4),
    .rvfi_i_uint32_5(tracer_rvfi_i_uint32_5),
    .rvfi_i_uint32_6(tracer_rvfi_i_uint32_6),
    .rvfi_i_uint32_7(tracer_rvfi_i_uint32_7),
    .rvfi_i_uint32_8(tracer_rvfi_i_uint32_8),
    .rvfi_o_valid_0(tracer_rvfi_o_valid_0),
    .rvfi_o_insn_0(tracer_rvfi_o_insn_0),
    .rvfi_o_rs1_addr_0(tracer_rvfi_o_rs1_addr_0),
    .rvfi_o_rs2_addr_0(tracer_rvfi_o_rs2_addr_0),
    .rvfi_o_rs1_rdata_0(tracer_rvfi_o_rs1_rdata_0),
    .rvfi_o_rs2_rdata_0(tracer_rvfi_o_rs2_rdata_0),
    .rvfi_o_rd_addr_0(tracer_rvfi_o_rd_addr_0),
    .rvfi_o_rd_wdata_0(tracer_rvfi_o_rd_wdata_0),
    .rvfi_o_pc_rdata_0(tracer_rvfi_o_pc_rdata_0),
    .rvfi_o_pc_wdata_0(tracer_rvfi_o_pc_wdata_0),
    .rvfi_o_mem_addr_0(tracer_rvfi_o_mem_addr_0),
    .rvfi_o_mem_wmask_0(tracer_rvfi_o_mem_wmask_0),
    .rvfi_o_mem_rdata_0(tracer_rvfi_o_mem_rdata_0),
    .rvfi_o_mem_wdata_0(tracer_rvfi_o_mem_wdata_0)
  );
  assign io_pin = core_io_pin; // @[Top.scala 122:10]
  assign io_rvfi_valid_0 = tracer_rvfi_o_valid_0; // @[Top.scala 127:13]
  assign io_rvfi_insn_0 = tracer_rvfi_o_insn_0; // @[Top.scala 127:13]
  assign io_rvfi_rs1_addr_0 = tracer_rvfi_o_rs1_addr_0; // @[Top.scala 127:13]
  assign io_rvfi_rs2_addr_0 = tracer_rvfi_o_rs2_addr_0; // @[Top.scala 127:13]
  assign io_rvfi_rs1_rdata_0 = tracer_rvfi_o_rs1_rdata_0; // @[Top.scala 127:13]
  assign io_rvfi_rs2_rdata_0 = tracer_rvfi_o_rs2_rdata_0; // @[Top.scala 127:13]
  assign io_rvfi_rd_addr_0 = tracer_rvfi_o_rd_addr_0; // @[Top.scala 127:13]
  assign io_rvfi_rd_wdata_0 = tracer_rvfi_o_rd_wdata_0; // @[Top.scala 127:13]
  assign io_rvfi_pc_rdata_0 = tracer_rvfi_o_pc_rdata_0; // @[Top.scala 127:13]
  assign io_rvfi_pc_wdata_0 = tracer_rvfi_o_pc_wdata_0; // @[Top.scala 127:13]
  assign io_rvfi_mem_addr_0 = tracer_rvfi_o_mem_addr_0; // @[Top.scala 127:13]
  assign io_rvfi_mem_wmask_0 = tracer_rvfi_o_mem_wmask_0; // @[Top.scala 127:13]
  assign io_rvfi_mem_rdata_0 = tracer_rvfi_o_mem_rdata_0; // @[Top.scala 127:13]
  assign io_rvfi_mem_wdata_0 = tracer_rvfi_o_mem_wdata_0; // @[Top.scala 127:13]
  assign io_baby_kyber_req_valid = core_io_baby_kyber_req_valid; // @[Top.scala 85:31]
  assign io_baby_kyber_req_bits_addrRequest = core_io_baby_kyber_req_bits_addrRequest; // @[Top.scala 86:30]
  assign io_baby_kyber_req_bits_dataRequest = core_io_baby_kyber_req_bits_dataRequest; // @[Top.scala 86:30]
  assign io_baby_kyber_req_bits_activeByteLane = core_io_baby_kyber_req_bits_activeByteLane; // @[Top.scala 86:30]
  assign io_baby_kyber_req_bits_isWrite = core_io_baby_kyber_req_bits_isWrite; // @[Top.scala 86:30]
  assign io_key_enable_trigger = core_io_key_enable_trigger; // @[Top.scala 78:25]
  assign io_encryption_enable_trigger = core_io_encryption_enable_trigger; // @[Top.scala 79:32]
  assign io_decryption_enable_trigger = core_io_decryption_enable_trigger; // @[Top.scala 80:32]
  assign core_clock = clock;
  assign core_reset = reset;
  assign core_io_dmemRsp_valid = dmem_io_rsp_valid; // @[Top.scala 119:19]
  assign core_io_dmemRsp_bits_dataResponse = dmem_io_rsp_bits_dataResponse; // @[Top.scala 119:19]
  assign core_io_imemReq_ready = imem_io_req_ready; // @[Top.scala 116:15]
  assign core_io_imemRsp_valid = imem_io_rsp_valid; // @[Top.scala 115:19]
  assign core_io_imemRsp_bits_dataResponse = imem_io_rsp_bits_dataResponse; // @[Top.scala 115:19]
  assign core_io_baby_kyber_req_ready = io_baby_kyber_req_ready; // @[Top.scala 87:22]
  assign core_io_baby_kyber_rsp_valid = io_baby_kyber_rsp_valid; // @[Top.scala 89:22]
  assign core_io_baby_kyber_rsp_bits_dataResponse = io_baby_kyber_rsp_bits_dataResponse; // @[Top.scala 90:21]
  assign core_io_baby_kyber_rsp_bits_error = 1'h0; // @[Top.scala 90:21]
  assign core_io_baby_kyber_cio_babykyber_intr_key = io_baby_kyber_cio_babykyber_intr_key; // @[Top.scala 93:35]
  assign core_io_baby_kyber_cio_babykyber_intr_encrypt = io_baby_kyber_cio_babykyber_intr_encrypt; // @[Top.scala 94:39]
  assign core_io_baby_kyber_cio_babykyber_intr_decrypt = io_baby_kyber_cio_babykyber_intr_decrypt; // @[Top.scala 95:39]
  assign core_io_uart_req_ready = 1'h1; // @[Top.scala 75:30]
  assign core_io_uart_rsp_valid = 1'h0; // @[Top.scala 72:30]
  assign core_io_uart_rsp_bits_dataResponse = 32'h0; // @[Top.scala 73:42]
  assign core_io_uart_rsp_bits_error = 1'h0; // @[Top.scala 74:35]
  assign core_io_uart_cio_uart_rx_i = 1'h0; // @[Top.scala 71:34]
  assign dmem_clock = clock;
  assign dmem_reset = reset;
  assign dmem_io_req_valid = core_io_dmemReq_valid; // @[Top.scala 120:15]
  assign dmem_io_req_bits_addrRequest = core_io_dmemReq_bits_addrRequest; // @[Top.scala 120:15]
  assign dmem_io_req_bits_dataRequest = core_io_dmemReq_bits_dataRequest; // @[Top.scala 120:15]
  assign dmem_io_req_bits_activeByteLane = core_io_dmemReq_bits_activeByteLane; // @[Top.scala 120:15]
  assign dmem_io_req_bits_isWrite = core_io_dmemReq_bits_isWrite; // @[Top.scala 120:15]
  assign imem_clock = clock;
  assign imem_reset = reset;
  assign imem_io_req_valid = core_io_imemReq_valid; // @[Top.scala 116:15]
  assign imem_io_req_bits_addrRequest = core_io_imemReq_bits_addrRequest; // @[Top.scala 116:15]
  assign imem_io_rsp_ready = core_io_imemRsp_ready; // @[Top.scala 115:19]
  assign tracer_rvfi_i_bool = core_io_rvfi_bool; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint4 = core_io_rvfi_uint4; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint5_0 = core_io_rvfi_uint5_0; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint5_1 = core_io_rvfi_uint5_1; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint5_2 = core_io_rvfi_uint5_2; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_0 = core_io_rvfi_uint32_0; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_1 = core_io_rvfi_uint32_1; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_2 = core_io_rvfi_uint32_2; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_3 = core_io_rvfi_uint32_3; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_4 = core_io_rvfi_uint32_4; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_5 = core_io_rvfi_uint32_5; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_6 = core_io_rvfi_uint32_6; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_7 = core_io_rvfi_uint32_7; // @[Top.scala 126:19]
  assign tracer_rvfi_i_uint32_8 = core_io_rvfi_uint32_8; // @[Top.scala 126:19]
endmodule
module WishboneHost(
  input         clock,
  input         reset,
  input         io_wbMasterTransmitter_ready,
  output        io_wbMasterTransmitter_valid,
  output        io_wbMasterTransmitter_bits_cyc,
  output        io_wbMasterTransmitter_bits_stb,
  output        io_wbMasterTransmitter_bits_we,
  output [31:0] io_wbMasterTransmitter_bits_adr,
  output [31:0] io_wbMasterTransmitter_bits_dat,
  output [3:0]  io_wbMasterTransmitter_bits_sel,
  output        io_wbSlaveReceiver_ready,
  input         io_wbSlaveReceiver_bits_ack,
  input  [31:0] io_wbSlaveReceiver_bits_dat,
  output        io_reqIn_ready,
  input         io_reqIn_valid,
  input  [31:0] io_reqIn_bits_addrRequest,
  input  [31:0] io_reqIn_bits_dataRequest,
  input  [3:0]  io_reqIn_bits_activeByteLane,
  input         io_reqIn_bits_isWrite,
  output        io_rspOut_valid,
  output [31:0] io_rspOut_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg  startWBTransaction; // @[WishboneHost.scala 39:35]
  reg [31:0] dataReg; // @[WishboneHost.scala 41:24]
  reg  respReg; // @[WishboneHost.scala 42:24]
  reg  stbReg; // @[WishboneHost.scala 45:23]
  reg  cycReg; // @[WishboneHost.scala 46:23]
  reg  weReg; // @[WishboneHost.scala 47:22]
  reg [31:0] datReg; // @[WishboneHost.scala 48:23]
  reg [31:0] adrReg; // @[WishboneHost.scala 49:23]
  reg [3:0] selReg; // @[WishboneHost.scala 50:23]
  reg  stateReg; // @[WishboneHost.scala 55:25]
  reg  readyReg; // @[WishboneHost.scala 61:25]
  wire  _T_2 = io_reqIn_valid & io_wbMasterTransmitter_ready; // @[WishboneHost.scala 18:37]
  wire  _GEN_0 = _T_2 ? 1'h0 : readyReg; // @[WishboneHost.scala 62:14 63:14 61:25]
  wire  _GEN_1 = stateReg | _GEN_0; // @[WishboneHost.scala 65:33 66:14]
  wire  _GEN_2 = io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | startWBTransaction; // @[WishboneHost.scala 84:92 85:26 39:35]
  wire  _GEN_3 = io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | stbReg; // @[WishboneHost.scala 84:92 86:14 45:23]
  wire  _GEN_4 = io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | cycReg; // @[WishboneHost.scala 84:92 87:14 46:23]
  wire  _GEN_9 = ~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | _GEN_2; // @[WishboneHost.scala 76:86 77:26]
  wire  _GEN_10 = ~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | _GEN_3; // @[WishboneHost.scala 76:86 78:14]
  wire  _GEN_11 = ~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | _GEN_4; // @[WishboneHost.scala 76:86 79:14]
  wire  _GEN_27 = io_wbSlaveReceiver_bits_ack | respReg; // @[WishboneHost.scala 105:71 107:15]
  assign io_wbMasterTransmitter_valid = io_wbMasterTransmitter_bits_stb; // @[WishboneHost.scala 23:32]
  assign io_wbMasterTransmitter_bits_cyc = ~startWBTransaction ? 1'h0 : cycReg; // @[WishboneHost.scala 101:31 102:118 95:37]
  assign io_wbMasterTransmitter_bits_stb = ~startWBTransaction ? 1'h0 : stbReg; // @[WishboneHost.scala 101:31 102:118 94:37]
  assign io_wbMasterTransmitter_bits_we = ~startWBTransaction ? 1'h0 : weReg; // @[WishboneHost.scala 101:31 102:118 96:36]
  assign io_wbMasterTransmitter_bits_adr = ~startWBTransaction ? 32'h0 : adrReg; // @[WishboneHost.scala 101:31 102:118 97:37]
  assign io_wbMasterTransmitter_bits_dat = ~startWBTransaction ? 32'h0 : datReg; // @[WishboneHost.scala 101:31 102:118 98:37]
  assign io_wbMasterTransmitter_bits_sel = ~startWBTransaction ? 4'h0 : selReg; // @[WishboneHost.scala 101:31 102:118 99:37]
  assign io_wbSlaveReceiver_ready = 1'h1; // @[WishboneHost.scala 26:28]
  assign io_reqIn_ready = readyReg; // @[WishboneHost.scala 75:20]
  assign io_rspOut_valid = respReg; // @[WishboneHost.scala 127:21]
  assign io_rspOut_bits_dataResponse = dataReg; // @[WishboneHost.scala 128:33]
  always @(posedge clock) begin
    if (reset) begin // @[WishboneHost.scala 39:35]
      startWBTransaction <= 1'h0; // @[WishboneHost.scala 39:35]
    end else if (io_wbSlaveReceiver_bits_ack) begin // @[WishboneHost.scala 105:71]
      startWBTransaction <= 1'h0; // @[WishboneHost.scala 110:26]
    end else begin
      startWBTransaction <= _GEN_9;
    end
    if (reset) begin // @[WishboneHost.scala 41:24]
      dataReg <= 32'h0; // @[WishboneHost.scala 41:24]
    end else if (io_wbSlaveReceiver_bits_ack) begin // @[WishboneHost.scala 105:71]
      dataReg <= io_wbSlaveReceiver_bits_dat; // @[WishboneHost.scala 106:15]
    end
    if (reset) begin // @[WishboneHost.scala 42:24]
      respReg <= 1'h0; // @[WishboneHost.scala 42:24]
    end else if (~stateReg) begin // @[WishboneHost.scala 118:29]
      respReg <= _GEN_27;
    end else if (stateReg) begin // @[WishboneHost.scala 120:42]
      respReg <= 1'h0; // @[WishboneHost.scala 121:15]
    end else begin
      respReg <= _GEN_27;
    end
    if (reset) begin // @[WishboneHost.scala 45:23]
      stbReg <= 1'h0; // @[WishboneHost.scala 45:23]
    end else begin
      stbReg <= _GEN_10;
    end
    if (reset) begin // @[WishboneHost.scala 46:23]
      cycReg <= 1'h0; // @[WishboneHost.scala 46:23]
    end else begin
      cycReg <= _GEN_11;
    end
    if (reset) begin // @[WishboneHost.scala 47:22]
      weReg <= 1'h0; // @[WishboneHost.scala 47:22]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      weReg <= io_reqIn_bits_isWrite; // @[WishboneHost.scala 80:13]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      weReg <= io_reqIn_bits_isWrite; // @[WishboneHost.scala 88:13]
    end
    if (reset) begin // @[WishboneHost.scala 48:23]
      datReg <= 32'h0; // @[WishboneHost.scala 48:23]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      datReg <= 32'h0; // @[WishboneHost.scala 82:14]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      datReg <= io_reqIn_bits_dataRequest; // @[WishboneHost.scala 90:14]
    end
    if (reset) begin // @[WishboneHost.scala 49:23]
      adrReg <= 32'h0; // @[WishboneHost.scala 49:23]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      adrReg <= io_reqIn_bits_addrRequest; // @[WishboneHost.scala 81:14]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      adrReg <= io_reqIn_bits_addrRequest; // @[WishboneHost.scala 89:14]
    end
    if (reset) begin // @[WishboneHost.scala 50:23]
      selReg <= 4'h0; // @[WishboneHost.scala 50:23]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      selReg <= io_reqIn_bits_activeByteLane; // @[WishboneHost.scala 83:14]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      selReg <= io_reqIn_bits_activeByteLane; // @[WishboneHost.scala 91:14]
    end
    if (reset) begin // @[WishboneHost.scala 55:25]
      stateReg <= 1'h0; // @[WishboneHost.scala 55:25]
    end else if (~stateReg) begin // @[WishboneHost.scala 118:29]
      stateReg <= io_wbSlaveReceiver_bits_ack; // @[WishboneHost.scala 119:16]
    end else if (stateReg) begin // @[WishboneHost.scala 120:42]
      stateReg <= 1'h0; // @[WishboneHost.scala 122:16]
    end
    readyReg <= reset | _GEN_1; // @[WishboneHost.scala 61:{25,25}]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  startWBTransaction = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  respReg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  stbReg = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  cycReg = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  weReg = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  datReg = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  adrReg = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  selReg = _RAND_8[3:0];
  _RAND_9 = {1{`RANDOM}};
  stateReg = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  readyReg = _RAND_10[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module WishboneDevice(
  input         io_wbSlaveTransmitter_ready,
  output        io_wbSlaveTransmitter_bits_ack,
  output [31:0] io_wbSlaveTransmitter_bits_dat,
  output        io_wbMasterReceiver_ready,
  input         io_wbMasterReceiver_valid,
  input         io_wbMasterReceiver_bits_cyc,
  input         io_wbMasterReceiver_bits_stb,
  input         io_wbMasterReceiver_bits_we,
  input  [31:0] io_wbMasterReceiver_bits_adr,
  input  [31:0] io_wbMasterReceiver_bits_dat,
  input  [3:0]  io_wbMasterReceiver_bits_sel,
  output        io_reqOut_valid,
  output [31:0] io_reqOut_bits_addrRequest,
  output [31:0] io_reqOut_bits_dataRequest,
  output [3:0]  io_reqOut_bits_activeByteLane,
  output        io_reqOut_bits_isWrite,
  input         io_rspIn_valid,
  input  [31:0] io_rspIn_bits_dataResponse
);
  wire  _T_1 = io_wbMasterReceiver_valid & io_wbMasterReceiver_bits_cyc & io_wbMasterReceiver_bits_stb; // @[WishboneDevice.scala 16:80]
  assign io_wbSlaveTransmitter_bits_ack = _T_1 & io_rspIn_valid; // @[WishboneDevice.scala 25:16 88:9]
  assign io_wbSlaveTransmitter_bits_dat = io_rspIn_bits_dataResponse; // @[WishboneDevice.scala 36:52 41:40]
  assign io_wbMasterReceiver_ready = 1'h1; // @[WishboneDevice.scala 19:29]
  assign io_reqOut_valid = io_wbMasterReceiver_valid & io_wbMasterReceiver_bits_cyc & io_wbMasterReceiver_bits_stb; // @[WishboneDevice.scala 16:80]
  assign io_reqOut_bits_addrRequest = io_wbMasterReceiver_bits_adr; // @[WishboneDevice.scala 26:40 32:34 56:34]
  assign io_reqOut_bits_dataRequest = io_wbMasterReceiver_bits_dat; // @[WishboneDevice.scala 26:40 57:34]
  assign io_reqOut_bits_activeByteLane = io_wbMasterReceiver_bits_sel; // @[WishboneDevice.scala 26:40 34:37 58:37]
  assign io_reqOut_bits_isWrite = ~io_wbMasterReceiver_bits_we ? 1'h0 : io_wbMasterReceiver_bits_we; // @[WishboneDevice.scala 26:40 35:30 59:30]
endmodule
module BabyKyberTop(
  input         clock,
  input         reset,
  input         io_req_valid,
  input         io_req_bits_isWrite,
  input  [31:0] io_req_bits_dataRequest,
  input  [31:0] io_req_bits_addrRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse,
  input         io_key_enable,
  input         io_encryption_enable,
  input         io_decryption_enable,
  output        io_cio_babykyber_intr_key,
  output        io_cio_babykyber_intr_encrypt,
  output        io_cio_babykyber_intr_decrypt
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  bkyber_clk; // @[BabyKyber.scala 44:22]
  wire  bkyber_rst_n; // @[BabyKyber.scala 44:22]
  wire  bkyber_enable; // @[BabyKyber.scala 44:22]
  wire  bkyber_key_enable; // @[BabyKyber.scala 44:22]
  wire  bkyber_encryption_enable; // @[BabyKyber.scala 44:22]
  wire  bkyber_decryption_enable; // @[BabyKyber.scala 44:22]
  wire [31:0] bkyber_data_Req; // @[BabyKyber.scala 44:22]
  wire [31:0] bkyber_addr_Req; // @[BabyKyber.scala 44:22]
  wire  bkyber_wen_Req; // @[BabyKyber.scala 44:22]
  wire [7:0] bkyber_bytelane_Req; // @[BabyKyber.scala 44:22]
  wire [31:0] bkyber_data_Resp; // @[BabyKyber.scala 44:22]
  wire  bkyber_key_done; // @[BabyKyber.scala 44:22]
  wire  bkyber_encryption_done; // @[BabyKyber.scala 44:22]
  wire  bkyber_decryption_done; // @[BabyKyber.scala 44:22]
  reg  validReg; // @[BabyKyber.scala 38:25]
  wire  _T_2 = io_req_valid & ~io_req_bits_isWrite; // @[BabyKyber.scala 72:27]
  wire [31:0] _GEN_3 = bkyber_data_Resp; // @[BabyKyber.scala 72:52 76:11]
  wire  _GEN_9 = io_req_valid & io_req_bits_isWrite | _T_2; // @[BabyKyber.scala 65:45 71:14]
  kybertop bkyber ( // @[BabyKyber.scala 44:22]
    .clk(bkyber_clk),
    .rst_n(bkyber_rst_n),
    .enable(bkyber_enable),
    .key_enable(bkyber_key_enable),
    .encryption_enable(bkyber_encryption_enable),
    .decryption_enable(bkyber_decryption_enable),
    .data_Req(bkyber_data_Req),
    .addr_Req(bkyber_addr_Req),
    .wen_Req(bkyber_wen_Req),
    .bytelane_Req(bkyber_bytelane_Req),
    .data_Resp(bkyber_data_Resp),
    .key_done(bkyber_key_done),
    .encryption_done(bkyber_encryption_done),
    .decryption_done(bkyber_decryption_done)
  );
  assign io_rsp_valid = validReg; // @[BabyKyber.scala 39:16]
  assign io_rsp_bits_dataResponse = io_req_valid & io_req_bits_isWrite ? $signed(bkyber_data_Resp) : $signed(_GEN_3); // @[BabyKyber.scala 82:37]
  assign io_cio_babykyber_intr_key = bkyber_key_done; // @[BabyKyber.scala 59:29]
  assign io_cio_babykyber_intr_encrypt = bkyber_encryption_done; // @[BabyKyber.scala 60:33]
  assign io_cio_babykyber_intr_decrypt = bkyber_decryption_done; // @[BabyKyber.scala 61:33]
  assign bkyber_clk = clock; // @[BabyKyber.scala 46:32]
  assign bkyber_rst_n = ~reset; // @[BabyKyber.scala 47:22]
  assign bkyber_enable = 1'h1; // @[BabyKyber.scala 49:20]
  assign bkyber_key_enable = io_key_enable; // @[BabyKyber.scala 50:24]
  assign bkyber_encryption_enable = io_encryption_enable; // @[BabyKyber.scala 51:31]
  assign bkyber_decryption_enable = io_decryption_enable; // @[BabyKyber.scala 52:31]
  assign bkyber_data_Req = io_req_bits_dataRequest; // @[BabyKyber.scala 66:51]
  assign bkyber_addr_Req = io_req_valid & io_req_bits_isWrite ? $signed(io_req_bits_addrRequest) : $signed(
    io_req_bits_addrRequest); // @[BabyKyber.scala 65:45 67:24]
  assign bkyber_wen_Req = io_req_valid & io_req_bits_isWrite & io_req_bits_isWrite; // @[BabyKyber.scala 65:45 68:23]
  assign bkyber_bytelane_Req = {{4'd0}, io_req_bits_activeByteLane};
  always @(posedge clock) begin
    if (reset) begin // @[BabyKyber.scala 38:25]
      validReg <= 1'h0; // @[BabyKyber.scala 38:25]
    end else begin
      validReg <= _GEN_9;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  validReg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module uartRX(
  input         clock,
  input         reset,
  input         io_i_Rx_Serial,
  input  [15:0] io_CLKS_PER_BIT,
  output        io_o_Rx_DV,
  output [7:0]  io_o_Rx_Byte
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg  rxReg_REG; // @[uartRX.scala 18:32]
  reg  rxReg; // @[uartRX.scala 18:24]
  reg [7:0] shiftReg; // @[uartRX.scala 19:27]
  reg [2:0] r_SM_Main; // @[uartRX.scala 21:28]
  reg [15:0] r_Clock_Count; // @[uartRX.scala 22:32]
  reg [2:0] r_Bit_Index; // @[uartRX.scala 23:30]
  reg  r_Rx_DV; // @[uartRX.scala 24:26]
  wire  _T_1 = ~io_i_Rx_Serial; // @[uartRX.scala 33:33]
  wire [15:0] _T_4 = io_CLKS_PER_BIT - 16'h1; // @[uartRX.scala 41:52]
  wire [15:0] _T_5 = _T_4 / 2'h2; // @[uartRX.scala 41:57]
  wire [15:0] _GEN_1 = _T_1 ? 16'h0 : r_Clock_Count; // @[uartRX.scala 22:32 42:45 43:35]
  wire [2:0] _GEN_2 = _T_1 ? 3'h2 : 3'h0; // @[uartRX.scala 42:45 44:31 46:31]
  wire [15:0] _r_Clock_Count_T_1 = r_Clock_Count + 16'h1; // @[uartRX.scala 49:48]
  wire  _T_11 = r_Clock_Count < _T_4; // @[uartRX.scala 55:32]
  wire [7:0] _shiftReg_T_1 = {rxReg,shiftReg[7:1]}; // @[Cat.scala 33:92]
  wire [2:0] _r_Bit_Index_T_1 = r_Bit_Index + 3'h1; // @[uartRX.scala 63:48]
  wire [2:0] _GEN_5 = r_Bit_Index < 3'h7 ? _r_Bit_Index_T_1 : 3'h0; // @[uartRX.scala 62:40 63:33 66:33]
  wire [2:0] _GEN_6 = r_Bit_Index < 3'h7 ? 3'h2 : 3'h3; // @[uartRX.scala 62:40 64:31 67:31]
  wire [15:0] _GEN_7 = r_Clock_Count < _T_4 ? _r_Clock_Count_T_1 : 16'h0; // @[uartRX.scala 55:56 56:31 59:31]
  wire [2:0] _GEN_8 = r_Clock_Count < _T_4 ? 3'h2 : _GEN_6; // @[uartRX.scala 55:56 57:27]
  wire [7:0] _GEN_9 = r_Clock_Count < _T_4 ? shiftReg : _shiftReg_T_1; // @[uartRX.scala 19:27 55:56 60:26]
  wire [2:0] _GEN_10 = r_Clock_Count < _T_4 ? r_Bit_Index : _GEN_5; // @[uartRX.scala 23:30 55:56]
  wire [2:0] _GEN_12 = _T_11 ? 3'h3 : 3'h4; // @[uartRX.scala 74:56 76:27 80:27]
  wire  _GEN_13 = _T_11 ? r_Rx_DV : 1'h1; // @[uartRX.scala 24:26 74:56 78:25]
  wire [2:0] _GEN_14 = 3'h4 == r_SM_Main ? 3'h0 : r_SM_Main; // @[uartRX.scala 26:22 85:23 21:28]
  wire  _GEN_15 = 3'h4 == r_SM_Main ? 1'h0 : r_Rx_DV; // @[uartRX.scala 26:22 86:21 24:26]
  wire [15:0] _GEN_16 = 3'h3 == r_SM_Main ? _GEN_7 : r_Clock_Count; // @[uartRX.scala 26:22 22:32]
  wire [2:0] _GEN_17 = 3'h3 == r_SM_Main ? _GEN_12 : _GEN_14; // @[uartRX.scala 26:22]
  wire  _GEN_18 = 3'h3 == r_SM_Main ? _GEN_13 : _GEN_15; // @[uartRX.scala 26:22]
  assign io_o_Rx_DV = r_Rx_DV; // @[uartRX.scala 90:16]
  assign io_o_Rx_Byte = shiftReg; // @[uartRX.scala 91:18]
  always @(posedge clock) begin
    rxReg_REG <= reset | io_i_Rx_Serial; // @[uartRX.scala 18:{32,32,32}]
    rxReg <= reset | rxReg_REG; // @[uartRX.scala 18:{24,24,24}]
    if (reset) begin // @[uartRX.scala 19:27]
      shiftReg <= 8'h0; // @[uartRX.scala 19:27]
    end else if (!(3'h0 == r_SM_Main)) begin // @[uartRX.scala 26:22]
      if (!(3'h1 == r_SM_Main)) begin // @[uartRX.scala 26:22]
        if (3'h2 == r_SM_Main) begin // @[uartRX.scala 26:22]
          shiftReg <= _GEN_9;
        end
      end
    end
    if (reset) begin // @[uartRX.scala 21:28]
      r_SM_Main <= 3'h0; // @[uartRX.scala 21:28]
    end else if (3'h0 == r_SM_Main) begin // @[uartRX.scala 26:22]
      if (~io_i_Rx_Serial) begin // @[uartRX.scala 33:41]
        r_SM_Main <= 3'h1; // @[uartRX.scala 34:27]
      end else begin
        r_SM_Main <= 3'h0; // @[uartRX.scala 36:27]
      end
    end else if (3'h1 == r_SM_Main) begin // @[uartRX.scala 26:22]
      if (r_Clock_Count == _T_5) begin // @[uartRX.scala 41:62]
        r_SM_Main <= _GEN_2;
      end else begin
        r_SM_Main <= 3'h1; // @[uartRX.scala 50:27]
      end
    end else if (3'h2 == r_SM_Main) begin // @[uartRX.scala 26:22]
      r_SM_Main <= _GEN_8;
    end else begin
      r_SM_Main <= _GEN_17;
    end
    if (reset) begin // @[uartRX.scala 22:32]
      r_Clock_Count <= 16'h0; // @[uartRX.scala 22:32]
    end else if (3'h0 == r_SM_Main) begin // @[uartRX.scala 26:22]
      r_Clock_Count <= 16'h0; // @[uartRX.scala 29:27]
    end else if (3'h1 == r_SM_Main) begin // @[uartRX.scala 26:22]
      if (r_Clock_Count == _T_5) begin // @[uartRX.scala 41:62]
        r_Clock_Count <= _GEN_1;
      end else begin
        r_Clock_Count <= _r_Clock_Count_T_1; // @[uartRX.scala 49:31]
      end
    end else if (3'h2 == r_SM_Main) begin // @[uartRX.scala 26:22]
      r_Clock_Count <= _GEN_7;
    end else begin
      r_Clock_Count <= _GEN_16;
    end
    if (reset) begin // @[uartRX.scala 23:30]
      r_Bit_Index <= 3'h0; // @[uartRX.scala 23:30]
    end else if (3'h0 == r_SM_Main) begin // @[uartRX.scala 26:22]
      r_Bit_Index <= 3'h0; // @[uartRX.scala 30:25]
    end else if (!(3'h1 == r_SM_Main)) begin // @[uartRX.scala 26:22]
      if (3'h2 == r_SM_Main) begin // @[uartRX.scala 26:22]
        r_Bit_Index <= _GEN_10;
      end
    end
    if (reset) begin // @[uartRX.scala 24:26]
      r_Rx_DV <= 1'h0; // @[uartRX.scala 24:26]
    end else if (3'h0 == r_SM_Main) begin // @[uartRX.scala 26:22]
      r_Rx_DV <= 1'h0; // @[uartRX.scala 28:21]
    end else if (!(3'h1 == r_SM_Main)) begin // @[uartRX.scala 26:22]
      if (!(3'h2 == r_SM_Main)) begin // @[uartRX.scala 26:22]
        r_Rx_DV <= _GEN_18;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rxReg_REG = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  rxReg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  shiftReg = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  r_SM_Main = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  r_Clock_Count = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  r_Bit_Index = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  r_Rx_DV = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module UartTOP(
  input         clock,
  input         reset,
  input         io_ren,
  input         io_we,
  input  [31:0] io_wdata,
  input  [7:0]  io_addr,
  output [31:0] io_rdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire  uart_rx_clock; // @[UartTOP.scala 69:25]
  wire  uart_rx_reset; // @[UartTOP.scala 69:25]
  wire  uart_rx_io_i_Rx_Serial; // @[UartTOP.scala 69:25]
  wire [15:0] uart_rx_io_CLKS_PER_BIT; // @[UartTOP.scala 69:25]
  wire  uart_rx_io_o_Rx_DV; // @[UartTOP.scala 69:25]
  wire [7:0] uart_rx_io_o_Rx_Byte; // @[UartTOP.scala 69:25]
  reg [15:0] control; // @[UartTOP.scala 29:26]
  reg [7:0] rx; // @[UartTOP.scala 31:21]
  reg [7:0] rx_reg; // @[UartTOP.scala 32:25]
  reg  rx_en; // @[UartTOP.scala 33:24]
  reg  rx_status; // @[UartTOP.scala 35:28]
  reg  rx_clr; // @[UartTOP.scala 36:25]
  reg  rx_done; // @[UartTOP.scala 37:26]
  wire  _GEN_0 = io_addr == 8'h18 & io_wdata[0]; // @[UartTOP.scala 48:38 49:20 55:20]
  wire  _GEN_2 = io_addr == 8'h18 & rx_en; // @[UartTOP.scala 33:24 48:38 53:19]
  wire  _GEN_5 = io_addr == 8'h10 ? rx_clr : _GEN_0; // @[UartTOP.scala 36:25 46:38]
  wire  _GEN_7 = io_addr == 8'h10 ? rx_en : _GEN_2; // @[UartTOP.scala 33:24 46:38]
  wire  _GEN_8 = io_addr == 8'hc ? io_wdata[0] : _GEN_7; // @[UartTOP.scala 44:38 45:19]
  wire  _GEN_10 = io_addr == 8'hc ? rx_clr : _GEN_5; // @[UartTOP.scala 36:25 44:38]
  wire  _GEN_15 = io_addr == 8'h4 ? rx_clr : _GEN_10; // @[UartTOP.scala 36:25 42:40]
  wire  _GEN_20 = io_addr == 8'h0 ? rx_clr : _GEN_15; // @[UartTOP.scala 36:25 40:36]
  wire  _GEN_25 = ~io_ren & io_we ? _GEN_20 : rx_clr; // @[UartTOP.scala 36:25 39:29]
  wire  _GEN_27 = ~rx_clr ? 1'h0 : rx_status; // @[UartTOP.scala 84:26 85:19 35:28]
  wire  _GEN_29 = rx_done | _GEN_27; // @[UartTOP.scala 81:18 83:19]
  wire [7:0] _io_rdata_T_2 = io_addr == 8'h8 ? rx_reg : 8'h0; // @[UartTOP.scala 88:55]
  wire [7:0] _io_rdata_T_3 = io_addr == 8'h14 ? {{7'd0}, rx_status} : _io_rdata_T_2; // @[UartTOP.scala 88:20]
  uartRX uart_rx ( // @[UartTOP.scala 69:25]
    .clock(uart_rx_clock),
    .reset(uart_rx_reset),
    .io_i_Rx_Serial(uart_rx_io_i_Rx_Serial),
    .io_CLKS_PER_BIT(uart_rx_io_CLKS_PER_BIT),
    .io_o_Rx_DV(uart_rx_io_o_Rx_DV),
    .io_o_Rx_Byte(uart_rx_io_o_Rx_Byte)
  );
  assign io_rdata = {{24'd0}, _io_rdata_T_3}; // @[UartTOP.scala 88:14]
  assign uart_rx_clock = clock;
  assign uart_rx_reset = reset;
  assign uart_rx_io_i_Rx_Serial = rx_en ? 1'h0 : 1'h1; // @[UartTOP.scala 70:16 71:32 73:32]
  assign uart_rx_io_CLKS_PER_BIT = control; // @[UartTOP.scala 75:29]
  always @(posedge clock) begin
    if (reset) begin // @[UartTOP.scala 29:26]
      control <= 16'h0; // @[UartTOP.scala 29:26]
    end else if (~io_ren & io_we) begin // @[UartTOP.scala 39:29]
      if (io_addr == 8'h0) begin // @[UartTOP.scala 40:36]
        control <= io_wdata[15:0]; // @[UartTOP.scala 41:21]
      end
    end
    if (reset) begin // @[UartTOP.scala 31:21]
      rx <= 8'h0; // @[UartTOP.scala 31:21]
    end else begin
      rx <= uart_rx_io_o_Rx_Byte; // @[UartTOP.scala 78:8]
    end
    if (reset) begin // @[UartTOP.scala 32:25]
      rx_reg <= 8'h0; // @[UartTOP.scala 32:25]
    end else if (rx_done) begin // @[UartTOP.scala 81:18]
      rx_reg <= rx; // @[UartTOP.scala 82:16]
    end
    if (reset) begin // @[UartTOP.scala 33:24]
      rx_en <= 1'h0; // @[UartTOP.scala 33:24]
    end else if (~io_ren & io_we) begin // @[UartTOP.scala 39:29]
      if (!(io_addr == 8'h0)) begin // @[UartTOP.scala 40:36]
        if (!(io_addr == 8'h4)) begin // @[UartTOP.scala 42:40]
          rx_en <= _GEN_8;
        end
      end
    end
    if (reset) begin // @[UartTOP.scala 35:28]
      rx_status <= 1'h0; // @[UartTOP.scala 35:28]
    end else begin
      rx_status <= _GEN_29;
    end
    rx_clr <= reset | _GEN_25; // @[UartTOP.scala 36:{25,25}]
    if (reset) begin // @[UartTOP.scala 37:26]
      rx_done <= 1'h0; // @[UartTOP.scala 37:26]
    end else begin
      rx_done <= uart_rx_io_o_Rx_DV; // @[UartTOP.scala 77:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  control = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  rx = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  rx_reg = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  rx_en = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  rx_status = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  rx_clr = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  rx_done = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module XSoC(
  input         clock,
  input         reset,
  output [31:0] io_pin,
  output        io_rvfi_valid_0,
  output [31:0] io_rvfi_insn_0,
  output [1:0]  io_rvfi_mode_0,
  output [4:0]  io_rvfi_rs1_addr_0,
  output [4:0]  io_rvfi_rs2_addr_0,
  output [31:0] io_rvfi_rs1_rdata_0,
  output [31:0] io_rvfi_rs2_rdata_0,
  output [4:0]  io_rvfi_rd_addr_0,
  output [31:0] io_rvfi_rd_wdata_0,
  output [31:0] io_rvfi_pc_rdata_0,
  output [31:0] io_rvfi_pc_wdata_0,
  output [31:0] io_rvfi_mem_addr_0,
  output [3:0]  io_rvfi_mem_wmask_0,
  output [31:0] io_rvfi_mem_rdata_0,
  output [31:0] io_rvfi_mem_wdata_0
);
  wire  core_clock; // @[XSoC.scala 17:20]
  wire  core_reset; // @[XSoC.scala 17:20]
  wire [31:0] core_io_pin; // @[XSoC.scala 17:20]
  wire  core_io_rvfi_valid_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_insn_0; // @[XSoC.scala 17:20]
  wire [4:0] core_io_rvfi_rs1_addr_0; // @[XSoC.scala 17:20]
  wire [4:0] core_io_rvfi_rs2_addr_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_rs1_rdata_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_rs2_rdata_0; // @[XSoC.scala 17:20]
  wire [4:0] core_io_rvfi_rd_addr_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_rd_wdata_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_pc_rdata_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_pc_wdata_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_mem_addr_0; // @[XSoC.scala 17:20]
  wire [3:0] core_io_rvfi_mem_wmask_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_mem_rdata_0; // @[XSoC.scala 17:20]
  wire [31:0] core_io_rvfi_mem_wdata_0; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_req_ready; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_req_valid; // @[XSoC.scala 17:20]
  wire [31:0] core_io_baby_kyber_req_bits_addrRequest; // @[XSoC.scala 17:20]
  wire [31:0] core_io_baby_kyber_req_bits_dataRequest; // @[XSoC.scala 17:20]
  wire [3:0] core_io_baby_kyber_req_bits_activeByteLane; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_req_bits_isWrite; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_rsp_valid; // @[XSoC.scala 17:20]
  wire [31:0] core_io_baby_kyber_rsp_bits_dataResponse; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_cio_babykyber_intr_key; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_cio_babykyber_intr_encrypt; // @[XSoC.scala 17:20]
  wire  core_io_baby_kyber_cio_babykyber_intr_decrypt; // @[XSoC.scala 17:20]
  wire  core_io_key_enable_trigger; // @[XSoC.scala 17:20]
  wire  core_io_encryption_enable_trigger; // @[XSoC.scala 17:20]
  wire  core_io_decryption_enable_trigger; // @[XSoC.scala 17:20]
  wire  hostAdapter_clock; // @[XSoC.scala 20:27]
  wire  hostAdapter_reset; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbMasterTransmitter_ready; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbMasterTransmitter_valid; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbMasterTransmitter_bits_cyc; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbMasterTransmitter_bits_stb; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbMasterTransmitter_bits_we; // @[XSoC.scala 20:27]
  wire [31:0] hostAdapter_io_wbMasterTransmitter_bits_adr; // @[XSoC.scala 20:27]
  wire [31:0] hostAdapter_io_wbMasterTransmitter_bits_dat; // @[XSoC.scala 20:27]
  wire [3:0] hostAdapter_io_wbMasterTransmitter_bits_sel; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbSlaveReceiver_ready; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_wbSlaveReceiver_bits_ack; // @[XSoC.scala 20:27]
  wire [31:0] hostAdapter_io_wbSlaveReceiver_bits_dat; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_reqIn_ready; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_reqIn_valid; // @[XSoC.scala 20:27]
  wire [31:0] hostAdapter_io_reqIn_bits_addrRequest; // @[XSoC.scala 20:27]
  wire [31:0] hostAdapter_io_reqIn_bits_dataRequest; // @[XSoC.scala 20:27]
  wire [3:0] hostAdapter_io_reqIn_bits_activeByteLane; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_reqIn_bits_isWrite; // @[XSoC.scala 20:27]
  wire  hostAdapter_io_rspOut_valid; // @[XSoC.scala 20:27]
  wire [31:0] hostAdapter_io_rspOut_bits_dataResponse; // @[XSoC.scala 20:27]
  wire  deviceAdapter_io_wbSlaveTransmitter_ready; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_wbSlaveTransmitter_bits_ack; // @[XSoC.scala 21:29]
  wire [31:0] deviceAdapter_io_wbSlaveTransmitter_bits_dat; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_wbMasterReceiver_ready; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_wbMasterReceiver_valid; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_wbMasterReceiver_bits_cyc; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_wbMasterReceiver_bits_stb; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_wbMasterReceiver_bits_we; // @[XSoC.scala 21:29]
  wire [31:0] deviceAdapter_io_wbMasterReceiver_bits_adr; // @[XSoC.scala 21:29]
  wire [31:0] deviceAdapter_io_wbMasterReceiver_bits_dat; // @[XSoC.scala 21:29]
  wire [3:0] deviceAdapter_io_wbMasterReceiver_bits_sel; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_reqOut_valid; // @[XSoC.scala 21:29]
  wire [31:0] deviceAdapter_io_reqOut_bits_addrRequest; // @[XSoC.scala 21:29]
  wire [31:0] deviceAdapter_io_reqOut_bits_dataRequest; // @[XSoC.scala 21:29]
  wire [3:0] deviceAdapter_io_reqOut_bits_activeByteLane; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_reqOut_bits_isWrite; // @[XSoC.scala 21:29]
  wire  deviceAdapter_io_rspIn_valid; // @[XSoC.scala 21:29]
  wire [31:0] deviceAdapter_io_rspIn_bits_dataResponse; // @[XSoC.scala 21:29]
  wire  babyKyber_clock; // @[XSoC.scala 24:25]
  wire  babyKyber_reset; // @[XSoC.scala 24:25]
  wire  babyKyber_io_req_valid; // @[XSoC.scala 24:25]
  wire  babyKyber_io_req_bits_isWrite; // @[XSoC.scala 24:25]
  wire [31:0] babyKyber_io_req_bits_dataRequest; // @[XSoC.scala 24:25]
  wire [31:0] babyKyber_io_req_bits_addrRequest; // @[XSoC.scala 24:25]
  wire [3:0] babyKyber_io_req_bits_activeByteLane; // @[XSoC.scala 24:25]
  wire  babyKyber_io_rsp_valid; // @[XSoC.scala 24:25]
  wire [31:0] babyKyber_io_rsp_bits_dataResponse; // @[XSoC.scala 24:25]
  wire  babyKyber_io_key_enable; // @[XSoC.scala 24:25]
  wire  babyKyber_io_encryption_enable; // @[XSoC.scala 24:25]
  wire  babyKyber_io_decryption_enable; // @[XSoC.scala 24:25]
  wire  babyKyber_io_cio_babykyber_intr_key; // @[XSoC.scala 24:25]
  wire  babyKyber_io_cio_babykyber_intr_encrypt; // @[XSoC.scala 24:25]
  wire  babyKyber_io_cio_babykyber_intr_decrypt; // @[XSoC.scala 24:25]
  wire  uart_clock; // @[XSoC.scala 27:20]
  wire  uart_reset; // @[XSoC.scala 27:20]
  wire  uart_io_ren; // @[XSoC.scala 27:20]
  wire  uart_io_we; // @[XSoC.scala 27:20]
  wire [31:0] uart_io_wdata; // @[XSoC.scala 27:20]
  wire [7:0] uart_io_addr; // @[XSoC.scala 27:20]
  wire [31:0] uart_io_rdata; // @[XSoC.scala 27:20]
  wire  uartHostAdapter_clock; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_reset; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbMasterTransmitter_ready; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbMasterTransmitter_valid; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbMasterTransmitter_bits_cyc; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbMasterTransmitter_bits_stb; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbMasterTransmitter_bits_we; // @[XSoC.scala 58:31]
  wire [31:0] uartHostAdapter_io_wbMasterTransmitter_bits_adr; // @[XSoC.scala 58:31]
  wire [31:0] uartHostAdapter_io_wbMasterTransmitter_bits_dat; // @[XSoC.scala 58:31]
  wire [3:0] uartHostAdapter_io_wbMasterTransmitter_bits_sel; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbSlaveReceiver_ready; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_wbSlaveReceiver_bits_ack; // @[XSoC.scala 58:31]
  wire [31:0] uartHostAdapter_io_wbSlaveReceiver_bits_dat; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_reqIn_ready; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_reqIn_valid; // @[XSoC.scala 58:31]
  wire [31:0] uartHostAdapter_io_reqIn_bits_addrRequest; // @[XSoC.scala 58:31]
  wire [31:0] uartHostAdapter_io_reqIn_bits_dataRequest; // @[XSoC.scala 58:31]
  wire [3:0] uartHostAdapter_io_reqIn_bits_activeByteLane; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_reqIn_bits_isWrite; // @[XSoC.scala 58:31]
  wire  uartHostAdapter_io_rspOut_valid; // @[XSoC.scala 58:31]
  wire [31:0] uartHostAdapter_io_rspOut_bits_dataResponse; // @[XSoC.scala 58:31]
  wire  uartDeviceAdapter_io_wbSlaveTransmitter_ready; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_wbSlaveTransmitter_bits_ack; // @[XSoC.scala 59:33]
  wire [31:0] uartDeviceAdapter_io_wbSlaveTransmitter_bits_dat; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_wbMasterReceiver_ready; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_wbMasterReceiver_valid; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_wbMasterReceiver_bits_cyc; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_wbMasterReceiver_bits_stb; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_wbMasterReceiver_bits_we; // @[XSoC.scala 59:33]
  wire [31:0] uartDeviceAdapter_io_wbMasterReceiver_bits_adr; // @[XSoC.scala 59:33]
  wire [31:0] uartDeviceAdapter_io_wbMasterReceiver_bits_dat; // @[XSoC.scala 59:33]
  wire [3:0] uartDeviceAdapter_io_wbMasterReceiver_bits_sel; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_reqOut_valid; // @[XSoC.scala 59:33]
  wire [31:0] uartDeviceAdapter_io_reqOut_bits_addrRequest; // @[XSoC.scala 59:33]
  wire [31:0] uartDeviceAdapter_io_reqOut_bits_dataRequest; // @[XSoC.scala 59:33]
  wire [3:0] uartDeviceAdapter_io_reqOut_bits_activeByteLane; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_reqOut_bits_isWrite; // @[XSoC.scala 59:33]
  wire  uartDeviceAdapter_io_rspIn_valid; // @[XSoC.scala 59:33]
  wire [31:0] uartDeviceAdapter_io_rspIn_bits_dataResponse; // @[XSoC.scala 59:33]
  Top core ( // @[XSoC.scala 17:20]
    .clock(core_clock),
    .reset(core_reset),
    .io_pin(core_io_pin),
    .io_rvfi_valid_0(core_io_rvfi_valid_0),
    .io_rvfi_insn_0(core_io_rvfi_insn_0),
    .io_rvfi_rs1_addr_0(core_io_rvfi_rs1_addr_0),
    .io_rvfi_rs2_addr_0(core_io_rvfi_rs2_addr_0),
    .io_rvfi_rs1_rdata_0(core_io_rvfi_rs1_rdata_0),
    .io_rvfi_rs2_rdata_0(core_io_rvfi_rs2_rdata_0),
    .io_rvfi_rd_addr_0(core_io_rvfi_rd_addr_0),
    .io_rvfi_rd_wdata_0(core_io_rvfi_rd_wdata_0),
    .io_rvfi_pc_rdata_0(core_io_rvfi_pc_rdata_0),
    .io_rvfi_pc_wdata_0(core_io_rvfi_pc_wdata_0),
    .io_rvfi_mem_addr_0(core_io_rvfi_mem_addr_0),
    .io_rvfi_mem_wmask_0(core_io_rvfi_mem_wmask_0),
    .io_rvfi_mem_rdata_0(core_io_rvfi_mem_rdata_0),
    .io_rvfi_mem_wdata_0(core_io_rvfi_mem_wdata_0),
    .io_baby_kyber_req_ready(core_io_baby_kyber_req_ready),
    .io_baby_kyber_req_valid(core_io_baby_kyber_req_valid),
    .io_baby_kyber_req_bits_addrRequest(core_io_baby_kyber_req_bits_addrRequest),
    .io_baby_kyber_req_bits_dataRequest(core_io_baby_kyber_req_bits_dataRequest),
    .io_baby_kyber_req_bits_activeByteLane(core_io_baby_kyber_req_bits_activeByteLane),
    .io_baby_kyber_req_bits_isWrite(core_io_baby_kyber_req_bits_isWrite),
    .io_baby_kyber_rsp_valid(core_io_baby_kyber_rsp_valid),
    .io_baby_kyber_rsp_bits_dataResponse(core_io_baby_kyber_rsp_bits_dataResponse),
    .io_baby_kyber_cio_babykyber_intr_key(core_io_baby_kyber_cio_babykyber_intr_key),
    .io_baby_kyber_cio_babykyber_intr_encrypt(core_io_baby_kyber_cio_babykyber_intr_encrypt),
    .io_baby_kyber_cio_babykyber_intr_decrypt(core_io_baby_kyber_cio_babykyber_intr_decrypt),
    .io_key_enable_trigger(core_io_key_enable_trigger),
    .io_encryption_enable_trigger(core_io_encryption_enable_trigger),
    .io_decryption_enable_trigger(core_io_decryption_enable_trigger)
  );
  WishboneHost hostAdapter ( // @[XSoC.scala 20:27]
    .clock(hostAdapter_clock),
    .reset(hostAdapter_reset),
    .io_wbMasterTransmitter_ready(hostAdapter_io_wbMasterTransmitter_ready),
    .io_wbMasterTransmitter_valid(hostAdapter_io_wbMasterTransmitter_valid),
    .io_wbMasterTransmitter_bits_cyc(hostAdapter_io_wbMasterTransmitter_bits_cyc),
    .io_wbMasterTransmitter_bits_stb(hostAdapter_io_wbMasterTransmitter_bits_stb),
    .io_wbMasterTransmitter_bits_we(hostAdapter_io_wbMasterTransmitter_bits_we),
    .io_wbMasterTransmitter_bits_adr(hostAdapter_io_wbMasterTransmitter_bits_adr),
    .io_wbMasterTransmitter_bits_dat(hostAdapter_io_wbMasterTransmitter_bits_dat),
    .io_wbMasterTransmitter_bits_sel(hostAdapter_io_wbMasterTransmitter_bits_sel),
    .io_wbSlaveReceiver_ready(hostAdapter_io_wbSlaveReceiver_ready),
    .io_wbSlaveReceiver_bits_ack(hostAdapter_io_wbSlaveReceiver_bits_ack),
    .io_wbSlaveReceiver_bits_dat(hostAdapter_io_wbSlaveReceiver_bits_dat),
    .io_reqIn_ready(hostAdapter_io_reqIn_ready),
    .io_reqIn_valid(hostAdapter_io_reqIn_valid),
    .io_reqIn_bits_addrRequest(hostAdapter_io_reqIn_bits_addrRequest),
    .io_reqIn_bits_dataRequest(hostAdapter_io_reqIn_bits_dataRequest),
    .io_reqIn_bits_activeByteLane(hostAdapter_io_reqIn_bits_activeByteLane),
    .io_reqIn_bits_isWrite(hostAdapter_io_reqIn_bits_isWrite),
    .io_rspOut_valid(hostAdapter_io_rspOut_valid),
    .io_rspOut_bits_dataResponse(hostAdapter_io_rspOut_bits_dataResponse)
  );
  WishboneDevice deviceAdapter ( // @[XSoC.scala 21:29]
    .io_wbSlaveTransmitter_ready(deviceAdapter_io_wbSlaveTransmitter_ready),
    .io_wbSlaveTransmitter_bits_ack(deviceAdapter_io_wbSlaveTransmitter_bits_ack),
    .io_wbSlaveTransmitter_bits_dat(deviceAdapter_io_wbSlaveTransmitter_bits_dat),
    .io_wbMasterReceiver_ready(deviceAdapter_io_wbMasterReceiver_ready),
    .io_wbMasterReceiver_valid(deviceAdapter_io_wbMasterReceiver_valid),
    .io_wbMasterReceiver_bits_cyc(deviceAdapter_io_wbMasterReceiver_bits_cyc),
    .io_wbMasterReceiver_bits_stb(deviceAdapter_io_wbMasterReceiver_bits_stb),
    .io_wbMasterReceiver_bits_we(deviceAdapter_io_wbMasterReceiver_bits_we),
    .io_wbMasterReceiver_bits_adr(deviceAdapter_io_wbMasterReceiver_bits_adr),
    .io_wbMasterReceiver_bits_dat(deviceAdapter_io_wbMasterReceiver_bits_dat),
    .io_wbMasterReceiver_bits_sel(deviceAdapter_io_wbMasterReceiver_bits_sel),
    .io_reqOut_valid(deviceAdapter_io_reqOut_valid),
    .io_reqOut_bits_addrRequest(deviceAdapter_io_reqOut_bits_addrRequest),
    .io_reqOut_bits_dataRequest(deviceAdapter_io_reqOut_bits_dataRequest),
    .io_reqOut_bits_activeByteLane(deviceAdapter_io_reqOut_bits_activeByteLane),
    .io_reqOut_bits_isWrite(deviceAdapter_io_reqOut_bits_isWrite),
    .io_rspIn_valid(deviceAdapter_io_rspIn_valid),
    .io_rspIn_bits_dataResponse(deviceAdapter_io_rspIn_bits_dataResponse)
  );
  BabyKyberTop babyKyber ( // @[XSoC.scala 24:25]
    .clock(babyKyber_clock),
    .reset(babyKyber_reset),
    .io_req_valid(babyKyber_io_req_valid),
    .io_req_bits_isWrite(babyKyber_io_req_bits_isWrite),
    .io_req_bits_dataRequest(babyKyber_io_req_bits_dataRequest),
    .io_req_bits_addrRequest(babyKyber_io_req_bits_addrRequest),
    .io_req_bits_activeByteLane(babyKyber_io_req_bits_activeByteLane),
    .io_rsp_valid(babyKyber_io_rsp_valid),
    .io_rsp_bits_dataResponse(babyKyber_io_rsp_bits_dataResponse),
    .io_key_enable(babyKyber_io_key_enable),
    .io_encryption_enable(babyKyber_io_encryption_enable),
    .io_decryption_enable(babyKyber_io_decryption_enable),
    .io_cio_babykyber_intr_key(babyKyber_io_cio_babykyber_intr_key),
    .io_cio_babykyber_intr_encrypt(babyKyber_io_cio_babykyber_intr_encrypt),
    .io_cio_babykyber_intr_decrypt(babyKyber_io_cio_babykyber_intr_decrypt)
  );
  UartTOP uart ( // @[XSoC.scala 27:20]
    .clock(uart_clock),
    .reset(uart_reset),
    .io_ren(uart_io_ren),
    .io_we(uart_io_we),
    .io_wdata(uart_io_wdata),
    .io_addr(uart_io_addr),
    .io_rdata(uart_io_rdata)
  );
  WishboneHost uartHostAdapter ( // @[XSoC.scala 58:31]
    .clock(uartHostAdapter_clock),
    .reset(uartHostAdapter_reset),
    .io_wbMasterTransmitter_ready(uartHostAdapter_io_wbMasterTransmitter_ready),
    .io_wbMasterTransmitter_valid(uartHostAdapter_io_wbMasterTransmitter_valid),
    .io_wbMasterTransmitter_bits_cyc(uartHostAdapter_io_wbMasterTransmitter_bits_cyc),
    .io_wbMasterTransmitter_bits_stb(uartHostAdapter_io_wbMasterTransmitter_bits_stb),
    .io_wbMasterTransmitter_bits_we(uartHostAdapter_io_wbMasterTransmitter_bits_we),
    .io_wbMasterTransmitter_bits_adr(uartHostAdapter_io_wbMasterTransmitter_bits_adr),
    .io_wbMasterTransmitter_bits_dat(uartHostAdapter_io_wbMasterTransmitter_bits_dat),
    .io_wbMasterTransmitter_bits_sel(uartHostAdapter_io_wbMasterTransmitter_bits_sel),
    .io_wbSlaveReceiver_ready(uartHostAdapter_io_wbSlaveReceiver_ready),
    .io_wbSlaveReceiver_bits_ack(uartHostAdapter_io_wbSlaveReceiver_bits_ack),
    .io_wbSlaveReceiver_bits_dat(uartHostAdapter_io_wbSlaveReceiver_bits_dat),
    .io_reqIn_ready(uartHostAdapter_io_reqIn_ready),
    .io_reqIn_valid(uartHostAdapter_io_reqIn_valid),
    .io_reqIn_bits_addrRequest(uartHostAdapter_io_reqIn_bits_addrRequest),
    .io_reqIn_bits_dataRequest(uartHostAdapter_io_reqIn_bits_dataRequest),
    .io_reqIn_bits_activeByteLane(uartHostAdapter_io_reqIn_bits_activeByteLane),
    .io_reqIn_bits_isWrite(uartHostAdapter_io_reqIn_bits_isWrite),
    .io_rspOut_valid(uartHostAdapter_io_rspOut_valid),
    .io_rspOut_bits_dataResponse(uartHostAdapter_io_rspOut_bits_dataResponse)
  );
  WishboneDevice uartDeviceAdapter ( // @[XSoC.scala 59:33]
    .io_wbSlaveTransmitter_ready(uartDeviceAdapter_io_wbSlaveTransmitter_ready),
    .io_wbSlaveTransmitter_bits_ack(uartDeviceAdapter_io_wbSlaveTransmitter_bits_ack),
    .io_wbSlaveTransmitter_bits_dat(uartDeviceAdapter_io_wbSlaveTransmitter_bits_dat),
    .io_wbMasterReceiver_ready(uartDeviceAdapter_io_wbMasterReceiver_ready),
    .io_wbMasterReceiver_valid(uartDeviceAdapter_io_wbMasterReceiver_valid),
    .io_wbMasterReceiver_bits_cyc(uartDeviceAdapter_io_wbMasterReceiver_bits_cyc),
    .io_wbMasterReceiver_bits_stb(uartDeviceAdapter_io_wbMasterReceiver_bits_stb),
    .io_wbMasterReceiver_bits_we(uartDeviceAdapter_io_wbMasterReceiver_bits_we),
    .io_wbMasterReceiver_bits_adr(uartDeviceAdapter_io_wbMasterReceiver_bits_adr),
    .io_wbMasterReceiver_bits_dat(uartDeviceAdapter_io_wbMasterReceiver_bits_dat),
    .io_wbMasterReceiver_bits_sel(uartDeviceAdapter_io_wbMasterReceiver_bits_sel),
    .io_reqOut_valid(uartDeviceAdapter_io_reqOut_valid),
    .io_reqOut_bits_addrRequest(uartDeviceAdapter_io_reqOut_bits_addrRequest),
    .io_reqOut_bits_dataRequest(uartDeviceAdapter_io_reqOut_bits_dataRequest),
    .io_reqOut_bits_activeByteLane(uartDeviceAdapter_io_reqOut_bits_activeByteLane),
    .io_reqOut_bits_isWrite(uartDeviceAdapter_io_reqOut_bits_isWrite),
    .io_rspIn_valid(uartDeviceAdapter_io_rspIn_valid),
    .io_rspIn_bits_dataResponse(uartDeviceAdapter_io_rspIn_bits_dataResponse)
  );
  assign io_pin = core_io_pin; // @[XSoC.scala 87:10]
  assign io_rvfi_valid_0 = core_io_rvfi_valid_0; // @[XSoC.scala 88:11]
  assign io_rvfi_insn_0 = core_io_rvfi_insn_0; // @[XSoC.scala 88:11]
  assign io_rvfi_mode_0 = 2'h3; // @[XSoC.scala 88:11]
  assign io_rvfi_rs1_addr_0 = core_io_rvfi_rs1_addr_0; // @[XSoC.scala 88:11]
  assign io_rvfi_rs2_addr_0 = core_io_rvfi_rs2_addr_0; // @[XSoC.scala 88:11]
  assign io_rvfi_rs1_rdata_0 = core_io_rvfi_rs1_rdata_0; // @[XSoC.scala 88:11]
  assign io_rvfi_rs2_rdata_0 = core_io_rvfi_rs2_rdata_0; // @[XSoC.scala 88:11]
  assign io_rvfi_rd_addr_0 = core_io_rvfi_rd_addr_0; // @[XSoC.scala 88:11]
  assign io_rvfi_rd_wdata_0 = core_io_rvfi_rd_wdata_0; // @[XSoC.scala 88:11]
  assign io_rvfi_pc_rdata_0 = core_io_rvfi_pc_rdata_0; // @[XSoC.scala 88:11]
  assign io_rvfi_pc_wdata_0 = core_io_rvfi_pc_wdata_0; // @[XSoC.scala 88:11]
  assign io_rvfi_mem_addr_0 = core_io_rvfi_mem_addr_0; // @[XSoC.scala 88:11]
  assign io_rvfi_mem_wmask_0 = core_io_rvfi_mem_wmask_0; // @[XSoC.scala 88:11]
  assign io_rvfi_mem_rdata_0 = core_io_rvfi_mem_rdata_0; // @[XSoC.scala 88:11]
  assign io_rvfi_mem_wdata_0 = core_io_rvfi_mem_wdata_0; // @[XSoC.scala 88:11]
  assign core_clock = clock;
  assign core_reset = reset;
  assign core_io_baby_kyber_req_ready = hostAdapter_io_reqIn_ready; // @[XSoC.scala 33:32]
  assign core_io_baby_kyber_rsp_valid = hostAdapter_io_rspOut_valid; // @[XSoC.scala 36:25]
  assign core_io_baby_kyber_rsp_bits_dataResponse = hostAdapter_io_rspOut_bits_dataResponse; // @[XSoC.scala 36:25]
  assign core_io_baby_kyber_cio_babykyber_intr_key = babyKyber_io_cio_babykyber_intr_key; // @[XSoC.scala 53:45]
  assign core_io_baby_kyber_cio_babykyber_intr_encrypt = babyKyber_io_cio_babykyber_intr_encrypt; // @[XSoC.scala 54:49]
  assign core_io_baby_kyber_cio_babykyber_intr_decrypt = babyKyber_io_cio_babykyber_intr_decrypt; // @[XSoC.scala 55:49]
  assign hostAdapter_clock = clock;
  assign hostAdapter_reset = reset;
  assign hostAdapter_io_wbMasterTransmitter_ready = deviceAdapter_io_wbMasterReceiver_ready; // @[XSoC.scala 39:38]
  assign hostAdapter_io_wbSlaveReceiver_bits_ack = deviceAdapter_io_wbSlaveTransmitter_bits_ack; // @[XSoC.scala 40:39]
  assign hostAdapter_io_wbSlaveReceiver_bits_dat = deviceAdapter_io_wbSlaveTransmitter_bits_dat; // @[XSoC.scala 40:39]
  assign hostAdapter_io_reqIn_valid = core_io_baby_kyber_req_valid; // @[XSoC.scala 31:30]
  assign hostAdapter_io_reqIn_bits_addrRequest = core_io_baby_kyber_req_bits_addrRequest; // @[XSoC.scala 32:29]
  assign hostAdapter_io_reqIn_bits_dataRequest = core_io_baby_kyber_req_bits_dataRequest; // @[XSoC.scala 32:29]
  assign hostAdapter_io_reqIn_bits_activeByteLane = core_io_baby_kyber_req_bits_activeByteLane; // @[XSoC.scala 32:29]
  assign hostAdapter_io_reqIn_bits_isWrite = core_io_baby_kyber_req_bits_isWrite; // @[XSoC.scala 32:29]
  assign deviceAdapter_io_wbSlaveTransmitter_ready = hostAdapter_io_wbSlaveReceiver_ready; // @[XSoC.scala 40:39]
  assign deviceAdapter_io_wbMasterReceiver_valid = hostAdapter_io_wbMasterTransmitter_valid; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_cyc = hostAdapter_io_wbMasterTransmitter_bits_cyc; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_stb = hostAdapter_io_wbMasterTransmitter_bits_stb; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_we = hostAdapter_io_wbMasterTransmitter_bits_we; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_adr = hostAdapter_io_wbMasterTransmitter_bits_adr; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_dat = hostAdapter_io_wbMasterTransmitter_bits_dat; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_sel = hostAdapter_io_wbMasterTransmitter_bits_sel; // @[XSoC.scala 39:38]
  assign deviceAdapter_io_rspIn_valid = babyKyber_io_rsp_valid; // @[XSoC.scala 44:26]
  assign deviceAdapter_io_rspIn_bits_dataResponse = babyKyber_io_rsp_bits_dataResponse; // @[XSoC.scala 44:26]
  assign babyKyber_clock = clock;
  assign babyKyber_reset = reset;
  assign babyKyber_io_req_valid = deviceAdapter_io_reqOut_valid; // @[XSoC.scala 43:20]
  assign babyKyber_io_req_bits_isWrite = deviceAdapter_io_reqOut_bits_isWrite; // @[XSoC.scala 43:20]
  assign babyKyber_io_req_bits_dataRequest = deviceAdapter_io_reqOut_bits_dataRequest; // @[XSoC.scala 43:20]
  assign babyKyber_io_req_bits_addrRequest = deviceAdapter_io_reqOut_bits_addrRequest; // @[XSoC.scala 43:20]
  assign babyKyber_io_req_bits_activeByteLane = deviceAdapter_io_reqOut_bits_activeByteLane; // @[XSoC.scala 43:20]
  assign babyKyber_io_key_enable = core_io_key_enable_trigger; // @[XSoC.scala 48:27]
  assign babyKyber_io_encryption_enable = core_io_encryption_enable_trigger; // @[XSoC.scala 49:34]
  assign babyKyber_io_decryption_enable = core_io_decryption_enable_trigger; // @[XSoC.scala 50:34]
  assign uart_clock = clock;
  assign uart_reset = reset;
  assign uart_io_ren = uartDeviceAdapter_io_reqOut_valid & ~uartDeviceAdapter_io_reqOut_bits_isWrite; // @[XSoC.scala 70:52]
  assign uart_io_we = uartDeviceAdapter_io_reqOut_valid & uartDeviceAdapter_io_reqOut_bits_isWrite; // @[XSoC.scala 71:51]
  assign uart_io_wdata = uartDeviceAdapter_io_reqOut_bits_dataRequest; // @[XSoC.scala 72:17]
  assign uart_io_addr = uartDeviceAdapter_io_reqOut_bits_addrRequest[7:0]; // @[XSoC.scala 73:63]
  assign uartHostAdapter_clock = clock;
  assign uartHostAdapter_reset = reset;
  assign uartHostAdapter_io_wbMasterTransmitter_ready = uartDeviceAdapter_io_wbMasterReceiver_ready; // @[XSoC.scala 66:42]
  assign uartHostAdapter_io_wbSlaveReceiver_bits_ack = uartDeviceAdapter_io_wbSlaveTransmitter_bits_ack; // @[XSoC.scala 67:43]
  assign uartHostAdapter_io_wbSlaveReceiver_bits_dat = uartDeviceAdapter_io_wbSlaveTransmitter_bits_dat; // @[XSoC.scala 67:43]
  assign uartHostAdapter_io_reqIn_valid = 1'h0; // @[XSoC.scala 62:28]
  assign uartHostAdapter_io_reqIn_bits_addrRequest = 32'h0; // @[XSoC.scala 62:28]
  assign uartHostAdapter_io_reqIn_bits_dataRequest = 32'h0; // @[XSoC.scala 62:28]
  assign uartHostAdapter_io_reqIn_bits_activeByteLane = 4'h0; // @[XSoC.scala 62:28]
  assign uartHostAdapter_io_reqIn_bits_isWrite = 1'h0; // @[XSoC.scala 62:28]
  assign uartDeviceAdapter_io_wbSlaveTransmitter_ready = uartHostAdapter_io_wbSlaveReceiver_ready; // @[XSoC.scala 67:43]
  assign uartDeviceAdapter_io_wbMasterReceiver_valid = uartHostAdapter_io_wbMasterTransmitter_valid; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_wbMasterReceiver_bits_cyc = uartHostAdapter_io_wbMasterTransmitter_bits_cyc; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_wbMasterReceiver_bits_stb = uartHostAdapter_io_wbMasterTransmitter_bits_stb; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_wbMasterReceiver_bits_we = uartHostAdapter_io_wbMasterTransmitter_bits_we; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_wbMasterReceiver_bits_adr = uartHostAdapter_io_wbMasterTransmitter_bits_adr; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_wbMasterReceiver_bits_dat = uartHostAdapter_io_wbMasterTransmitter_bits_dat; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_wbMasterReceiver_bits_sel = uartHostAdapter_io_wbMasterTransmitter_bits_sel; // @[XSoC.scala 66:42]
  assign uartDeviceAdapter_io_rspIn_valid = 1'h1; // @[XSoC.scala 77:36]
  assign uartDeviceAdapter_io_rspIn_bits_dataResponse = uart_io_rdata; // @[XSoC.scala 78:48]
endmodule
