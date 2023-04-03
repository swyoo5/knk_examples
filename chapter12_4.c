#include <stdio.h>
#include <ctype.h>

#define MAX 100

/*
Ex4
Simplify Programming Project 2(b) by taking advantage of the fact that an array name can be used as a pointer.
*/

int main(void)
{
	char message, message_array[MAX];
	char *p = message_array, *q;

	printf("Enter a message : ");
	
	while ((message = toupper(getchar())) != '\n' && p < message_array + MAX)
	{
		if (message >= 'A' && message <= 'Z')
		{
			*p++ = message;	
		}
	}
	p--;

	for (q = message_array; q < p; q++, p--)
	{
		if (*q != *p)
		{
			printf("Not a palindrome.\n");
			return 0;
		}

	}	
	printf("Palindrome.\n");
	return 0;
}
