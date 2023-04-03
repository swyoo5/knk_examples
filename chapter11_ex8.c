#include <stdio.h>

/*
Write the following function :
int *find_largest(int a[], int n);
When passed an array a of length n, the function will return a pointer to the array's largest element.
*/

int *find_largest(int a[], int n);

int main(void)
{
	int n, i;

	printf("Enter the number of elements : ");
	scanf("%d",&n);

	int a[n];

	for (i = 0; i < n; i++){
		printf("%d element : ", i);
		scanf("%d",&a[i]);
	}

	find_largest(a,n);

	return 0;
}

int *find_largest(int a[], int n)
{
	int i, *largest = &a[0];
	for (i = 1; i < n; i++){
		if (a[i] > *largest){
			largest = &a[i];
		}
	}
	printf("%d",*largest);
	return largest;
}

