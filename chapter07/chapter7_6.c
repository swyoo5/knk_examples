#include <stdio.h>

/*
Ex6
Write a program that prints the value of sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double), sizeof(long double).
*/

int main(void)
{
	printf("int : %lu\n",sizeof(int));
	printf("short : %lu\n",sizeof(short));
	printf("long : %lu\n",sizeof(long));
	printf("float : %lu\n",sizeof(float));
	printf("double : %lu\n",sizeof(double));
	printf("long double : %lu\n",sizeof(long double));
	
	return 0;
}
