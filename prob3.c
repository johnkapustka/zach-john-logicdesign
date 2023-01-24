#include <stdio.h>

void disassemble(int);

int main() {
	
	disassemble(0x9521);
	disassemble(0x317f);
	disassemble(0x1ab2);

	return 0;
}

void disassemble(int instr) {

	// shift first 4 bits to the right
	// mask the rest of the bits and display
	// shift another 4 bits and repeat
	
	int mask = 0x000f;
		
	printf("opcode = %x\t\trw = %x\t\tra = %x\t\trb = %x\n", instr>>12 & mask, instr>>8 & mask, instr>>4 & mask, instr & mask);

}
