#include <stdio.h>

/*
Ex1
Write a program that asks the user to enter a two digit number, then prints the number with its digits reversed. A session with the program should have the following appearance:
Enter a two digit number : 28
The reversal is : 82
*/

int main(void)
{
	int a;	
	printf("Enter a two digit number : ");
	scanf("%d",&a);
	int ten_digit = a/10;
	int one_digit = a-10*ten_digit;
	printf("The reversal is : %d%d",one_digit,ten_digit);
	return 0;
}
