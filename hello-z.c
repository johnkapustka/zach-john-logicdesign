#include <stdio.h>

int main() {
	
	// PART 2
	printf("Hello, world!\n");


	int num = 74;
	printf("int %d\thex %x\tASCII %c\n", num, num, num);

	num = 0x5A;
	printf("int 0x5A\tdecimal %d\tASCII %c\n", num, num);

	num = 'a';
	printf("int %c\tdecimal %d\thex %x\n\n", num, num, num);

	// PART 3
	int num1 = -1;
	int num2 = -2;
	int num3 = -3;	
	printf("%d, %d, %d:\t%x\t%x\t%x\n", num1, num2, num3, num1, num2, num3);

	printf("%d\t%d\t%d\t%d\n\n", 0x7ffffffe, 0x7fffffff, 0x80000000, 0x80000001);


	// PART 5
	int a = 0x3;
	int b = 0x5;

	printf("part5:\t%x\t%x\t%x\t%x\n", a & b, a | b, ~a, ~b);


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
