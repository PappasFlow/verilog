--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:40:49 06/13/2022
-- Design Name:   
-- Module Name:   D:/Documentos/Proyectos_Digitales/prueba/Tprueba.vhd
-- Project Name:  prueba
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Vprueba1
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Tprueba IS
END Tprueba;
 
ARCHITECTURE behavior OF Tprueba IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Vprueba1
    PORT(
         a : IN  std_logic;
         b : IN  std_logic;
         sel : IN  std_logic;
         s : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic := '0';
   signal b : std_logic := '0';
   signal sel : std_logic := '0';

 	--Outputs
   signal s : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Vprueba1 PORT MAP (
          a => a,
          b => b,
          sel => sel,
          s => s
        );


 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	


      -- insert stimulus here 
		a <='1';
		b <='0';
		sel <='0';
		wait for 10 ns;
		a <='1';
		b <='0';
		sel <='1';
		wait for 10 ns;
		a <='0';
		b <='1';
		sel <='1';
		wait for 10 ns;
		a <='0';
		b <='1';
		sel <='0';

      wait;
   end process;

END;
