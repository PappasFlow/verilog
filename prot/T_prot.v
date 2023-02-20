`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:56:08 06/29/2022
// Design Name:   v_prot
// Module Name:   D:/Documentos/Proyectos_Digitales/prot/t_prot.v
// Project Name:  prot
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: v_prot
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_prot;

	// Inputs
	reg A;
	reg B;
	reg Sel;

	// Outputs
	wire Sal;

	// Instantiate the Unit Under Test (UUT)
	v_prot uut (
		.A(A), 
		.B(B), 
		.Sel(Sel), 
		.Sal(Sal)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Sel = 0;

		#100;		
		A = 0;
		B = 0;
		Sel = 1;

		#100;
		A = 0;
		B = 1;
		Sel = 0;

		#100;
		A = 0;
		B = 1;
		Sel = 1;

		#100;
		A = 1;
		B = 0;
		Sel = 0;

		#100;
		A = 1;
		B = 0;
		Sel = 1;

		#100;
		A = 1;
		B = 1;
		Sel = 0;

		#100;
		A = 1;
		B = 1;
		Sel = 1;

		#100;
        
		// Add stimulus here

	end
      
endmodule

