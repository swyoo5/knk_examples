#include <stdio.h>

/*
Ex3
Modify chapter6_3 so that it includes the following function :
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
numerator and denominator are the numerator and denominator of a fraction.
reduced_numerator and reduced_denominator are pointers to variables in which the function will store the numerator and denominator of the fraction once it has been reduced to lowest terms.
*/

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
	int numerator, denominator, reduced_numerator, reduced_denominator;

	printf("Enter the fraction : ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("Lowest term : %d/%d\n", reduced_numerator, reduced_denominator);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int num = numerator, denom = denominator;
	
	if (denominator > numerator){
		int temp = numerator;
		numerator = denominator;
		denominator = temp;
	}

	while (denominator != 0){
		int temp = numerator % denominator;
		numerator = denominator;
		denominator = temp;
	}

	*reduced_numerator = num / numerator;
	*reduced_denominator = denom / numerator;
}
