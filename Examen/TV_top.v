`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
//CODIGO TEST 
////////////////////////////////////////////////////////////////////////////////

module TV_top;

	// Inputs
	reg A;
	reg C;
	reg D;

	// Outputs
	wire F1;
	wire F2;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.A(A), 
		.C(C), 
		.D(D), 
		.F1(F1), 
		.F2(F2)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		C = 0;
		D = 0;
		#100;   
		// Sigientes estados
		A = 1;
		C = 0;
		D = 0;
		#100;
		// Sigientes estados
		A = 0;
		C = 1;
		D = 0;
		#100;
		// Sigientes estados
		A = 1;
		C = 1;
		D = 0;
		#100;
		// Sigientes estados
		A = 0;
		C = 0;
		D = 1;
		#100;
		// Sigientes estados
		A = 1;
		C = 0;
		D = 1;
		#100;
		// Sigientes estados
		A = 0;
		C = 1;
		D = 1;
		#100;
		// Sigientes estados
		A = 1;
		C = 1;
		D = 1;
		#100;

	end
      
endmodule

