`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Multiplexor de displays 7 segmentos 
//////////////////////////////////////////////////////////////////////////////////
module mux_Display(
    input [6:0] D0, //señal para el display 0
    input [6:0] D1, //señal para el display 1
    input [6:0] D2, //señal para el display 2
    input [6:0] D3, //señal para el display 3
    output reg [3:0] ED_out, //Enable Display
    output reg [6:0] D_out, //salida para el display 
    input clock,
	 input reset
    );
	 
	 
   parameter e0 = 2'b00;
   parameter e1 = 2'b01;
   parameter e2 = 2'b10;
   parameter e3 = 2'b11;

   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [1:0] state = e0;

   always@(posedge clock)
      if (~reset) begin
         state <= e0;
         D_out <= D0;
			ED_out <= 4'b0001;
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            e0 : begin
                  state <= e1;
						D_out <= D0;
						ED_out <= 4'b0001;
            end
            e1 : begin
						state <= e2;
						D_out <= D1;
						ED_out <= 4'b0010;
            end
            e2 : begin
						state <= e3;
						D_out <= D2;
						ED_out <= 4'b0100;
            end
            e3 : begin
						state <= e0;
						D_out <= D3;
						ED_out <= 4'b1000;
            end
         endcase
							
endmodule
