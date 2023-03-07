#include <stdio.h>

/*
Ex5
In one state, single residents are subject to the following income tax:

Income($)			Amount of tax
Not over 750			1% of income
750-2250			7.50 + 2% of amount over 750
2250-3750			37.50 + 3% of amount over 2250
3750-5250			82.50 + 4% of amount over 3750
5250-7000			142.50 + 5% of amount over 5250
over 7000			230.00 + 6% of amount over 7000
Write a program that asks the user to enter the amount of taxable income, then displays the tax due
*/

int main(void)
{
	float income;
	printf("Enter your income : ");
	scanf("%f", &income);
	
	if (income < 750)
		income = income * .01f;
	else if (income < 2250)
		income = 7.50f + (income-750) * .02f;
	else if (income < 3750)
		income = 37.50f + (income-2250) * .03f;
	else if (income < 5250)
		income = 82.50f + (income-3750) * .04f;
	else if (income < 7000)
		income = 142.50f + (income-5250) * .05f;
	else
		income = 230.00f + (income-7000) * .06f;
	printf("Your tax is %f$",income);	
	return 0;
}
