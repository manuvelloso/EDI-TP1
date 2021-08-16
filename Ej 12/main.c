#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
	unsigned char num1 = 0b1011001;
	unsigned char num2 = 0b010111;

	printf("Char num1: %c\n", num1);
	printf("Hexa num1: %x\n", num1);

	printf("Char num2: %c\n", num2);
	printf("Hexa num2: %x\n", num2);

	printf("num1^num2 = %d\n", num1 ^ num2);

	return 0;
}