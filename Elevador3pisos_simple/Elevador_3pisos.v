`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// elevador de 3 pisos
//
//////////////////////////////////////////////////////////////////////////////////
module Elevador_3pisos(
    output reg [6:0] display,
    output reg mup,
    output reg mdw,
    input p1,
    input p2,
    input p3,
    input f1,
    input f2,
    input f3,
	 input reset,
	 input clk
    );
	 
//descripcion de la maquina de estados
   parameter e0 = 3'b000;
   parameter e1 = 3'b001;
   parameter e2 = 3'b010;
   parameter e3 = 3'b011;
   parameter e4 = 3'b100;
   parameter e5 = 3'b101;
   parameter e6 = 3'b110;
   parameter e7 = 3'b111;

   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [2:0] state = e0;

   always@(posedge clk)
      if (reset) begin
         state <= e0;
         mup <= 1'b0;
			mdw <= 1'b0;
			display <= 7'b0110000;
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            e0 : begin //primer piso
               if (p1==0 & p2==1 & p3==0)
                  state <= e1;
               else if (p1==0 & p2==0 & p3==1)
                  state <= e3;
               else
                  state <= e0;
						mup <= 1'b0;
						mdw <= 1'b0;
						display <= 7'b0110000;
						
            end
            e1 : begin //subiendo al piso 2 del 1
               if (f2==1)
                  state <= e2;
               else
                  state <= e1;
						mup <= 1'b1;
						mdw <= 1'b0;
						display <= 7'b1100011;
            end
            e2 : begin //en segundo piso
               if (p1==1 & p2==0 & p3==0)
                  state <= e7;
               else if (p1==0 & p2==0 & p3==1)
                  state <= e6;
               else
                  state <= e2;
						mup <= 1'b0;
						mdw <= 1'b0;
						display <= 7'b1101101;
            end
            e3 : begin //subiendo al piso 3 del 1
               if (f3==1)
                  state <= e4;
               else
                  state <= e3;
						mup <= 1'b1;
						mdw <= 1'b0;
						display <= 7'b1100011;
            end
            e4 : begin //en piso 3
               if (p1==1 & p2==0 & p3==0)
                  state <= e7;
               else if (p1==0 & p2==1 & p3==0)
                  state <= e5;
               else
                  state <= e4;
						mup <= 1'b0;
						mdw <= 1'b0;
						display <= 7'b1111001;
            end
            e5 : begin  //bajando al piso 2 del 3
               if (f2==1)
                  state <= e2;
               else
                  state <= e5;
						mup <= 1'b0;
						mdw <= 1'b1;
						display <= 7'b0011101;
            end
            e6 : begin  //subiendo al piso 3 del 2
               if (f3==1)
                  state <= e4;
               else
                  state <= e6;
						mup <= 1'b1;
						mdw <= 1'b0;
						display <= 7'b1100011;
            end
            e7 : begin  //bajando al piso 1 del 2 
               if (f1==1)
                  state <= e0;
               else
                  state <= e7;
						mup <= 1'b0;
						mdw <= 1'b1;
						display <= 7'b0011101;
            end
         endcase

endmodule
