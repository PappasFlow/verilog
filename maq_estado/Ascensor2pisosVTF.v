`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:46:40 10/11/2022
// Design Name:   Ascensor2pisos
// Module Name:   E:/temp/Verilog/MaquinaEstados/MaquinaEstado/Ascensor2pisosVTF.v
// Project Name:  MaquinaEstado
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Ascensor2pisos
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Ascensor2pisosVTF;

	// Inputs
	reg PA;
	reg PB;
	reg swa;
	reg swb;
	reg clk;
	reg reset;

	// Outputs
	wire motSube;
	wire motBaja;

	// Instantiate the Unit Under Test (UUT)
	Ascensor2pisos uut (
		.PA(PA), 
		.PB(PB), 
		.swa(swa), 
		.swb(swb), 
		.motSube(motSube), 
		.motBaja(motBaja), 
		.clk(clk), 
		.reset(reset)
	);


   // Note: CLK must be defined as a reg when using this method
   
   parameter PERIOD = 15;

   always begin
      clk = 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end  
				

	initial begin
		// Initialize Inputs
		PA = 0;
		PB = 0;
		swa = 0;
		swb = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		reset = 1;
		#100;
		reset = 0;

		swb = 1;

		#300;
		PA = 1;
		#100;
		PA = 0;
		
		#100;
		swb = 0;
		
		

		#300;
		swb=1;
		#100;
		swb=0;
		#100;



		#300;
		swa=1;
		#100;
		
		PA = 1;
		#100;
		PA = 0;
		#100;

		PB = 1;
		#100;
		PB = 0;
		
		
		
		#100;
		swa=0;




		#100;
		

		

	end
      
endmodule

