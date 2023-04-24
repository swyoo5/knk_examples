#include <stdio.h>

/*
Ex12
Write a program that evaluates an expression:
Enter an expression : 1+2.5*3
Value of expression : 10.5
The operands in the expression are floating point numbers; the operators are +,-,*,/.
The expression is evaluated from left to right(no operator takes precedence over any other operator).
*/

int main(void)
{
	float result=0.0f,num=0.0f;
	char ch;
	
	printf("Enter an expression : ");
	scanf("%f",&result);

	while ((ch = getchar()) != '\n'){
		switch(ch){
		case '+':
			scanf("%f",&num);
			result += num;
			break;
		case '-':
			scanf("%f",&num);
			result -= num;
			break;	
		case '*':
			scanf("%f",&num);
			result *= num;
			break;
		case '/':
			scanf("%f",&num);
			result /= num;	
			break;
		default:
			break;	
		}
	}

	printf("Value of expression : %.2f\n",result);

	return 0;
}
