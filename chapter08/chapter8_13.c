#include <stdio.h>
/*
Ex13
Modify Programming Project 11 from Chapter 7 so that the program labels its output:
Enter a first and last name : Lloyd Fosdick
You entered the name : Fosdick, L.
The program will need to store the last name(but not the first name) in an array of characters until it can be printed. You may assume that the last name is no more than 20 characters long.
*/

int main(void)
{
	char first, rest_name;
	char last_name[20] = {0};
	int i ,length = 0;

	printf("Enter a first and last name : ");
	scanf(" %c",&first);

	while ((rest_name = getchar()) != ' ');

	while ((rest_name = getchar()) == ' ');

	last_name[0] = rest_name;	
	for (i = 1; (rest_name = getchar()) != '\n'; i++){
		last_name[i] = rest_name;
	}

	printf("You entered the name : ");
	
	for (i = 0; last_name[i] != '\0'; i++){
		putchar(last_name[i]);	
	}
	printf(", %c\n",first); 
	return 0;
}
