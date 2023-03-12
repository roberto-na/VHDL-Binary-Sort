# VHDL Binary Sort
Code written in VHDL that uses binary search that sorts three 8-bit values and produces the output signals Max, Med, and Min. The circuit takes three 8-bit inputs A, B, and C, and produces three 8-bit outputs Min, Med, and Max. The inputs and outputs are declared as STD_LOGIC_VECTOR data type, which represents an array of bits.

The circuit uses a process block to implement the sorting logic. The process block is sensitive to changes in the input signals A, B, and C. Inside the process, the signals Max, Min, and Med are initialized to zero using the (others => '0') syntax.

The sorting logic is implemented using a nested if-else structure. The if-else statements check which input signal has the largest value and assign it to the Max signal. Then, the second largest value is assigned to the Med signal, and the smallest value is assigned to the Min signal.
