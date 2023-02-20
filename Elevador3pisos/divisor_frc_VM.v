`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//divisor de frecuencia 1KHz a 4Hz
//////////////////////////////////////////////////////////////////////////////////
module divisor_frc_VM(
    input clk,
	 input rst,
    output reg clk2
    );
reg [4:0] count;

//para elegir alguna frecuencia puntual
//N = (reloj_entrante / reloj_nuevo) / 2
parameter N = 8;

// divisor de frecuencia
always@(posedge clk or posedge rst)
	if(rst) //reset 
		begin
         count<=0; 
         clk2    <= 1'b0;
		end
    else if(count==N)      // cuenta N siclos    
            begin
              count<=0;      // reinicia cuenta a 0
              clk2 <= ~clk2; // transiciona clk2 a alto o bajo
            end
     else
            begin
            count<=count+1;  //  aumenta contador
            end                 

endmodule
