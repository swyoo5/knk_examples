#include <stdio.h>

/*
Ex7
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills.
Enter a dollar amount : 93

$20 bills : 4
$10 bills : 1
 $5 bills : 0
 $1 bills : 3
*/

int main(void)
{
	int bill_20, bill_10, bill_5, bill_1, dollar;
	printf("Enter a dollar amount : ");
	scanf("%d",&dollar);
	bill_20 = dollar/20;
	dollar = dollar-20*bill_20;
	bill_10 = dollar/10;
	dollar = dollar-10*bill_10;
	bill_5 = dollar/5;
	dollar = dollar-5*bill_5;
	bill_1 = dollar;
	
	printf("$20 bills : %d\n",bill_20);
	printf("$10 bills : %d\n",bill_10);
	printf(" $5 bills : %d\n",bill_5);
	printf(" $1 bills : %d\n",bill_1);


	return 0;
}
