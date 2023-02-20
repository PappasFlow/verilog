`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Test Multiplexor para display de 7 segmentos
////////////////////////////////////////////////////////////////////////////////

module Test_mux_Display;

	// Inputs
	reg [6:0] D0;
	reg [6:0] D1;
	reg [6:0] D2;
	reg [6:0] D3;
	reg clock;
	reg reset;

	// Outputs
	wire [3:0] ED_out;
	wire [6:0] D_out;

	// Instantiate the Unit Under Test (UUT)
	mux_Display uut (
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.ED_out(ED_out), 
		.D_out(D_out), 
		.clock(clock), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		D0 = 7'b1111000;
		D1 = 7'b0001111;
		D2 = 7'b0011100;
		D3 = 7'b1100011;
		reset = 1;

	end
      
		   parameter PERIOD = 100;

   always begin
      clock = 1'b0;
      #(PERIOD/2) clock = 1'b1;
      #(PERIOD/2);
   end 
	
endmodule

