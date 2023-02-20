`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:30:20 10/11/2022 
// Design Name: 
// Module Name:    Ascensor2pisos 
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
module Ascensor2pisos(
    input PA,
    input PB,
    input swa,
    input swb,
    output reg motSube,
    output reg motBaja,
    input clk,
    input reset
    );


   parameter E0 = 2'b00;
   parameter E1 = 2'b01;
   parameter E2 = 2'b10;
   parameter E3 = 2'b11;

   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [1:0] state = E0;

   always@(posedge clk)
      if (reset) begin
         state <= E0;
        // <outputs> <= <initial_values>;
			motSube <=0;
			motBaja <=0;
			
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            E0 : begin
               if (PA & swb)
                  state <= E1;
               //else if (<condition>)
               //   state <= <next_state>;
               else
                  state <= E0;
               //<outputs> <= <values>;
					motSube <=0;
					motBaja <=0;
            end
            E1 : begin
               if (swa)
                  state <= E2;
               //else if (<condition>)
               //   state <= <next_state>;
               else
                  state <= E1;
               //<outputs> <= <values>;
					motSube <=1;
					motBaja <=0;
            end
            E2 : begin
               if (PB)
                  state <= E3;
               //else if (<condition>)
               //   state <= <next_state>;
               else
                  state <= E2;
//               <outputs> <= <values>;

					motSube <=0;
					motBaja <=0;
            end
            E3 : begin
               if (swb)
                  state <= E0;
               //else if (<condition>)
               //   state <= <next_state>;
               else
                  state <= E3;
               //<outputs> <= <values>;
					motSube <=0;
					motBaja <=1;					
            end
         endcase
							
endmodule



