`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:48:56 06/13/2022
// Design Name:   Vprueba1
// Module Name:   D:/Documentos/Proyectos_Digitales/prueba/Tprueba.v
// Project Name:  prueba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Vprueba1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Tprueba;

	// Inputs
	reg a;
	reg b;
	reg sel;

	// Outputs
	wire s;

	// Instantiate the Unit Under Test (UUT)
	Vprueba1 uut (
		.a(a), 
		.b(b), 
		.sel(sel), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		sel = 0;
		#10;
			// Initialize Inputs
		a = 1;
		b = 0;
		sel = 0;
		#10;
			// Initialize Inputs
		a = 0;
		b = 1;
		sel = 0;
		#10;
			// Initialize Inputs
		a = 1;
		b = 1;
		sel = 0;
		#10;
			// Initialize Inputs
		a = 0;
		b = 0;
		sel = 1;
		#10;
			// Initialize Inputs
		a = 1;
		b = 0;
		sel = 1;
		#10;
			// Initialize Inputs
		a = 0;
		b = 1;
		sel = 1;
		#10;
			// Initialize Inputs
		a = 1;
		b = 1;
		sel = 1;
		#10;
        
		// Add stimulus here

	end
      
endmodule

