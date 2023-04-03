#include <stdio.h>

/*
Write the following function:
void swap(int *p, int *q);
When passed the addresses of two variables, swap should exchange the values of the variables:
swap(&i, &j);	// exchanges values of i and j 
*/

int main(void)
{
	void swap(int *p, int *q);

	int i, j;
	scanf("%d %d", &i, &j);
	swap(&i, &j);
	printf("%d %d\n", i, j);
	return 0;
}

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
	return;
}
