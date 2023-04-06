#include <stdio.h>
#include <stdbool.h>

/*
Assume that the following array contains a week's worth of hourly temparature readings, with each row containing the readings for one day :
int temparature[7][24];
Write a statement that uses the search function(see Excercise 7) to search the entire temperatures array for the value 32.
*/

bool search(const int a[], int n, int key);

int main(void)
{
	int temparature[7][24];

	bool check = search(temperature, 7 * 24, 32);

	return 0;
}

