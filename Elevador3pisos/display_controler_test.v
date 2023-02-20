`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:38:31 10/20/2022
// Design Name:   displa_controler_vm
// Module Name:   D:/Documentos/Proyectos_Digitales/Elevador3pisos/display_controler_test.v
// Project Name:  Elevador3pisos
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: displa_controler_vm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module display_controler_test;

	// Inputs
	reg i0;
	reg i1;
	reg i2;
	reg clock;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;

	// Instantiate the Unit Under Test (UUT)
	displa_controler_vm uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.i0(i0), 
		.i1(i1), 
		.i2(i2), 
		.clock(clock)
	);

	initial begin
		// Initialize Inputs
		i0 = 0;
		i1 = 0;
		i2 = 0;
		// Wait 100 ns for global reset to finish
		#100;
        

	end
	
	//simulacion clock
	   parameter PERIOD = 25;
   always begin
      clock = 1'b0;
      #(PERIOD/2) clock = 1'b1;
      #(PERIOD/2);
   end 
	//fin simulacion clock
      
endmodule

