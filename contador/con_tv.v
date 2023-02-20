`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:23:27 10/05/2022
// Design Name:   con_vm
// Module Name:   C:/monta/con_tv.v
// Project Name:  monta
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: con_vm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module con_tv;

	// Inputs
	reg res;
	reg clk;
	reg x;

	// Outputs
	wire s2;
	wire s1;
	wire s0;

	// Instantiate the Unit Under Test (UUT)
	con_vm uut (
		.s2(s2), 
		.s1(s1), 
		.s0(s0), 
		.res(res), 
		.clk(clk), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		res = 1;
		x = 1;

		// Wait 100 ns for global reset to finish
		#10;
		res=0;
		#90;
		res=1;
		x = 0;
		#10;
		res=0;
		
		
        
		// Add stimulus here

	end
	
	
	   parameter PERIOD = 5;

   initial begin
      clk = 1'b0;
      #(PERIOD/2);
      forever
         #(PERIOD/2) clk = ~clk;
   end
      
endmodule

