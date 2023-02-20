`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Test Divisor de Frecuencia 
////////////////////////////////////////////////////////////////////////////////

module Tes_divisor_frc;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire clk2;

	// Instantiate the Unit Under Test (UUT)
	divisor_frc_VM uut (
		.clk(clk), 
		.rst(rst), 
		.clk2(clk2)
	);

	initial begin
		// Initialize Inputs
		rst = 1;
		#10;
		rst = 0;
        
		// Add stimulus here
	end
	
		//simulacion del clock
	   parameter PERIOD = 20;
   always begin
      clk= 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end  
	//fin clock
      
endmodule

