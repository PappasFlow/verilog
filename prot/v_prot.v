`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:14:26 06/29/2022 
// Design Name: 
// Module Name:    v_prot 
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
module v_prot(
    input A,
    input B,
    input Sel,
    output Sal
    );
  
assign Sal= (A & ~Sel) | (Sel & B);

endmodule
