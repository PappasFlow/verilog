`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:36 10/05/2022 
// Design Name: 
// Module Name:    mux4a1_vm 
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
module mux4a1_vm(
    input q0,
    input q1,
    input q2,
    input q3,
    input s0,
    input s1,
    output out
    );
	 
	 wire w1,w2,w3,w0;
	 and(w0,~s0,~s1);
	 and(w1,s0,~s1);
	 and(w2,~s0,s1);
	 and(w3,s0,s1);
	 
	 assign out =((w0&q0)|(w1&q1)|(w2&q2)|(w3&q3));
	 


endmodule
