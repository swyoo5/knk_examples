#include <stdio.h>

#define N 10

//quicksort algorithm

int split(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);

int main(void)
{
	int arr[N], i;

	printf("Enter 10 numbers to be sorted : ");

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	quick_sort(arr, 0, N-1);

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");	
	return 0;
}

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
