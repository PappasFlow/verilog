`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:30 10/12/2022 
// Design Name: 
// Module Name:    Elevador_vm 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Elevador_vm(
    input pa,
    input pb,
    input swa,
    input swb,
    output reg Mup,
    output reg Mdown,
	 input clk,
	 input rst
    );

   parameter E0 = 2'b00;
   parameter E1 = 2'b01;
   parameter E2 = 2'b10;
   parameter E3 = 2'b11;

   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [1:0] state = E0;

   always@(posedge clk)
      if (rst) begin
         state <= E0;
         Mup <= 1'b0;
			Mdown <= 1'b0;
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            E0 : begin
               if (pa & ~pb)
                  state <= E1;
               else if (~swa & ~swb) //si el estado es E0 y ningun sw esta activo el elevador se quedo a la mitad lo bajo de nuevo
                  state <= E3;
               else
                  state <= E0;
               Mup <= 1'b0;
					Mdown <= 1'b0;
            end
            E1 : begin
               if (swa & ~swb)
                  state <= E2;
               //else if (<condition>)
                 // state <= <next_state>;
               else
                  state <= E1;
               Mup <= 1'b1;
					Mdown <= 1'b0;
            end
            E2 : begin
               if (~pa & pb)
                  state <= E3;
               //else if (<condition>)
                  //state <= <next_state>;
               else
                  state <= E2;
               Mup <= 1'b0;
					Mdown <= 1'b0;
            end
            E3 : begin
               if (~swa & swb)
                  state <= E0;
               //else if (<condition>)
                  //state <= <next_state>;
               else
                  state <= E3;
               Mup <= 1'b0;
					Mdown <= 1'b1;
            end
         endcase
							

endmodule
