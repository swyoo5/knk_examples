#include <stdio.h>

/*
Ex1
Write a program that calculates how many digits a number contains:
Enter a number : 374
The number 374 has 3 digits

you may assume that the number has no more than four digits.
*/

int main(void)
{
	int num,numerator,denom,digits;
	printf("Enter a number : ");
	scanf("%d",&num);
 
	if (num >= 0 && num < 10)
		digits = 1;
	else if (num >= 10 && num < 100)
		digits = 2;
	else if (num >= 100 && num < 1000)
		digits = 3;
	else
		digits = 4;	
	printf("The number %d has %d digits\n" ,num,digits);	
	return 0;
}
