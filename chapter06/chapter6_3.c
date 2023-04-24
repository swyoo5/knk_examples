#include <stdio.h>

/*
Ex3
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:
Enter a fraction : 6/12
In lowest terms : 1/2
*/

int main(void)
{	
	int n1,n2;
	printf("Enter a fraction : ");
	scanf("%d/%d",&n1,&n2);
	
	int temp,n3=n1,n4=n2;
	if (n3<n4){
		temp = n4;
		n4 = n3;
		n3 = temp;
	}

	while (n4 != 0){
		temp = n3%n4;
		n3 = n4;
		n4 = temp;
	}
	
	printf("In lowest terms : %d/%d\n",n1/n3,n2/n3);	
	return 0;
}
