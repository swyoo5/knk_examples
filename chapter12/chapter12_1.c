#include <stdio.h>

#define MAX 100

/*
Ex1
(a) Write a program that reads a message, then prints the reversal of the message:
Enter a message : Don't get mad, get even.
Reversal is : .neve teg ,dam teg t'noD
(b) Revise the program to use a pointer instead of an integer to keep track of the current position in the array.
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
