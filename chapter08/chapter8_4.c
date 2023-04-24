#include <stdio.h>
#define SIZE ((int) (sizeof(arr)/sizeof(arr[0])))

/*
Ex4
Modify the reverse.c program of Section 8.1 to use the expression (int) (sizeof(a)/sizeof(a[0])) (or a macro with this value) for the array length
*/

int main(void)
{
	int i;
	int arr[10];

	printf("Enter %d numbers : ", SIZE);
	for (i=0; i<SIZE; i++){
		scanf("%d",&arr[i]);
	}

	for (i=SIZE-1; i>=0; i--){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}

