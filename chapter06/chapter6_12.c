#include <stdio.h>

/*
Ex12
Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than epsilon, where epsilon is small(float point)number entered by the user.
*/

int main(void)
{
	int n,t = 1,i = 1;
	float sum = 1.00f, epsilon;
	printf("Enter the small number : ");
	scanf("%f",&epsilon);

	while (1){
		t *= i;
		i++;
		if ((float) 1/t < epsilon){
			break;	
		}else{
			sum += (float)1/t;
		}
	}
	printf("The approximates value : %f\n",sum);
	
	return 0;
}
