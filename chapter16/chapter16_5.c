#include <stdio.h>

#define SIZE_OF_ARRAY(x) ((int) (sizeof(x) / sizeof(x[0])))

/*
Modify chapter5_8 so that the times are stored in a single array. The elements of the array will be structures, each containing a departure time and the corresponding arrival time. (Each time will be an integer, representing the number of minutes since midnight.) The program will use a loop to search the array for the departure time closest to the time entered by the user.
*/

int main(void)
{
	int hour, minute, converted_time, i;
	struct flight{
		int departure_time, arrival_time;
	} time[] = 
	{{480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

	printf("Enter a 24hour time (hh:mm): ");
	scanf("%d:%d", &hour, &minute);

	converted_time = 60 * hour + minute;

	for (i = 0; i < SIZE_OF_ARRAY(time) - 1; i++)
	{
		if (converted_time < (time[i].departure_time + time[i+1].departure_time) / 2)
		{
			printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n", 
			time[i].departure_time / 60 > 12 ? time[i].departure_time / 60 - 12 : time[i].departure_time / 60,
			time[i].departure_time % 60,
			time[i].departure_time / 60 > 11 ? 'p' : 'a',
			time[i].arrival_time / 60 > 12 ? time[i].arrival_time / 60 - 12 : time[i].arrival_time / 60,
			time[i].arrival_time % 60,
			time[i].arrival_time / 60 > 11 ? 'p' : 'a');
			
			return 0;	
		}	
	}

	if (converted_time > (time[i-1].departure_time + time[i].departure_time) / 2)
	{
		printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
			time[i].departure_time / 60 > 12 ? time[i].departure_time / 60 - 12 : time[i].departure_time / 60,
			time[i].departure_time % 60,
			time[i].departure_time / 60 > 11 ? 'p' : 'a',
			time[i].arrival_time / 60 > 12 ? time[i].arrival_time / 60 - 12 : time[i].arrival_time / 60,
			time[i].arrival_time % 60,
			time[i].arrival_time / 60 > 11 ? 'p' : 'a');
	}
	return 0;
}
