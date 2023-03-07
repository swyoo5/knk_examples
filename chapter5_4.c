#include <stdio.h>

/*
Ex4
Here's a simplified version of the Beaufort scale, which is used to estimate wind force:

speed(knots)		Description
less than 1		calm
1-3			light air
4-27			breeze
28-47			gale
48-63			storm
above 64		hurricane
Write a program that asks the user to enter a wind speed(in knots), then displays the corresponding description.
*/

int main(void)
{
	float speed;
	printf("Enter a wind speed(in knots) : ");
	scanf("%f",&speed);
	
	if (speed < 1)
		printf("calm\n");
	else if (speed <= 3)
		printf("light air\n");
	else if (speed <= 27)
		printf("breeze\n");
	else if (speed <= 47)
		printf("gale\n");
	else if (speed <= 63)
		printf("storm\n");
	else
		printf("hurricane\n");
		
	return 0;
}
