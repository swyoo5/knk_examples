#include <stdio.h>
#include <ctype.h>

/*
(a) Wrtie a function named capitalize that capitalizes all letters in its argument. The argument will be a null terminated string containing arbitrary characters, not just letters. Use array subscripting to access the characters in the string.
(b) Rewrite the capitalize function, this time using pointer arithmetic to access the characters in the string.
*/

char capitalize(char *message)
{
	char *p = *message;

	while (*p != '\0')
	{
		if (isalpha(*p)){
			*p = toupper(*p);
		}
		p++;
	}	
}
