#include <stdio.h>

/*
Ex7
Modify Programming project 6 from chapter 3 so that the user may add, subtract, multiply, or divide two fractions(by entering either +,-,*, or / between fractions)
*/

int main(void)
{
	int  num1,denom1,num2,denom2,result_num,result_denom;
	char operator;

	printf("Enter two fractions seperated by a operator (+,-,*,/) : ");
	scanf("%d/%d%c%d/%d",&num1,&denom1,&operator,&num2,&denom2);

	switch(operator){
	case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
	case '-':
		result_num = num1 * denom2 - num2 * denom1;	
		result_denom = denom1 * denom2;
		break;
	case '*':
		result_num = num1 * num2; 
		result_denom = denom1 * denom2;	
		break;
	case '/':
		result_num = num1 * denom2; 
		result_denom = num2 * denom1; 
		break;
	}
	printf("result : %d/%d\n",result_num,result_denom);	
	return 0;
}
