`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:26:48 10/05/2022 
// Design Name: 
// Module Name:    FFD_vm 
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
module FFD_vm(
    input d,
    output reg q,
    input s,
    input r,
    input clk
    );
	 
	    always @(posedge clk or posedge r or posedge s)
      if (r) begin
         q <= 1'b0;
		end else if (s) begin
		   q <= 1'b1;
      end else begin
         q <= d;
      end
	


endmodule
