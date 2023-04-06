#include <stdio.h>

/*
Ex 6
Modify the program of Programming Project 5 so that the polynomial is evaluated using the following formula:
((((3x+2)x-5)x-1)x+7)x-6
Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner's Rule.
*/

int main(void)
{
	float x,y;
	scanf("%f",&x);
	y = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("%f\n",y);
	return 0;
}
