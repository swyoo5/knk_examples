#include <stdio.h>

/*
Ex 4
Write a program that asks the user to enter a dollors-and-cents amount, then displays the amount with 5% tax added:

Enter an amount : 100.00
with tax added : $105.00
*/

int main(void)
{
	float amount;
	printf("Enter an amount : ");
	scanf("%f",&amount);
	printf("with tax added : ");
	printf("%f\n",amount*1.05);
	return 0;
} 

