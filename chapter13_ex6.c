#include <stdio.h>

/*
Write a function named censor that modifies a string by replacing every occurrence of foo by xxx.
For example, the string "food fool" would become "xxxd xxxl". Make the function as short as possible without sacrificing clarity.
*/

char censor(char str[])
{
	char *p = str;

	while (*(p+2) != '\0')
	{
		if (*p == 'f' && *(p+1) == 'o' && *(p+2) == 'o')
		{
			*p = *(p+1) = *(p+2) = 'x';
			p++;
		}
	}
} 
