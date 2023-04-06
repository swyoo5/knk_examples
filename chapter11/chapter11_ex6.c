#include <stdio.h>

/*
Write the following function :
void find_two_largest (int a[], int n, int *largest, int *second_largest);
when passed an array a of length n, the function will search a for its largest and second largest elements, storing them in the variables pointed to by largest and second_largest, respectively
*/

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int i, n, largest, second_largest;

	printf("Enter the number of element : ");
	scanf("%d",&n);
	int a[n];
	
	for (i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

	find_two_largest(a,n,&largest,&second_largest);

	printf("The largest : %d\n",largest);
	printf("Second largest : %d\n",second_largest);	

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	int i;
	
	*largest = *second_largest = a[0];

	for (i = 1; i < n; i++){
		if (a[i] > *largest){
			*largest = a[i];	
		}
	}

	for (i = 1; i < n; i++){
		if (a[i] != *largest && a[i] > *second_largest ){
			*second_largest = a[i];
		}	
	}
}
