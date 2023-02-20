`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:10:36 10/12/2022
// Design Name:   Elevador_vm
// Module Name:   D:/Documentos/Proyectos_Digitales/contador/Elevador/elevador/Elevador_tv.v
// Project Name:  elevador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Elevador_vm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Elevador_tv;

	// Inputs
	reg pa;
	reg pb;
	reg swa;
	reg swb;
	reg clk;
	reg rst;

	// Outputs
	wire Mup;
	wire Mdown;

	// Instantiate the Unit Under Test (UUT)
	Elevador_vm uut (
		.pa(pa), 
		.pb(pb), 
		.swa(swa), 
		.swb(swb), 
		.Mup(Mup), 
		.Mdown(Mdown), 
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		pa = 0;
		pb = 0;
		swa = 0;
		swb = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
		rst=0;
		swa = 0;
		swb = 0;//esta tildado al medio 
		#100;
		swb=1;//llego abajo
		#100;
		pa = 1;
		#10;
		pa = 0;
		swb = 0;//deja de tocar swb
		#200;
		swa=1;
		#200;
		pb = 1;
		#10;
		pb = 0;
		swa = 0;//deja de tocar swa
		#200;
		swb=1;//llega abajo
		
        
		// Add stimulus here

	end
	
	//clock
	   parameter PERIOD = 5;

   always begin
      clk = 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end 
      
endmodule

