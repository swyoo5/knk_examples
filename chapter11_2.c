#include <stdio.h>

/*
Ex2
Modify chapter5_8 so that it includes the following function :
void find_closet_flight(int desired_time, int *departure_time, int *arrival_time);

This function will find the flight whose departure time is closest to desired_time(expressed in minutes since midnight). It will store the departure and arrival times of this flight(also expressed in minutes since midnight) in the varialbes pointed to by departure_time and arrival_time respectively.
*/

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
	int hour, min, desired_time, departure_time, arrival_time, departure_hour, departure_min, arrival_hour, arrival_min;

	printf("Enter your desired time (hh:mm) : ");
	scanf("%d:%d", &hour, &min); 

	desired_time = 60 * hour + min;

	find_closest_flight(desired_time, &departure_time, &arrival_time);
	
	departure_hour = departure_time / 60;
	arrival_hour = arrival_time / 60;

	printf("Closest departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
	 departure_hour > 12 ? departure_hour - 12 : departure_hour,
	 departure_time % 60,
	 departure_hour > 12 ? 'p' : 'a',
	 arrival_hour > 12 ? arrival_hour - 12 : arrival_hour,
	 arrival_time % 60,
	 arrival_hour > 12 ? 'p' : 'a');		
		
	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
	int d1 = 480, d2 = 583, d3 = 679, d4 = 767, d5 = 840, d6 = 945, d7 = 1140, d8 = 1305;
	int a1 = 616, a2 = 712, a3 = 811, a4 = 900, a5 = 968, a6 = 1075, a7 = 1280, a8 = 1428;

	if (desired_time < (d1+d2)/2){
		*departure_time = d1;
		*arrival_time = a1;
	}else if (desired_time < (d2+d3)/2){
		*departure_time = d2;
		*arrival_time = a2;
	}else if (desired_time < (d3+d4)/2){
		*departure_time = d3;
		*arrival_time = a3;
	}else if (desired_time < (d4+d5)/2){
		*departure_time = d4;
		*arrival_time = a4;
	}else if (desired_time < (d5+d6)/2){
		*departure_time = d5;
		*arrival_time = a5;
	}else if (desired_time < (d6+d7)/2){
		*departure_time = d6;
		*arrival_time = a6;
	}else if (desired_time < (d7+d8)/2){
		*departure_time = d7;
		*arrival_time = a7;
	}else if (desired_time > (d7+d8)/2){
		*departure_time = d8;
		*arrival_time = a8;
	}
}
