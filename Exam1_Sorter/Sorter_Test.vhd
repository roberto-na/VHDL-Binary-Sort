--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:56:57 11/28/2018
-- Design Name:   
-- Module Name:   C:/ProySisDigAva/Exam1_Sorter/Sorter_Test.vhd
-- Project Name:  Exam1_Sorter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Sorter
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
 
ENTITY Sorter_Test IS
END Sorter_Test;
 
ARCHITECTURE behavior OF Sorter_Test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Sorter
    PORT(
         A : IN  std_logic_vector(7 downto 0);
         B : IN  std_logic_vector(7 downto 0);
         C : IN  std_logic_vector(7 downto 0);
         Min : OUT  std_logic_vector(7 downto 0);
         Med : OUT  std_logic_vector(7 downto 0);
         Max : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(7 downto 0) := (others => '0');
   signal B : std_logic_vector(7 downto 0) := (others => '0');
   signal C : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal Min : std_logic_vector(7 downto 0);
   signal Med : std_logic_vector(7 downto 0);
   signal Max : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Sorter PORT MAP (
          A => A,
          B => B,
          C => C,
          Min => Min,
          Med => Med,
          Max => Max
        );

   -- Clock process definitions
   --<clock>_process :process
   --begin
		--<clock> <= '0';
		--wait for <clock>_period/2;
		--<clock> <= '1';
		--wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
			
		A <= "10010110";
		B <= "00011110";
		C <= "00101101";
		wait for 100ns;
	
		A <= "11001000";
		B <= "11111010";
		C <= "00011000";
		wait for 100ns;
		
		A <= "00100011";
		B <= "00001100";
		C <= "01100100";
		wait for 100ns;
		
		A <= "10001100";
		B <= "01010000";
		C <= "00001010";
		wait for 100ns;
	
		A <= "01111000";
		B <= "00000000";
		C <= "01000110";
		wait for 100ns;
		
		A <= "01011010";
		B <= "11110000";
		C <= "01011010";
		wait for 100ns;
		
		A <= "10110100";
		B <= "10110100";
		C <= "00110111";
		wait for 100ns;
		
		A <= "00110010";
		B <= "00110010";
		C <= "00110010";
		wait for 100ns;

      --wait for <clock>_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
