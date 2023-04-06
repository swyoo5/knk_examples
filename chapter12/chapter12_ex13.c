#include <stdio.h>
#define N 10

/*
Section 8.2 had a program fragment in which two nested for loops initialized the array ident for use as an identity matrix. Rewrite this code, using a single pointer to step through the array one element at a time.
*/

int main(void)
{
	int ident[N][N], *p = ident[0];
	int zeros = N;

	while (p < ident[0] + N * N) 
	{
		if (zeros == N){
			*p = 1;
			zeros = 0;
		}else{
			*p = 0;
			zeros++;
		}
		p++;	
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			printf("%d ",ident[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
