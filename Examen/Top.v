`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//CODIGO DESCRIPCION
//////////////////////////////////////////////////////////////////////////////////
module Top(
    input A,
    input C,
    input D,
    output F1,
    output F2
    );
	 
	 //asignacion de forma nativa
	 assign F1= (~A & D) | (~A & C) | (C & D);
	 
	 //asignacion de forma especifica de verilog
	 //creo conecciones internas
    wire or1,or2,or3,notA;
	 //asigno
	 not(notA,A);
	 or(or1,C,D);
	 or(or2,notA,C);
	 or(or3,notA,D);
	 and(F2,or1,or2,or3);
	 


endmodule
