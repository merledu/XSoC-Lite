/* verilator lint_off ASSIGNDLY */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
/* verilator lint_off SYNCASYNCNET */

module sram_top #(
    parameter IFILE_IN = ""
)
(
  input clk_i,
  input rst_i,

// sram interface in
  input        csb_i,
  input [27:0] addr_i,
  input [31:0] wdata_i,
  input [3:0]  wmask_i,
  input        we_i,
  output reg [31:0] rdata_o

);

reg        csb;
reg [12:0] addr_o;
reg [31:0] wdata_o;
reg [3:0]  wmask_o;
reg        we_o;
reg [31:0] rdata_i;

reg rvalid;

always @(negedge clk_i) begin
  if(rst_i) begin
    csb <= 1'b1;
    addr_o <= 0;
    wdata_o <= 0;
    wmask_o <= 0;
    we_o <= 1'b1;
  end else begin
    csb <= csb_i;
    addr_o <= addr_i;
    wdata_o <= wdata_i;
    wmask_o <= wmask_i;
    we_o <= we_i;
  end
end

sram #(
  .NUM_WMASKS (4),
  .DATA_WIDTH (32),
  //.ADDR_WIDTH (13),
  //.RAM_DEPTH (1 << 13),
  // FIXME: This delay is arbitrary.
  .DELAY (3),
  .IZERO (0) , // binary / Initial RAM with zeros (has priority over INITFILE)
  .IFILE (IFILE_IN)
 ) memory (
/*`ifdef USE_POWER_PINS
	.vdd,
	.gnd,
`endif */
    .clk0(clk_i),
    .csb0(csb_i),
    .web0(we_i),
    .wmask0(wmask_i),
    .addr0(addr_i),
    .din0(wdata_i),
    .dout0(rdata_o),
    .clk1(1'b0),
    .csb1(1'b1),
    .addr1(0),
    .dout1()
 );

always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
     rvalid <= 1'b0;
    end else if (!we_i) begin
     rvalid <= 1'b0;
    end else if(!csb_i && we_i) begin
     rvalid <= 1'b1;
    end
end

endmodule
