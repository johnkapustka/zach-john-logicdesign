#include <stdio.h>

int main() {
	
	// PART 2
	printf("PART 2\n");
	printf("Hello, world!\n");


	int num = 74;
	printf("int %d\thex %x\tASCII %c\n", num, num, num);

	num = 0x5A;
	printf("int 0x5A\tdecimal %d\tASCII %c\n", num, num);

	num = 'a';
	printf("int %c\tdecimal %d\thex %x\n\n", num, num, num);

	// PART 3
	printf("PART 3\n");

	int num1 = -1;
	int num2 = -2;
	int num3 = -3;	
	printf("%d, %d, %d:\t%x\t%x\t%x\n", num1, num2, num3, num1, num2, num3);

	printf("%d\t%d\t%d\t%d\n\n", 0x7ffffffe, 0x7fffffff, 0x80000000, 0x80000001);

	// PART 4
	printf("PART 4\n");

	printf("%u\n\n", 0xffffffff);

	// PART 5
	printf("PART 5\n");

	int a = 0x3;
	int b = 0x5;

	printf("%x\t%x\t%x\t%x\n", a & b, a | b, ~a, ~b);


	int mask = 0xF;
	//int other = 10000;
	int other = 0x6FFFFFFF;

	printf("ZEROING:\t %x --> %x \n", other, other & mask);

	other = 0x222222F4;
	mask = 0xFFFFFFF0; 
	printf("ONEING(?):\t %x --> %x \n\n", other, other | mask);


	// PART 6
	printf("PART 6\n");

	int num4 = 10;

	printf("SHIFT LEFT: %d\n", num4<<1);
	printf("2 SHIFT LEFT: %d\n\n", num4<<2);

	int num5 = -10;
	printf("SHIFT RIGHT: %d\n", num4>>1);
	printf("SHIFT RIGHT: %d\n\n", num5>>1);

	unsigned int num6 = 10;
	printf("UNSIGNED 10: %u\n", num6);
	printf("UNSIGNED SHIFT LEFT: %u\n", num6<<1);
	printf("UNSIGNED SHIFT RIGHT: %u\n\n", num6>>1);

	unsigned int num7 = -10;
	printf("UNSIGNED -10: %u\n", num7);
	printf("UNSIGNED SHIFT LEFT: %u\n", num7<<1);
	printf("UNSIGNED SHIFT RIGHT: %u\n\n", num7>>1);

	return 0;
}
