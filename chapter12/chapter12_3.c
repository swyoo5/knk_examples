#include <stdio.h>
#define MAX 100

/*
Ex3
Simplify Programming Project 1(b) by taking advantage of the fact that an array name can be used as a pointer
*/

int main(void)
{
	char message, message_array[MAX];
	char *p = message_array;

	printf("Enter a message : ");
	
	while ((message = getchar()) != '\n' && p < message_array + MAX)
	{
		*p++ = message;
	}
	p--;

	printf("Reversal is : ");

	while (p >= message_array)
	{
		putchar(*p--);
	}
	printf("\n");

	return 0;
}	

