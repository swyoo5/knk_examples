#include <stdio.h>

/*
Modify the find_largest function so that it uses pointer arithmetic - not subscripting - to visit array elements.
*/

int find_largest(int a[], int n)
{
	int *p, largest = a;

	for (p = a + 1; p < a + n; p++)
	{
		if (*p > largest){
			largest = *p;	
		}
	}
	return largest;
}
