#include <stdio.h>

/*
Ex3
Rewrite the program in Programming project 2 so that it prints the reversal of a three digit number without using arithmetic to split the number into digits.
*/

int main(void)
{
	int a,b,c;
	printf("Enter a three digit number : ");
	scanf("%1d%1d%1d",&a,&b,&c);
	printf("%d%d%d",c,b,a);	
	return 0;
}
