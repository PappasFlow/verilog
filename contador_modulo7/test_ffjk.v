`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// test ffjk
////////////////////////////////////////////////////////////////////////////////

module test_ffjk;

	// Inputs
	reg clk;
	reg J;
	reg K;

	// Outputs
	wire Q;
	wire NQ;

	// Instantiate the Unit Under Test (UUT)
	FFJK uut (
		.clk(clk), 
		.J(J), 
		.K(K), 
		.Q(Q), 
		.NQ(NQ)
	);

	initial begin
		J = 0;
		K = 0;
		#100;	
		J = 1;
		K = 0;
		#100;	
		J = 0;
		K = 0;
		#100;	
		J = 0;
		K = 1;
		#100;	
		J = 0;
		K = 0;
		#100;	
		J = 1;
		K = 1;
		#100;	
		J = 1;
		K = 1;
		#100;	
		J = 0;
		K = 0;
		
		

	end
      
		   parameter PERIOD = 5;

   always begin
      clk = 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end 
	
endmodule

