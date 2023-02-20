`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
//VERILOG TEST FIXTURE 
////////////////////////////////////////////////////////////////////////////////

module VT_prueba;

	// Inputs
	reg sel0;
	reg sel1;
	reg D0;
	reg D1;
	reg D2;
	reg D3;

	// Outputs
	wire sal;

	// Instantiate the Unit Under Test (UUT)
	VM_prueba uut (
		.sel0(sel0), 
		.sel1(sel1), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.sal(sal)
	);
//variable del FOR
//integer var;

	initial begin
		// Initialize Inputs
		sel0 = 0;
		sel1 = 0;
		D0 = 0;
		D1 = 0;
		D2 = 0;
		D3 = 0;
		#100;
		// Estados de Entradas c/100ms
		sel0 = 0;
		sel1 = 0;
		D0 = 1;
		D1 = 0;
		D2 = 0;
		D3 = 0;
		#100;
        
		sel0 = 1;
		sel1 = 0;
		D0 = 0;
		D1 = 1;
		D2 = 0;
		D3 = 0;
		#100;
		
		sel0 = 0;
		sel1 = 1;
		D0 = 0;
		D1 = 0;
		D2 = 1;
		D3 = 0;
		#100;
		
		sel0 = 1;
		sel1 = 1;
		D0 = 0;
		D1 = 0;
		D2 = 0;
		D3 = 1;
		#100;

//for para su uso asignando
 //  for (var = 0; var <= 64; var=var+1) begin
 //     sel0 = var[0];
 //		sel1 = var[1];
 //		D0 = var[2];
//		D1 = var[3];
//		D2 = var[4];
//		D3 = var[5];
//		#100;
//   end

	end
      
endmodule

