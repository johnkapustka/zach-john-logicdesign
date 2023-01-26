#include <stdio.h>

void overflow(int, int);

int main() {

	overflow(300, 100);
	overflow(-300, -100);
	overflow(0x7FFFFFFF, 1);
	overflow(0x80000000, -1);
	overflow(0x7FFFFFFF, 0x80000000);

	return 0;
}

void overflow(int num1, int num2) {

	// numbers overflow if two same-sign ints have an opposite sign sum
	
	printf("\n%d\t%x\n", num1+num2, num1+num2);

	int mask = 0x80000000;
	int sum = num1+num2;
	if (((num1&mask) & (num2&mask)) & ~(sum&mask)) {
		printf("OVERFLOW\n");
		return;
	}

	if (~(num1&mask) & ~(num2&mask) & (sum&mask)) {
		printf("OVERFLOW\n");
		return;
	}

	printf("NO OVERFLOW\n");

}
