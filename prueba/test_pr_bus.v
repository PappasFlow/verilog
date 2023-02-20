`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:02:58 10/26/2022
// Design Name:   pr_bus
// Module Name:   D:/Documentos/Proyectos_Digitales/prueba/test_pr_bus.v
// Project Name:  prueba
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pr_bus
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_pr_bus;

	// Inputs
	reg sel;

	// Outputs
	wire [3:0] out;

	// Instantiate the Unit Under Test (UUT)
	pr_bus uut (
		.out(out), 
		.sel(sel)
	);

	initial begin
		// Initialize Inputs
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
       sel = 1;
		 #100;
       sel = 0;
		 #100;
       sel = 1;
		 #100;
       sel = 0;
		// Add stimulus here

	end
      
endmodule

