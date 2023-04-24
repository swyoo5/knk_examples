#include <stdio.h>

/*
Ex1
Design a union that makes it possible to view a 32-bit value as either a float of the structure described in Exercise 14. Write a program that stores 1 in the structure's sign field, 128 in the exponent field, and 0 in the fraction field, then prints the float value stored in the union.(The answer should be -2.0 if you've set up the bit-fields correctly.)
*/

union {
	float value;
	struct float_value {
		unsigned int fraction : 23;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} field;
} f;

int main(void)
{
	f.field.sign = 1;
	f.field.exponent = 128;
	f.field.fraction = 0;

	printf("%.1f\n", f.value);
	
	return 0;
}
