`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:36:56 10/05/2022
// Design Name:   FFD_vm
// Module Name:   C:/monta/FFD_tm.v
// Project Name:  monta
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FFD_vm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FFD_tm;

	// Inputs
	reg d;
	reg s;
	reg r;
	reg clk;

	// Outputs
	wire q;

	// Instantiate the Unit Under Test (UUT)
	FFD_vm uut (
		.d(d), 
		.q(q), 
		.s(s), 
		.r(r), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		d = 0;
		s = 0;
		r = 0;
		#10;
		d = 1;
		#10;
		d = 0;
		#10;
		s = 1;
		#10;
		r = 1;
        
		// Add stimulus here

	end
	
	   parameter PERIOD = 2;

   initial begin
      clk = 1'b0;
      #(PERIOD/2);
      forever
         #(PERIOD/2) clk = ~clk;
   end
      
endmodule

