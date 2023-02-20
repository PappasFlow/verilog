`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// registro desplazamiento
//////////////////////////////////////////////////////////////////////////////////
module Shift_register(
    input clk,
    input rst,
    output serialOut
    );

wire q0,q1,q2,q3,q4,q5,q6,q7;
// Instantiate the module FFD
FFD ff0 (
    .d(q7), 
    .q(q0), 
    .s(rst), 
    .r(1'b0), 
    .clk(clk)
    );
	
FFD ff1 (
    .d(q0), 
    .q(q1), 
    .s(rst), 
    .r(1'b0), 
    .clk(clk)
    );

FFD ff2 (
    .d(q1), 
    .q(q2), 
    .s(1'b0), 
    .r(rst), 
    .clk(clk)
    );

FFD ff3 (
    .d(q2), 
    .q(q3), 
    .s(rst), 
    .r(1'b0), 
    .clk(clk)
    );
	 
FFD ff4 (
    .d(q3), 
    .q(q4), 
    .s(1'b0), 
    .r(rst), 
    .clk(clk)
    );

FFD ff5 (
    .d(q4), 
    .q(q5), 
    .s(1'b0), 
    .r(rst), 
    .clk(clk)
    );
	 
FFD ff6 (
    .d(q5), 
    .q(q6), 
    .s(rst), 
    .r(1'b0), 
    .clk(clk)
    );
	 
FFD ff7 (
    .d(q6), 
    .q(q7), 
    .s(1'b0), 
    .r(rst), 
    .clk(clk)
    );
	 

	 assign serialOut = q7;

endmodule
