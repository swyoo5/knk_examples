#include <stdio.h>

/*
Use the techniques of Section 13.6 to condense the count_spaces function of Section 13.4. In particular, replace the for statement by while loop.

int count_spaces(const char s[])
{
	int count = 0

	for (; *s != '\0'; s++)
	{
		if (*s == ' ')
		{
			count++;
		}
	}
	return count;
}
*/
int count_spaces(const char *s)
{
	int count = 0;

	while (*s++)
	{
		if (*s == ' ')
		{
			count++;
		}
	}
	return count;
}

