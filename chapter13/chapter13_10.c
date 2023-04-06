#include <stdio.h>

#define MAX 20

/*
Ex10
Modify chapter7_11 so that it includes the following function :
void reverse_name(char *name);
The function expects name to point to a string containing a first name followed by a last name.
It modifies the string so that the last name comes first, followed by a comma, a space, the first initial, and a period. The original string may contain extra spaces before the first name, between the first and last names, and after the last name.
*/

char initial, c, name[MAX], last_name[MAX];
char *p = name, *q = last_name;

void reverse_name(char *name);

int main(void)
{
	while ((c = getchar()) != '\n')
	{
		*p++ = c;
	}

	reverse_name(name);

	printf("%s, %c.\n", last_name, initial);

	return 0;
}

void reverse_name(char *name)
{
	while (*name++ == ' ');
	name;

	initial = *--name;

	while (*name++ != ' ');

	while (*name != '\0')
	{
		*q++ = *name++;	
	}
}
