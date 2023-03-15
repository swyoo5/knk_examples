#include <stdio.h>

/*
Ex8 
The following table shows the daily flights from one city to another:

Departure time		Arrival time
8:00am			10:16am
9:43am			11:52am
11:19am			1:31pm
12:47pm			3:00pm
2:00pm			4:08pm
3:45pm			5:55pm
7:00pm			9:20pm
9:45pm			11:58pm
Write a program that asks the user to enter the time(expressed in hours and minutes, using the 24hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:

Enter a 24hour time : 13:15
Closest departure time is 12:47pm, arriving at 3:00pm
*/

int main(void)
{
	int hour,minute,a1=480,a2=583,a3=679,a4=767,a5=840,a6=945,a7=1140,a8=1305;
	printf("Enter a 24hour time : ");
	scanf("%d:%d",&hour,&minute);
	
	int convert_time = hour * 60 + minute;
	
	if (convert_time < (a1+a2)/2){
		printf("Closest departure time is 8:00am\n");
	}else if (convert_time < (a2+a3)/2){
		printf("Closest departure time is 9:43am\n");
	}else if (convert_time < (a3+a4)/2){
		printf("Closest departure time is 11:19am\n");
	}else if (convert_time < (a4+a5)/2){
		printf("Closest departure time is 12:47pm\n");
	}else if (convert_time < (a5+a6)/2){
		printf("Closest departure time is 2:00pm\n");
	}else if (convert_time < (a6+a7)/2){
		printf("Closest departure time is 3:45pm\n");
	}else if (convert_time < (a7+a8)/2){
		printf("Closest departure time is 7:00pm\n");
	}else{
		printf("Closest departure time is 9:45pm\n"); 
	}	
	return 0;
}










