`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:22:53 06/28/2022
// Design Name:   VM_decode
// Module Name:   D:/Documentos/Proyectos_Digitales/Practica/VT_decode.v
// Project Name:  Practica
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: VM_decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module VT_decode;

	// Inputs
	reg sel0;
	reg sel1;

	// Outputs
	wire S0;
	wire S1;
	wire S2;
	wire S3;

	// Instantiate the Unit Under Test (UUT)
	VM_decode uut (
		.sel0(sel0), 
		.sel1(sel1), 
		.S0(S0), 
		.S1(S1), 
		.S2(S2), 
		.S3(S3)
	);

	initial begin
		// Initialize Inputs
		sel0 = 0;
		sel1 = 0;

		// Wait 100 ns for global reset to finish
		#100;
				// Initialize Inputs
		sel0 = 1;
		sel1 = 0; 

		// Wait 100 ns for global reset to finish
		#100;
				// Initialize Inputs
		sel0 = 0;
		sel1 = 1;

		// Wait 100 ns for global reset to finish
		#100;
				// Initialize Inputs
		sel0 = 1;
		sel1 = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

