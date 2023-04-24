#include <stdio.h>

/*
Ex4
Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx
Enter phone number : (404)817-6900
you entered 404.817.6900
*/

int main(void)
{
	int a,b,c;
	printf("Enter phone number : ");
	scanf("(%d)%d-%d",&a,&b,&c);
	printf("You entered %d.%d.%d",a,b,c);
	
	return 0;
}
