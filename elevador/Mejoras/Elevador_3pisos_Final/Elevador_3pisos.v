`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// elevador de 3 pisos
//
//////////////////////////////////////////////////////////////////////////////////
module Elevador_3pisos(
    output reg [6:0] D_out,
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
	 output reg [3:0] E_dis,
	 output reg [3:0]est
    );
	 
	 
	 
	 reg [6:0] D0,D1,D2,D3; //registros para el uso del display
	 
	 
	 // Instantiate the module divisor frecuencia
	 wire clk_MD;//clock interno para multiplezado
	divisor_frc_VM div_frec (
    .clk(clk), 
    .rst(reset), 
    .clk2(clk_MD)
    );

	 
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
			D0 <= 7'b0000001;// -
			D1 <= 7'b0000001;// -
			D2 <= 7'b1111110;// 0
			D3 <= 7'b1001111;//E	
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
               else
                  state <= e0;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b0110000;//1
						D1 <= 7'b1100111;// P
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;//-
						est <= 4'b0000;
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
						D0 <= 7'b0110000;//1
						D1 <= 7'b1100011;//up
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b0001;
            end
				e2 : begin //segundo piso
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
						D0 <= 7'b1101101;//2
						D1 <= 7'b1100111;// P
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;//-
						est <= 4'b0010;
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
						D0 <= 7'b0110000;//1
						D1 <= 7'b1100011;//up
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b0011;
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
						D0 <= 7'b1101101;//2
						D1 <= 7'b1100011;//up
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b0100;
            end
				e5 : begin //piso 3
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
						D0 <= 7'b1111001;//3
						D1 <= 7'b1100111;// P
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;//-
						est <= 4'b0101;
            end
				e6 : begin //subiendo del 2 al 3
					if (f3==1)
                  state <= e5;
               else if (f1==1)
                  state <= e11;
               else
                  state <= e6;
						mup <= 1'b1;
						mdw <= 1'b0;
						D0 <= 7'b1101101;//2
						D1 <= 7'b1100011;//up
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b0110;
            end
				e7 : begin //bajando del 3 al 2
					if (f1==1)
                  state <= e11;
               else if (f2==1)
                  state <= e2;
               else
                  state <= e7;
						mup <= 1'b0;
						mdw <= 1'b1;
						D0 <= 7'b1111001;//3
						D1 <= 7'b0011101;//down
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b0111;
            end
				e8 : begin //bajando del 2 al 1
					if (f1==1)
                  state <= e0;
               else if (f3==1)
                  state <= e10;
               else
                  state <= e8;
						mup <= 1'b0;
						mdw <= 1'b1;
						D0 <= 7'b1101101;//2
						D1 <= 7'b0011101;//down
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b1000;
            end
				e9 : begin //bajando del 3 al 1 andes de llegar al 2
					if (f2==1)
                  state <= e8;
               else if (f1==1)
                  state <= e11;
					else if (p1==0 & p2==1 & p3==0 & s==0)
                  state <= e7;
               else
                  state <= e9;
						mup <= 1'b0;
						mdw <= 1'b1;
						D0 <= 7'b1111001;//3
						D1 <= 7'b0011101;//down
						D2 <= 7'b0000001;// -
						D3 <= 7'b0000001;// -
						est <= 4'b1001;
            end
				e10 : begin //Error F3
                  state <= e10;
						mup <= 1'b0;
						mdw <= 1'b0;
						//D0 <= 7'b0000001;// -
						D1 <= 7'b0000001;// -
						D2 <= 7'b1111001;//3
						D3 <= 7'b1001111;//E	
						est <= 4'b1010;
            end
				e11 : begin //Error F1
                  state <= e11;
						mup <= 1'b0;
						mdw <= 1'b0;
						//D0 <= 7'b0000001;// -
						D1 <= 7'b0000001;// -
						D2 <= 7'b0110000;//1
						D3 <= 7'b1001111;//E	
						est <= 4'b1011;
            end
				e12 : begin //Error F2
                  state <= e12;
						mup <= 1'b0;
						mdw <= 1'b0;
						//D0 <= 7'b0000001;// -
						D1 <= 7'b0000001;// -
						D2 <= 7'b1101101;//2
						D3 <= 7'b1001111;//E	
						est <= 4'b1100;
            end
				e13 : begin //Reset estado F0
					if (f1==1 & f2==0 & f3==0)
                  state <= e0;
					else if (f1==0 & f2==1 & f3==0)
                  state <= e2;
					else if (f1==0 & f2==0 & f3==1)
                  state <= e5;
					else if (p1==1 & p2==0 & p3==0 & s==0 & f1==0 & f2==0 & f3==0)
                  state <= e8;
               else
                  state <= e13;
						mup <= 1'b0;
						mdw <= 1'b0;
						D0 <= 7'b0000001;// -
						D1 <= 7'b0000001;// -
						D2 <= 7'b1111110;// 0
						D3 <= 7'b1001111;//E	
						est <= 4'b1101;
            end
         endcase

//MULTIPLEXADO DISPLAY
	 
   parameter s0 = 2'b00;
   parameter s1 = 2'b01;
   parameter s2 = 2'b10;
   parameter s3 = 2'b11;

   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [1:0] state_mux = s0;

   always@(posedge clk_MD)
      if (~reset) begin
         state_mux <= s0;
         D_out <= D0;
			E_dis <= 4'b1110;
      end
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state_mux)
            s0 : begin
                  state_mux <= s1;
						D_out <= D0;
						E_dis <= 4'b1110;
            end
            s1 : begin
						state_mux <= s2;
						D_out <= D1;
						E_dis <= 4'b1101;
            end
            s2 : begin
						state_mux <= s3;
						D_out <= D2;
						E_dis <= 4'b1011;
            end
            s3 : begin
						state_mux <= s0;
						D_out <= D3;
						E_dis <= 4'b0111;
            end
         endcase


	
endmodule