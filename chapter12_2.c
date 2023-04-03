#include <stdio.h>
#include <ctype.h>

#define MAX 100

/*
Ex2
Write a program that reads a message, then checks whether it's a palindrome(the letters in the message are the same from left to right as from right to left):

Enter a message : He lived as a devil, eh?
Palindrome

Enter a message : Madam, I am Adam.
Not a palindrome
*/

int main(void)
{
	char message[MAX], msg;
	char *p = message, *q;

	printf("Enter a message : ");
	while ((msg = toupper(getchar())) != '\n' && p < message + MAX)
	{
		if (msg >= 'A' && msg <= 'Z')
		{
			*p++ = msg;
		}	
	}
	p--;	

	for (q = message; q < p; q++, p--)
	{
		if (*p != *q)
		{
			printf("Not a palindrome\n");	
			return 0;	
		}
	}
	printf("Palindrome\n");	
	return 0;
}
