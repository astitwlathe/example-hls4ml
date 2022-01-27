// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud_rom (
addr0, ce0, q0, clk);

parameter DWIDTH = 14;
parameter AWIDTH = 10;
parameter MEM_SIZE = 1024;

input[AWIDTH-1:0] addr0;
input ce0;
output reg[DWIDTH-1:0] q0;
input clk;

reg [DWIDTH-1:0] ram[0:MEM_SIZE-1];

initial begin
    $readmemh("./softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud_rom.dat", ram);
end



always @(posedge clk)  
begin 
    if (ce0) 
    begin
        q0 <= ram[addr0];
    end
end



endmodule

`timescale 1 ns / 1 ps
module softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud(
    reset,
    clk,
    address0,
    ce0,
    q0);

parameter DataWidth = 32'd14;
parameter AddressRange = 32'd1024;
parameter AddressWidth = 32'd10;
input reset;
input clk;
input[AddressWidth - 1:0] address0;
input ce0;
output[DataWidth - 1:0] q0;



softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud_rom softmax_latency_ap_fixed_ap_fixed_softmax_config9_s_invercud_rom_U(
    .clk( clk ),
    .addr0( address0 ),
    .ce0( ce0 ),
    .q0( q0 ));

endmodule
