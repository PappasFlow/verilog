`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Test_Elevador
////////////////////////////////////////////////////////////////////////////////

module Test_Elevador;

	// Inputs
	reg p1;
	reg p2;
	reg p3;
	reg f1;
	reg f2;
	reg f3;
	reg s;
	reg reset;
	reg clk;

	// Outputs
	wire [6:0] D_out;
	wire mup;
	wire mdw;
	wire [3:0] E_dis;
	wire [3:0] led;

	// Instantiate the Unit Under Test (UUT)
	Elevador_3pisos uut (
		.D_out(D_out), 
		.mup(mup), 
		.mdw(mdw), 
		.p1(p1), 
		.p2(p2), 
		.p3(p3), 
		.f1(f1), 
		.f2(f2), 
		.f3(f3), 
		.s(s), 
		.reset(reset), 
		.clk(clk), 
		.E_dis(E_dis), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		s = 0;
		p1 = 0;
		p2 = 0;
		p3 = 0;
		f1 = 1;
		f2 = 0;
		f3 = 0;
		reset = 0;
		#10;
		reset = 1;
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

