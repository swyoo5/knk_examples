#include <stdio.h>

/*
Ex4
Write a program that reads an integer entered by the user and displays it in octa(base 8):

Enter a number between 0 and 32767 : 1953
In octal, your number is : 03641
The output should be displayed using five digits, even if fewer digits are sufficient.
*/

int main(void)
{
	int num;
	printf("Enter a number between 0 and 32767 : ");
	scanf("%d", &num);
	int first_digit = num%8;
	num /= 8;
	int second_digit = num%8;
	num /= 8;
	int third_digit = num%8;
	num /= 8;
	int fourth_digit = num%8;
	num /= 8;
	int fivth_digit = num%8;
	printf("In ocatal, your number is : %d%d%d%d%d",fivth_digit,fourth_digit,third_digit,second_digit,first_digit);
	
	return 0;
}
