#include <stdio.h>

/*
The Q&A section at the end of this chapter shows how the strcpm function might be written using array subscripting. Modify the function to use pointer arithmetic instead.

int strcmp(char *s, char *t)
{
	int i;

	for (i = 0 ; s[i] == t[i]; i++)
	{
		if (s[i] == '\0')
			return 0;
		return s[i] - t[i];
	}
*/

int strcmp(char *s, char *t)
{
	while (*s == *t)
	{
		if (*s == '\0')
			return 0;
		s++; t++;	
	}
	return *s - *t;
}
