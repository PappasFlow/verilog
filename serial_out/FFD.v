`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// FFD
//////////////////////////////////////////////////////////////////////////////////
module FFD(
    input d,
    output reg q,
    input s,
    input r,
    input clk
    );
	 
	    always @(posedge clk or posedge r or posedge s)
      if (r) begin
         q <= 1'b0;
		end else if (s) begin
		   q <= 1'b1;
      end else begin
         q <= d;
      end

endmodule
