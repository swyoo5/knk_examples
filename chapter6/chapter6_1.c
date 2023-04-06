#include <stdio.h>

/*
Ex1
Write a program that finds the largest in series of numbers entered by the user. The program must prompt the user to enter numbers one by one. When the user enters 0 or a negative number, the program must display the largest nonnegative number entered :

Enter a number : 60
Enter a number : 38.3
Enter a number : 4.89
Enter a number : 100.62
Enter a number : 75.2295
Enter a number : 0

The largest number entered was 100.62
*/

int main(void)
{
	float n=1,max=0.00;	
	while (n>0){
	printf("Enter a number : ");
	scanf("%f",&n);
	if (n>max){
		max = n;
	}
	}
	printf("The largest number entered was %f\n",max);
	return 0;
}
