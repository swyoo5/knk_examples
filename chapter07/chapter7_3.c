#include <stdio.h>

/*
Ex3
Modify the sum2.c program of section 7.1 to sum a series of double values.
*/

int main(void)
{
	double n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");

	scanf("%lf",&n);
	while (n != 0){
		sum += n;
		scanf("%lf",&n);	
	}
	printf("The sum is : %lf\n", sum);
	
	return 0;
}
