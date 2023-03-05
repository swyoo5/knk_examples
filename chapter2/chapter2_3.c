#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

/*
Ex 3
Modify the program of Programming Project 2 so that it promts the user to enter the radius of the sphere.
*/

int main(void)
{
	int radius;
	scanf("%d",&radius);
	float volume = 4.0f/3.0f * M_PI * radius * radius * radius;	
	printf("%f\n",volume);	
	return 0;
}
