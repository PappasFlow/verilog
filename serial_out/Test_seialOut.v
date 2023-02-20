`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
//test serial out
////////////////////////////////////////////////////////////////////////////////

module Test_seialOut;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire serialOut;

	// Instantiate the Unit Under Test (UUT)
	Shift_register uut (
		.clk(clk), 
		.rst(rst), 
		.serialOut(serialOut)
	);

	initial begin
		rst = 1;
		#100;
      rst = 0;
	end
	
	//clock
	parameter PERIOD = 25;

   always begin
      clk = 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end 
      
endmodule

