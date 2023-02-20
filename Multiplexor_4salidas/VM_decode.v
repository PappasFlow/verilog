`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:37 06/28/2022 
// Design Name: 
// Module Name:    VM_decode 
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
module VM_decode(
    input sel0,
    input sel1,
    output S0,
    output S1,
    output S2,
    output S3 
    ); 
 and(S0,~sel0,~sel1);
 and(S1,sel0,~sel1);
 and(S2,~sel0,sel1);
 and(S3,sel0,sel1);
 
endmodule 
