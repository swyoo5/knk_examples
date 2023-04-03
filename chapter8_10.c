#include <stdio.h>

/*
Ex 10
Modify Programming Project 8 from chapter 5 so that the departure times are stored in an array and the arrival times are stored in a second array. (The times are integers, representing the number of minutes since midnight) The program will use a loop to search the array of departure times for the one closest to the time entered by the user.
*/

int main(void)
{
	int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
	int time, hour, i, convert_time, depart_time, depart_min, arrive_time, arrive_min;

   	printf("Enter a 24-hour time : ");
	scanf("%d:%d",&time,&hour);

	convert_time = hour * 60 + time;

	printf("Closest departure time is ");

	for (i = 0; i < 7; i++){
		if (convert_time < (departure[i]+departure[i])/2){
			depart_time = departure[i]/60 > 12 ? departure[i]/60 - 12 : departure[i]/60;
			depart_min = departure[i] % 60;
			arrive_time = arrival[i]/60 > 12 ? arrival[i]/60 - 12 : arrival[i]/60;
			arrive_min = arrival[i] % 60; 
			
			printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.",
			depart_time, depart_min, departure[i]/60 > 11 ? 'p' : 'a',
			arrive_time, arrive_min, arrival[i]/60 > 11 ? 'p' : 'a');	
			return 0;	
		}	
	}

	depart_time = departure[7]/60 > 12 ? departure[7]/60 - 12 : departure[7]/60;
	depart_min = departure[7] % 60;
	arrive_time = arrival[7]/60 > 12 ? arrival[7]/60 - 12 : arrival[7]/60;
	arrive_min = arrival[7] % 60; 

	printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
	depart_time, arrive_min, departure[7]/60 > 11 ? 'p' : 'a',
	arrive_time, arrive_min, arrival[7]/60 > 11 ? 'p' : 'a');	
	return 0;	
}
