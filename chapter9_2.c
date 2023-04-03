#include <stdio.h>

/*
Ex2
Modify Programming Project 5 from chapter 5 so that it uses a function to compute the amount of income tax. When passed an amount of taxable income, the function will return the tax due.
*/

double tax(double income)
{
	double tax;

	if (income < 750){
		tax = income * .01;	
	}else if (income >= 750 && income < 2250){
		tax = 7.5 + (income-750) * .02;
	}else if (income >= 2250 && income < 3750){
		tax = 37.5 + (income-2250) * .03; 
	}else if (income >= 3750 && income < 5250){
		tax = 82.5 + (income-3750) * .04;
	}else if (income >= 5250 && income < 7000){
		tax = 142.5 + (income-5250) * .05;
	}else{
		tax = 230.0 + (income-7000) * .06;
 	} 

	return tax;		
}

int main(void)
{
	double result, income;

	printf("Enter your income : ");
	scanf("%lf",&income);
	result = tax(income);

	printf("%lf\n",result);
	return 0;
}

