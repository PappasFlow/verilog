----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:39:18 10/12/2022 
-- Design Name: 
-- Module Name:    elevador_vm - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity elevador_vm is
    Port ( pa : in  STD_LOGIC;
           pb : in  STD_LOGIC;
           swa : in  STD_LOGIC;
           swb : in  STD_LOGIC;
           Mup : out  STD_LOGIC;
           Mdown : out  STD_LOGIC);
end elevador_vm;

architecture Behavioral of elevador_vm is

begin


end Behavioral;

