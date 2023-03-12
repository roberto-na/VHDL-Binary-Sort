----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:23:34 11/28/2018 
-- Design Name: 
-- Module Name:    Sorter - Behavioral 
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
use IEEE.std_logic_arith.all;

entity Sorter is
    Port ( A 	: in   STD_LOGIC_VECTOR (7 downto 0);
           B 	: in   STD_LOGIC_VECTOR (7 downto 0);
           C 	: in   STD_LOGIC_VECTOR (7 downto 0);
           Min : out  STD_LOGIC_VECTOR (7 downto 0);
           Med : out  STD_LOGIC_VECTOR (7 downto 0);
           Max : out  STD_LOGIC_VECTOR (7 downto 0));
end Sorter;

architecture Behavioral of Sorter is

	signal Aentero : STD_LOGIC;
	signal Bentero : STD_LOGIC;
	signal Centero : STD_LOGIC;
	
begin
	
	process(A, B, C)
	
		begin
			Max <= (others => '0');
			Min <= (others => '0');
			Med <= (others => '0');
		
			if ((A >= C) and (A >= B)) then
					Max <= A;
				if (B >= C) then
					Med <= B;
					Min <= C;
				elsif (C >= B) then
					Med <= C;
					Min <= B;
				end if;
			
			elsif ((B >= C) and (B >= A)) then 	
					Max <= B;
				if (A >= C) then
					Med <= A;
					Min <= C;
				elsif (C >= A) then
					Med <= C;
					Min <= A;
				end if;
			
			elsif ((C >= B) and (C >= A)) then 	
					Max <= C;
				if (A >= B) then
					Med <= A;
					Min <= B;
				elsif (B >= A) then
					Med <= B;
					Min <= A;
				end if;
			
			end if;
	end process;

end Behavioral;
