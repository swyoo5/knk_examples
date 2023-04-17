/*
Write the following functions, assuming that the date structure contains three members:
month, day, and year(all of type int).
(a) int day_of_year(struct date d);
Returns the day of the year(an integer between 1 and 366) that correspndes to the date d.

(b) int compare_dates(struct date d1, struct date d2);
Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later that d2, and 0 if d1 and d2 are the same.
*/

// (a)
int day_of_year(struct date d)
{
	const int day_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int result = 0, i;

	if (d.month == 2 && ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
	{
		result = 1;
	}
	
	for (i = 0; i < d.month; i++)
	{
		result += day_month[i];
	}

	return result + d.day;
}

// (b)
int compare_dates(struct date d1, struct date d1)
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
