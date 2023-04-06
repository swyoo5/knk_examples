#include <stdio.h>
#include "quicksort.h"

#define N 10

//quicksort algorithm


int main(void)
{
	int arr[N], i;

	printf("Enter 10 numbers to be sorted : ");

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	quick_sort(arr, 0, N-1);

	printf("In sorted order : ");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");	
	return 0;
}

