#include <stdio.h>

int main() {
	int num = 74;

	printf("hex %x\nASCII %c\n\n", num, num);

	num = 0x5A;

	printf("decimal %d\nASCII %c\n", num, num);

	num = 'a';
	
	printf("part2:\ndecimal %d\nhex %x\n", num, num);

	printf("\n\n");

	int num1 = -1;
	int num2 = -2;
	int num3 = -3;
	
	printf("part3:\t%x\t%x\t%x\n", num1, num2, num3);


	printf("\n\npart4:\t%d\t%d\t%d\t%d\n", 0x7ffffffe, 0x7fffffff, 0x80000000, 0x80000001);

	int a = 0x3;
	int b = 0x5;

	printf("\n\npart5:\t%x\t%x\t%x\t%x\n", a & b, a | b, ~a, ~b);


	// ZEROING
	int mask = 0xF;
	int other = 10000;

	printf("ZEROING:\t %d:%x \n", other, other & mask);

	int mask2 = 0xFFFFFFF0; 
	printf("ONEING(?):\t %d:%x \n", other, other | mask2);


	// PART 6
	num = 10;

	printf("SHIFT: %d\n", num<<1);
	printf("SHIFT: %d\n", num<<2);
	printf("SHIFT: %d\n", num<<3);

	return 0;
}
