#include <stdio.h>
#include <math.h>

/*
Ex6
Write a function that computes the value of the following polynomial:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Write a program that asks the user to enter a value for x, calls the function to compute the value of the polynomial, and then displays the value returned by the function.
*/

double polynomial(double x)
{
	double f;
	
	f = 3 * x * x * x * x * x + 2 * x * x * x * x  - 5 * x * x * x - x * x  + 7 * x - 6;
	
	return f;	
}

int main(void)
{
	double x;

	printf("Enter the value of x : ");
	scanf("%lf",&x);

	double result = polynomial(x);

	printf("%lf\n",result);
	return 0;
}
