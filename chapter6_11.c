#include <stdio.h>

/*
Ex11
The value of the mathematical constant e can be expressed as an infinite series:
e = 1+1/1!+1/2!+1/3!+...
Write a program that approximates e by computing the value of
1+1/1!+1/2!+1/3!+..+1/n!
where n is an integer entered by the user
*/

int main(void)
{
	int n,t = 1;
	float sum = 1.00f;
	printf("Enter a value : ");
	scanf("%d",&n);
	
	for (int i=1 ; i<=n ; i++){
		t *= i; 	
		sum += (float) 1/t;
	}
	printf("The approximate value of e : %f\n",sum); 
	return 0;
}
