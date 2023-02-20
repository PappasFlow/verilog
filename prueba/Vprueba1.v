`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:55:14 06/13/2022 
// Design Name: 
// Module Name:    Vprueba1 
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
module Vprueba1(
    input a,
    input b,
	 input sel,
    output s
    );
 wire w1,w2;
 
 //assign s = (a & sel) | (b & ~sel) ;
  assign w1 = (a & sel) ;
  assign w2 =  (b & sel) ;
  assign s = w1 | w2 ;
 
endmodule
