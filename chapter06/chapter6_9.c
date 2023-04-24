#include <stdio.h>

/*
Ex9
Programming project 8 in chapter 2 asked you to write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments. Modify the program so that it also asks the user to enter the number of payments and then displays the balance ramaining after each of these payments
*/

int main(void)
{
	float balance, interest, pay;
	int num_pay;

	printf("Enter amount of loan : ");
	scanf("%f",&balance);
	printf("Enter interest rate : ");
	scanf("%f",&interest);
	printf("Enter monthly payment : ");
	scanf("%f",&pay);
	printf("Enter the number of payments : ");
	scanf("%d",&num_pay);
		
	for (int i=1;i<=num_pay;i++){
		balance = balance*(interest/1200+1)-pay;	
	}

	printf("%f\n",balance);

	return 0;
}
