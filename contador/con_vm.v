`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:49 10/05/2022 
// Design Name: 
// Module Name:    con_vm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module con_vm(
    output s2,
    output s1,
    output s0,
	 input res,
    input clk,
    input x
    );
wire if2, if1, if0, wres, n1;
nor(n1,s0,s1);

FFD_vm ff0 (
    .d(if0), 
    .q(s0), 
    .s(1'b0), 
    .r(res|wres), 
    .clk(clk)
    );
	 
FFD_vm ff1 (
    .d(if1), 
    .q(s1), 
    .s(1'b0), 
    .r(res|wres), 
    .clk(clk)
    );
	 
FFD_vm ff2 (
    .d(if2), 
    .q(s2), 
    .s(res|wres), 
    .r(1'b0), 
    .clk(clk)
    );


mux4a1_vm mux2 (
    .q0(n1), 
    .q1(s0|s1), 
    .q2(s0&s1), 
    .q3(~s0), 
    .s0(s2), 
    .s1(x), 
    .out(if2)
    );


mux4a1_vm mux1 (
    .q0(s0&s1), 
    .q1(n1), 
    .q2(s0^s1), 
    .q3(1'b0), 
    .s0(s2), 
    .s1(x), 
    .out(if1)
    ); 

mux4a1_vm mux0 (
    .q0(~s0), 
    .q1(n1), 
    .q2(~s0), 
    .q3(n1), 
    .s0(s2), 
    .s1(x), 
    .out(if0)
    );

mux4a1_vm mux_res (
    .q0(1'b0), 
    .q1(1'b0), 
    .q2(s2), 
    .q3(s2), 
    .s0(s0), 
    .s1(s1), 
    .out(wres)
    );




endmodule
