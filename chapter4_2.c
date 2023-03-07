#include <stdio.h>

/*
Ex2
Extend the program in programming project 1 to handle three digit numbers.
*/

int main(void)
{
	int num;
	printf("Enter a three-digit number : ");
	scanf("%d",&num);
	
	int hund_digit = num/100;
	num = num-hund_digit*100;
	int ten_digit = num/10;
	num = num-ten_digit*10;
	int one_digit = num;

	printf("The reversal is : %d%d%d\n",one_digit,ten_digit,hund_digit);
	return 0;
}
