#include <stdio.h>
#include <ctype.h>

/*
Ex9
Write a program that asks the user for a 12 hour time, then displays the time in 24 hour form:

Enter a 12-hour time : 9:11 PM
Equivalent 24-hour time : 21:11
See Programming Project 8 for a description of the input format
*/

int main(void)
{
	int hour,minute,convert_time;
	char ampm;

	printf("Enter a 12hour time : ");
	scanf("%d:%d %c",&hour,&minute,&ampm);
	convert_time = (((toupper(ampm) == 'P') ? 12 : 0) + hour) * 60 + minute;

	printf("Equivalent 24-hour time : %d:%d\n",convert_time/60,convert_time%60);
	

	return 0;
}

