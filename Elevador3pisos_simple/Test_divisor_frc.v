`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:41:01 10/23/2022
// Design Name:   divisor_frc_VM
// Module Name:   D:/Documentos/Proyectos_Digitales/Elevador3pisos/Test_divisor_frc.v
// Project Name:  Elevador3pisos
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: divisor_frc_VM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test_divisor_frc;

	// Inputs
	reg clk;

	// Outputs
	wire clk2;

	// Instantiate the Unit Under Test (UUT)
	divisor_frc_VM uut (
		.clk(clk), 
		.clk2(clk2)
	);

	//simulacion del clock
	   parameter PERIOD = 2;
   always begin
      clk= 1'b0;
      #(PERIOD/2) clk = 1'b1;
      #(PERIOD/2);
   end  
	//fin clock
      
endmodule

