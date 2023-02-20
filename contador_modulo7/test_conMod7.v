`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Test Contador Modulo 7
////////////////////////////////////////////////////////////////////////////////

module test_conMod7;

	// Inputs
	reg clk;
	reg set;

	// Outputs
	wire q2;
	wire q1;
	wire q0;

	// Instantiate the Unit Under Test (UUT)
	Con_mod7 uut (
		.clk(clk), 
		.set(set), 
		.q2(q2), 
		.q1(q1), 
		.q0(q0)
	);

	initial begin

		set = 1;
		#100;
		set = 0;
	end
      
	//clock
		parameter PERIOD = 25;

   always begin
      clk = 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end 
	//end clock
endmodule

