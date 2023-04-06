#include <stdio.h>

/*
Write a loop that prints the highest temperature in the temperature array(Ex14) for each day of the week. The loop body should call the find_largest function, passing it one row of the array at a time.
*/

int main(void)
{
	int temperature[7][24], *p, i, largest;

	for (i = 0; i < 7; i++){
		largest = find_largest(temperature[i],24);
		printf("day %d's highest temperature : %d\n", i, largest);	
	}	
	return 0;
}
