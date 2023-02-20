`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:57:32 10/19/2022 
// Design Name: 
// Module Name:    disp_decode_vm 
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
module disp_decode_vm(
    input i0,
    input i1,
    input i2,
    input clk,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g
    );

   parameter E1 = 3'b000;
   parameter E2 = 3'b001;
   parameter E3 = 3'b010;
	parameter Edw1 = 3'b011;
	parameter Edw2 = 3'b100;
	parameter Eup1 = 3'b101;
   parameter Eup2 = 3'b110;
	parameter Estop = 3'b111;
	

   (* FSM_ENCODING="SEQUENTIAL", SAFE_IMPLEMENTATION="NO" *) reg [2:0] state = E1;

   always@(posedge clk)
      if (i0==1'b0 & i1==1'b0 & i2==1'b0) begin   //piso 0
         a <= 1'b1;
			b <= 1'b1;
			c <= 1'b1;
			d <= 1'b1;
			e <= 1'b1;
			f <= 1'b1;
			g <= 1'b0;
		else if (i0==1'b1 & i1==1'b0 & i2==1'b0)  //piso 1
		   a <= 1'b0;
			b <= 1'b1;
			c <= 1'b1;
			d <= 1'b0;
			e <= 1'b0;
			f <= 1'b0;
			g <= 1'b0;
		else if (i0==1'b0 & i1==1'b1 & i2==1'b0) //piso 2
		   a <= 1'b1;
			b <= 1'b1;
			c <= 1'b0;
			d <= 1'b1;
			e <= 1'b1;
			f <= 1'b0;
			g <= 1'b1;
		else if (i0==1'b1 & i1==1'b1 & i2==1'b0) //up
			state <= Eup1;
		else if (i0==1'b0 & i1==1'b0 & i2==1'b1) //down
			state <= Edw1;
      end
		
      else
         (* FULL_CASE, PARALLEL_CASE *) case (state)
            E1 : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state2> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state3> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state4> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state5> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state6> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state7> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
            <state8> : begin
               if (<condition>)
                  state <= <next_state>;
               else if (<condition>)
                  state <= <next_state>;
               else
                  state <= <next_state>;
               <outputs> <= <values>;
            end
         endcase
