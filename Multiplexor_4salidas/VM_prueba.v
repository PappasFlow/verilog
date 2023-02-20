`timescale 1ns / 1ps


	 
module VM_prueba(
    input sel0,
    input sel1,
    input D0,
    input D1,
    input D2,
    input D3,
    output sal 
    );
	 

	 
wire w0,w1,w2,w3,ws0,ws1,ws2,ws3;

VM_decode decodificador (
    .sel0(sel0), 
    .sel1(sel1), 
    .S0(w0), 
    .S1(w1), 
    .S2(w2), 
    .S3(w3)
    );


and (ws0,w0,D0);
and (ws1,w1,D1);
and (ws2,w2,D2);
and (ws3,w3,D3);


assign sal=ws0|ws1|ws2|ws3;

	 
	 
endmodule
