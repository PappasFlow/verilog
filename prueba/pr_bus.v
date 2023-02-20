`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:57:53 10/26/2022 
// Design Name: 
// Module Name:    pr_bus 
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
module pr_bus(
    output [3:0] out,
    input sel
    );

	wire [3:0] data;
	assign data = 4'b1100;
	
			assign out[0] = data[0] & sel;
			assign out[1] = data[1] & sel;
			assign out[2] = data[2] & sel;
			assign out[3] = data[3] & sel;
		
	

endmodule
