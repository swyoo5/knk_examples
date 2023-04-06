#include "quicksort.h"

//quicksort algorithm

void quick_sort(int arr[], int low, int high)
{
	int middle;

	if (low >= high) return;

	middle = split(arr, low, high);
	
	quick_sort(arr, low, middle - 1);
	quick_sort(arr, middle + 1, high);

}

int split(int arr[], int low, int high)
{
	int part_element = arr[low];

	while (1)
	{
		while (low < high && part_element <= arr[high])
		{
			high--;
		} 
	
		if (low >= high)
		{
			break;
		}
		
		arr[low++] = arr[high];		
	
		while (low < high && arr[low] <= part_element)
		{
			low++;
		}	
		
		if (low >= high)
		{
			break;
		}

		arr[high--] = arr[low];
	}

	arr[high] = part_element;
	return high;
}
