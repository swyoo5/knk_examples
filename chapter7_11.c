#include <stdio.h>

/*
Ex11
Write a program that takes a first name and last name entered by the user and displays the last name, a comma, and the first initial, followed by a period:

Enter a first and last name : Lloyd Fosdick
Fosdick, L.

The user's input may contain extra spaces before the first name, between the first and last name, and after the last name.
*/

int main(void)
{
	char first,rest_name; 

	printf("Enter a first and last name : ");
	scanf(" %c",&first);

	while ((rest_name = getchar()) != ' ');

	while ((rest_name = getchar()) == ' ');

	do {
		putchar(rest_name);	
	}while ((rest_name = getchar()) != ' ' && rest_name != '\n');

	printf(", %c.\n",first);

	return 0;
}
