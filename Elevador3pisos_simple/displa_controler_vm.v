`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//control de diplay para elevador de 3 pisos con opcion de aviso intermitente
//////////////////////////////////////////////////////////////////////////////////
module displa_controler_vm(
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g,
    input i0,
    input i1,
	 input i2, //activa o no dependencia del clock para aviso intermitente 
    input clock
    );
   
  assign a = i2 & i0;
  assign b = i2 & (~i0|~i1);
  assign c = i2 & ~i1;
  assign d = i2 & ~i0;
  assign e = i2 & ~i0;
  assign f = 1'b0;
  assign g = i2 & ~i0;

endmodule
