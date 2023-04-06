#include <stdio.h>

/*
Write the following function :
double inner_product(const double *a, const double *b, int n);
a and b both points to arrays of length n. The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic - not subscripting - to visit array elements.
*/

double inner_product(const double *a, const double *b, int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += *(a++) * *(b++);
	}
	return sum;
}
