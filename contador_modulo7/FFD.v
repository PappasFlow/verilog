`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// FFJK
//////////////////////////////////////////////////////////////////////////////////
module FFJK(
    input clk,
    input J,
    input K,
    output reg Q,
    output reg NQ
    );
	    always @(posedge clk)
         if (J==1'b1 & K==1'b1) begin
         Q <= ~Q;
			NQ <= ~NQ;
		end else if (J==1'b0 & K==1'b1) begin
		   Q <= 1'b0;
			NQ <= 1'b1;
      end else if (J==1'b1 & K==1'b0) begin
		   Q <= 1'b1;
			NQ <= 1'b0;
      end

endmodule

