`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// testeo de elevador 3 pisos
// 
////////////////////////////////////////////////////////////////////////////////

module Test_elevador;

	// Inputs
	reg p1;
	reg p2;
	reg p3;
	reg f1;
	reg f2;
	reg f3;
	reg reset;
	reg clk;

	// Outputs
	wire [6:0] display;
	wire mup;
	wire mdw;

	// Instantiate the Unit Under Test (UUT)
	Elevador_3pisos uut (
		.display(display), 
		.mup(mup), 
		.mdw(mdw), 
		.p1(p1), 
		.p2(p2), 
		.p3(p3), 
		.f1(f1), 
		.f2(f2), 
		.f3(f3), 
		.reset(reset), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		p1 = 0;
		p2 = 0;
		p3 = 0;
		f1 = 1;
		f2 = 0;
		f3 = 0;
		reset = 1;
		#10;
		reset = 0;
		#100;//pulsador 3
		p3 = 1;
		#15;
		p3 = 0;
		f1 = 0;
      #50;
		f2= 1; //pasa por piso 2
		#10;
		f2= 0;
		#50;
		f3= 1;//llega a piso 3
		#100;//pulsador 1
		p1 = 1;
		#15;
		p1 = 0;
		f3 = 0;
		#50;
		f2= 1; //pasa por piso 2
		#10;
		f2= 0;
		#50;
		f1= 1;//llega a piso 1
		#100;//pulsador 2
		p2 = 1;
		#15;
		p2 = 0;
		f1 = 0;
		#100;
		f2= 1;//llega a piso 2
		#100;//pulsador 1
		p1 = 1;
		#15;
		p1 = 0;
		f2 = 0;
		#100;
		f1= 1;//llega a piso 1
		#100;//pulsador 2
		p2 = 1;
		#15;
		p2 = 0;
		f1 = 0;
		#100;
		f2= 1;//llega a piso 2
		#100;//pulsador 3
		p3 = 1;
		#15;
		p3 = 0;
		f2 = 0;
		#100;
		f3= 0;//llega a piso 3
		#100;//pulsador 2
		p2 = 1;
		#15;
		p2 = 0;
		f3 = 0;
		#100;
		f2= 1;//llega a piso 2

	end
      
		
	//simulacion del clock
	   parameter PERIOD = 5;
   always begin
      clk= 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end  
	//fin clock
	
	
endmodule

