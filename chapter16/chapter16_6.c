#include <stdio.h>

/*
Modify chapter5_9 so that each date entered by the user is stored in a date structure(see Exercise 5). Incorporate the compare_dates function of Exercise 5 into your program.
*/

struct date
{
	int month, day, year;
} input_date[] = {{0, 0, 0},{0, 0, 0}};  

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

int main(void)
{
	int month, day, year, compare;

	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d/%d/%d", &month, &day, &year);

	input_date[0].month = month;
	input_date[0].day = day;
	input_date[0].year = year;

	printf("Enter second date (mm/dd/yy) : ");
	scanf("%d/%d/%d", &month, &day, &year);

	input_date[1].month = month;
	input_date[1].day = day;
	input_date[1].year = year;

	compare = compare_dates(input_date[0], input_date[1]);

	if (compare == 1)
		printf("%d/%d/%d is earlier than %d/%d/%d.\n",
		 input_date[0].month, input_date[0].day, input_date[0].year,
		 input_date[1].month, input_date[1].day, input_date[1].year);
	else if (compare == -1)
		printf("%d/%d/%d is earlier than %d/%d/%d.\n",
		 input_date[1].month, input_date[1].day, input_date[1].year,
		 input_date[0].month, input_date[0].day, input_date[0].year);
	else
		printf("%d/%d/%d and %d/%d/%d is same date.\n",
		 input_date[1].month, input_date[1].day, input_date[1].year,
		 input_date[0].month, input_date[0].day, input_date[0].year);
	return 0;
}

int day_of_year(struct date d)
{
	const int day_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int result = 0, i;

	if (d.month == 2 && ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)))
	{
		result = 1;
	}

	for (i = 0; i < d.month - 1; i++)
	{
		result += day_month[i];
	}

	return result + d.day;
}

int compare_dates(struct date d1, struct date d2)
{
	int d1_day = day_of_year(d1);
	int d2_day = day_of_year(d2);

	if (d1_day > d2_day)
	{
		return -1;
	}else if (d1_day < d2_day)
	{
		return 1;
	}else
	{
		return 0;
	}
}
