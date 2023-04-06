#include <stdio.h>
#include <ctype.h>

#define MAX 100

/*
Ex5
Modify chapter8_14 so that it uses a pointer instead of an integer to keep track of the current position in the array that contains the sentence.

Enter a sentence : you can cage a swallow can't you?
Reversal of sentence : you can't swallow a cage can you?
*/

int main(void)
{
	char message, message_array[MAX], mark;
	char *p = message_array, *q;

	printf("Enter a sentence : ");
	
	while ((message = getchar()) != '\n')
	{
		if (message == '!' || message == '?' || message == '.')
		{
			mark = message;	
		}else{
			*p++ = message;	
		}
	}
	*p = mark;

	while (p >= message_array)
	{
		while (*--p != ' ' && p != message_array);

		q = p == message_array ? message_array : p + 1;

		while (*q != ' ' && *q != '\0' && *q != mark) 
		{
			putchar(*q++);
		}
		
		if (p >= message_array)
		{
			putchar(' ');
		}	
	}
	printf("\b%c\n",mark);

	return 0;
}
