#include <stdio.h>

/*
Ex15
Write a program that computes the factorial of a positive integer
*/

int main(void)
{
	int result = 1, num;

	printf("Enter a positive integer : ");
	scanf("%d",&num);

	while (num > 0){
		result *= num;
		num--;	
	}

	printf("Factorial of %d : %d\n",num,result);	

	
	return 0;
}
