#include <stdio.h>

/*
Ex2
Write a program that asks the user for a 24 hour time, then displays the time in 12 hour form:
Enter a 24 hour time : 21:11
Equivalent 12 hour time : 9:11PM
Be careful not to display 12:00 as 0:00
*/

int main(void)
{
	int hour,minute;
	printf("Enter a 24hour time : ");
	scanf("%d:%d",&hour,&minute);
	if (hour == 0)
		printf("Equivalent 12hour time : 12:%.2dAM\n",minute);
	else if (hour < 12)
		printf("Equivalent 12hour time : %.2d:%.2dAM\n",hour,minute);
	else if (hour == 12)
		printf("Equivalent 12hour time : 12:%.2dPM\n",minute);
	else
		printf("Equivalent 12hour time : %.2d:%.2dPM\n",hour-12,minute);	
	return 0;
}

