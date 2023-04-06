#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

/*
Ex2
Write a program that computes the volume of a sphere with a 10-meter radius, using the fomula v=4/3(pi)r^3. write the fraction 4/3 as 4.0f/3.0f.(Try writing it as 4/3. what happens?)
*/

int main(void)
{
	int r = 10;
	float volume = 4.0f/3.0f * M_PI * r * r * r;
	printf("%f\n",volume);
	return 0;
}

