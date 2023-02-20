`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
//Testeo del control de display BCD con intermitencia
////////////////////////////////////////////////////////////////////////////////

module test_display_controler;

	// Inputs
	reg i0;
	reg i1;
	reg ip;
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
		.ip(ip), 
		.clock(clock)
	);

	initial begin
	//sin intermitencia
		// piso 1
		i0 = 1;
		i1 = 0;
		ip = 0;
		#100;
      // piso 2
		i0 = 0;
		i1 = 1;
		ip = 0;
		#100;
		// piso 3
		i0 = 1;
		i1 = 1;
		ip = 0;
		#100;
	//con intermitencia
		// piso 1
		i0 = 1;
		i1 = 0;
		ip = 1;
		#100;
      // piso 2
		i0 = 0;
		i1 = 1;
		ip = 1;
		#100;
		// piso 3
		i0 = 1;
		i1 = 1;
		ip = 1;
		#100;

	end
   
   //simulacion de un clock	
		   parameter PERIOD = 25;
   always begin
      clock = 1'b0;
      #(PERIOD/2) clock = 1'b1;
      #(PERIOD/2);
   end 
	//fin simulacion de un clock
	
endmodule

