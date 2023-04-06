#include <stdio.h>

/*
Modify Programming Project 11 from chapter 5 so that it uses arrays containing pointers to strings instead of switch statements. For example, instead of using a switch statement to print the word for the first digit, use the digit as an index into an array that contains the strings "twenty", "thirty" and so forth.
*/

int main(void)
{
	int n;
	char *ten_digit[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"},
	     *one_digit[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"},          *ten[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

	printf("Enter a two-digit number : ");
	scanf("%d", &n);

	if (n / 10 == 1)
	{
		printf("You entered the number %s\n", ten[n % 10]);
	}
	else
	{
		printf("You entered the number %s-%s\n", ten_digit[n / 10 -2], one_digit[n % 10]);
	}
	return 0;
}
