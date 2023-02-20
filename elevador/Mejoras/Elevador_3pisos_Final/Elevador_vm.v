`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:27:44 11/09/2022 
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
    output reg [6:0] display,
    output reg mup,
    output reg mdw,
    input p1,
    input p2,
    input p3,
    input f1,
    input f2,
    input f3,
	 input s,
	 input reset,
	 input clk,
	 output acDis
    );

assign acDis = 1'b0;
	 
	 reg D0,D1,D3,D4; //registros para el uso del display
	 
//descripcion de la maquina de estados
   parameter e0 = 4'b0000;
   parameter e1 = 4'b0001;
   parameter e2 = 4'b0010;
   parameter e3 = 4'b0011;
   parameter e4 = 4'b0100;
   parameter e5 = 4'b0101;
   parameter e6 = 4'b0110;
   parameter e7 = 4'b0111;
	parameter e8 = 4'b1000;
	parameter e9 = 4'b1001;
	parameter e10 = 4'b1010;
	parameter e11 = 4'b1011;
	parameter e12 = 4'b1100;
	parameter e13 = 4'b1101;
	
	   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [3:0] state = e13;

   always@(posedge clk)
      if (~reset) begin
         state <= e13;
         mup <= 1'b0;
			mdw <= 1'b0;
			D0 <= 7'b0000010;
			//D1 <= 7'b0000010;
			//D2 <= 7'b;
			//D3 <= 7'b;
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            e0 : begin //primer piso
               if (p1==0 & p2==1 & p3==0 & s==0)
                  state <= e1;
               else if (p1==0 & p2==0 & p3==1 & s==0)
                  state <= e3;
					else if (f2==1)
                  state <= e12;
					else if (f3==1)
                  state <= e10;
					else if (f1==0)
                  state <= e11;
               else
                  state <= e0;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b0110000;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e1 : begin //subiendo del 1 al 2
               if (f2==1)
                  state <= e2;
					else if (f3==1)
                  state <= e10;
               else
                  state <= e1;
						mup <= 1'b1;
						mdw <= 1'b0;
						D0 <= 7'b0110000;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e2 : begin //segundo piso
				   if (f2==0)
                  state <= e12;
               if (f1==1)
                  state <= e11;
					else if (f3==1)
                  state <= e10;
				   else if (p1==1 & p2==0 & p3==0 & s==0)
                  state <= e8;
					else if (p1==0 & p2==0 & p3==1 & s==0)
                  state <= e6;
               else
                  state <= e2;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b1101101;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e3 : begin //sube del 1 al 3 sin llegar al 2 aun
               if (f2==1)
                  state <= e4;
					else if (f3==1)
                  state <= e10;
				   else if (p1==0 & p2==1 & p3==0 & s==0)
                  state <= e1;
               else
                  state <= e3;
						mup <= 1'b1;
						mdw <= 1'b0;
						D0 <= 7'b0110000;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e4 : begin //sube del 1 al 3 ya paso por el 2
               if (f1==1)
                  state <= e11;
					else if (f3==1)
                  state <= e5;
               else
                  state <= e4;
						mup <= 1'b1;
						mdw <= 1'b0;
						//D0 <= 7'b1101101;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e5 : begin //piso 3
					if (f3==0)
                  state <= e10;
               if (f2==1)
                  state <= e12;
					else if (f1==1)
                  state <= e11;
					else if (p1==0 & p2==1 & p3==0 & s==0)
                  state <= e7;
					else if (p1==1 & p2==0 & p3==0 & s==0)
                  state <= e9;
               else
                  state <= e5;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b1111001;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e6 : begin //subiendo del 2 al 3
					if (f3==1)
                  state <= e5;
               if (f1==1)
                  state <= e11;
               else
                  state <= e6;
						mup <= 1'b1;
						mdw <= 1'b0;
						D0 <= 7'b1101101;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e7 : begin //bajando del 3 al 2
					if (f1==1)
                  state <= e11;
               if (f2==1)
                  state <= e2;
               else
                  state <= e7;
						mup <= 1'b0;
						mdw <= 1'b1;
						D0 <= 7'b1111001;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e8 : begin //bajando del 2 al 1
					if (f1==1)
                  state <= e0;
               if (f3==1)
                  state <= e10;
               else
                  state <= e8;
						mup <= 1'b0;
						mdw <= 1'b1;
						D0 <= 7'b1101101;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e9 : begin //bajando del 3 al 1 andes de llegar al 2
					if (f2==1)
                  state <= e8;
               if (f1==1)
                  state <= e11;
					else if (p1==0 & p2==1 & p3==0 & s==0)
                  state <= e7;
               else
                  state <= e9;
						mup <= 1'b0;
						mdw <= 1'b1;
						D0 <= 7'b1111001;
						//D1 <= 7'b;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e10 : begin //Error F3
                  state <= e10;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b0000010;
						//D1 <= 7'b0000010;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
				e11 : begin //Error F1
                  state <= e11;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b0000010;
						//D1 <= 7'b0000010;
						//D2 <= 7'b;
						//D3 <= 7'b;		
            end
			endcase

endmodule
