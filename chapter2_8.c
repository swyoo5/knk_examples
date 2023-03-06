#include <stdio.h>

/*
Ex8
Write a program that calculates the ramining balance on a loan after the first, second, and third monthly payments:

Enter amount of loan : 20000.00
Enter interest rate : 6.0
Enter monthly payment : 386.66

Balance ramaining after first payment : $19713.34
Balance ramaining after second payment : $19425.25
Balance ramaining after third payment : $19135.71
*/

int main(void)
{
	float balance, interest, pay;
	printf("Enter amount of loan : ");
	scanf("%f",&balance);
	printf("Enter interest rate : ");
	scanf("%f",&interest);
	printf("Enter monthly payment : ");
	scanf("%f",&pay);

	balance = balance*(interest/1200+1)-pay;	
	printf("Balance ramaining after first payment : %f\n",balance);	
	balance = balance*(interest/1200+1)-pay;
	printf("Balance remaining after second payment : %f\n",balance);
	balance = balance*(interest/1200+1)-pay;
	printf("Balance ramaining after third payment : %f\n",balance);	
	return 0;
}

