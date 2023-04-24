#include <stdio.h>
#include <ctype.h>

/*
Ex8
Modify Programming project 8 from chapter 5 so that the user enters a time using 12hour clock. The input will have the form hours:minutes followed by either A,P,AM or PM (either lower-case or upper-case.) White space is allowed(but not required) between the numerical time and the AM/PM indicator. Examples of avlid input :
1:15P
1:15PM
1:15p 
1:15pm
1:15 P
1:15 PM
1:15 p
1:15 pm
You may assume that the input has one of these forms; there is no need to test for errors.
*/

int main(void)
{
	int hour,minute,a1=480,a2=583,a3=679,a4=767,a5=840,a6=945,a7=1140,a8=1305,convert_time;
	char ampm;	
	
	printf("Enter a 24hour time : ");
	scanf("%d:%d %c",&hour,&minute,&ampm);
	convert_time = (((toupper(ampm) == 'P' ? 12 : 0)+hour) * 60);

	printf("Closest departure time is ");

	if (convert_time < (a1+a2)/2){
		printf("8:00am.\n");
	}else if (convert_time < (a2+a3)/2){
		printf("9:43am.\n");
	}else if (convert_time < (a3+a4)/2){
		printf("11:19am.\n");
	}else if (convert_time < (a4+a5)/2){
		printf("12:47pm.\n");
	}else if (convert_time < (a5+a6)/2){
		printf("2:00pm.\n");
	}else if (convert_time < (a6+a7)/2){
		printf("3:45pm.\n");
	}else if (convert_time < (a7+a8)/2){
		printf("7:00pm.\n");
	}else{
		printf("9:45pm.\n");
	} 
	
	return 0;
}


