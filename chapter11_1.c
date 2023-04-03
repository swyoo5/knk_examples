#include <stdio.h>

/*
Ex1
Modify chapter2_7 so that it includes the following function :
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the dollars parameter. The twenties parameter points to a variable in which the function will store the number of $20 required. The tens, fives, and ones parameters are similar.
*/

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollars, twenties, tens, fives, ones;

	printf("Enter the amount of dollars : ");
	scanf("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("Required amount of twenties : %d\n", twenties);
	printf("Required amount of tens : %d\n", tens);
	printf("Required amount of fives : %d\n", fives);
	printf("Required amount of ones : %d\n", ones);
	
	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;
	dollars -= *twenties * 20;

	*tens = dollars / 10;
	dollars -= *tens * 10;

	*fives = dollars / 5;
	dollars -= *fives * 5;

	*ones = dollars;
}
