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
	 input ip, //activa o no dependencia del clock para aviso intermitente 
    input clock
    );
   
  //logica que decodifica el BCD para pisos 1 2 3 y ademas si se indicase genera intermitencia junto al clock dado
  assign a = (clock|~ip)&i1;
  assign b = (clock|~ip);
  assign c = (clock|~ip)&i0;
  assign d = (clock|~ip)&i1;
  assign e = (clock|~ip)&~i0;
  assign f = 1'b0;
  assign g = (clock|~ip)&i1;
  
  endmodule
