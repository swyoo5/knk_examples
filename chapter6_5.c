#include <stdio.h>

/*
Ex5
Programming project 1 in chapter 4 asked you to write a program that displays a two digit number with its digit reversed. Generalize the program so that the number can have one, two, three, or more digits. Hint : Use a do loop that repeatedly divides the number by 10, stopping when it reaches 0.
*/

int main(void)
{
	int n;
	
	printf("Enter a nonnegative integer :");
	scanf("%d",&n);

	do {
		printf("%d", n%10);
		n /= 10;
	} while (n>0);	
	
	printf("\n");	
	
	return 0;
}
