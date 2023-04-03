#include <stdio.h>
#include <math.h>

/*
Ex14
Write a program that uses Newton's method to compute the square root of a positive floating point number.
*/

int main(void)
{
	double x, y=1, avg, temp, diff;

	printf("Enter a positive number : ");
	scanf("%lf",&x);

	while (1){
		avg = (y+x/y)/2;
		temp = y;
		y = avg;
		diff = y-temp;
		if (fabs(diff) < 0.00001*temp){
			break;
		}
	}			
	printf("Square root : %lf\n",y);

	return 0;
}

