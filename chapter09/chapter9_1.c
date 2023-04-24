#include <stdio.h>

#define MAX_LEN 100

/*
Ex1
Write a program that asks the user to enter a series of integers(which it stores in an array), then sorts the integers by calling the function selection_sort. When given an array with n elements, selection_sort must do the following:
1.Search the array to find the largest element, then move it to the last position in the array.
2.Call itself recursively to sort the first n-1 elements of the array
*/

void selection_sort(int n, int arr[n])
{
	if (n==0) return;
	
	int largest = 0, temp, i;

	for (i = 0; i < n; i++){
		if (arr[i] > arr[largest]){
			largest = i;
		}
	}

	temp = arr[largest];
	arr[largest] = arr[n-1];
	arr[n-1] = temp;

	selection_sort(n-1,arr);
}

int main(void){
	int i, c, n, a[MAX_LEN];	
	
	printf("Enter list of integers to be sorted : ");
	
	for (i = 0, n = 0; i < MAX_LEN; i++){
		scanf(" %d", &a[i]);
		n++;
		if ((c = getchar()) == '\n')
			break;
	}

	selection_sort(n,a);

	printf("Sorted : ");
	for (i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;		
}
