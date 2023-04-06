#include <stdio.h>
#include <ctype.h>

#define MAX 100

/*
Modify the read_line function in each of the following ways:
(a) Have it skip white space before beginning to store input characters.
(b) Have it stop reading at the first white space character.
(c) Have it stop reading at the first new line character, then store the new line character in the string.
(d) Have it leave behind characters that it doesn't have room to store.
*/

int read_line(char str[], int n)
{
	int message, i = 0, result;

	while ((message = getchar()) != '\n')
	{
		while (message == ' ');

		if (isspace(message))
		{
			if (message = '\n')
			{
				result = i+1;
			}else {
				result = i;	
			}	
		}else {
			str[i++] = message;	
		}

		if (i >= MAX)
		{
			result = MAX;	
		}
	}	
	return result;
}

