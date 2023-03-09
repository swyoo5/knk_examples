#include <stdio.h>

/*
Ex6
Write a program that prompts the user to enter a number n, then prints all even square between 1 and n. For example, if the user enters 100, the program should print the following:
4
16
36
64
100
*/

int main(void)
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);

	for (int i=2;i*i<=n;i+=2) {
		printf("%d\n",i*i);
	}

	return 0;
}
