#include <stdio.h>

/*
Ex8
Write a program that prints a one-month calendar. The user specifies the number of days in the month and the day of the week on which the month begins:
Enter number of days in month : 31
Enter starting day of the week (1=sun,7=sat) : 3
       1  2  3  4  5
 6  7  8  9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31
*/

int main(void)
{
	int num_of_days,start_day;
	printf("Enter number of days in month : ");
	scanf("%d",&num_of_days);
	printf("Enter starting day of the week (1=sun,7=sat) : ");
	scanf("%d",&start_day);

	for (int i=1;i<=3*(start_day-1);i++){
		printf(" ");
	}
	
	for (int i=1;i<=num_of_days;i++){
		printf("%2d",i);
		printf(" ");
		if (i%7==8-start_day){
			printf("\n");	
		} if (start_day == 1&&i%7==0){
			printf("\n");			
		}
	} printf("\n");
	return 0;
}
