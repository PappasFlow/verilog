`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//Contador Modulo 7 FFKJ
//////////////////////////////////////////////////////////////////////////////////
module Con_mod7(
    input clk,
    input set,
    output q2,
    output q1,
    output q0
    );

// Instantiate the module ffjk
FFJK ff2 (
    .clk(clk), 
    .J((q1&q0)|set), 
    .K((q1&q0)&~set), 
    .Q(q2), 
    .NQ()
    );
	 
// Instantiate the module ffjk
FFJK ff1 (
    .clk(clk), 
    .J(q0|set), 
    .K(q0 & ~set), 
    .Q(q1), 
    .NQ()
    );
	 
// Instantiate the module ffjk
FFJK ff0 (
    .clk(clk), 
    .J(1), 
    .K(1 & ~set), 
    .Q(q0), 
    .NQ()
    );
endmodule
