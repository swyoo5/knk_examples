#include <stdio.h>

/*
Write the following function:
void split_time(long total_sec, int *hr, int *min, int *sec);
total_sec is a time represented as the number of seconds sice midnight, hr, min, and sec are pointers to variables in which the function will store the equivalent time in hours(0-23), minutes(0-59), and seconds(0-59) respectively.
*/

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	long total_sec;
	int hr, min, sec;

	printf("Enter the total second : ");
	scanf("%lu", &total_sec);

	split_time(total_sec, &hr, &min, &sec);

	printf("Total second equivalent to %d:%d:%d\n",hr,min,sec);

	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / 3600;
	total_sec -= *hr * 3600;
	*min = total_sec / 60;
	total_sec -= *min * 60;
	*sec = total_sec;
}
