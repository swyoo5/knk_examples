#include <stdio.h>

/*
Ex2
Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor :
Enter two integers : 12 28
Greatest common divisor : 4
*/

int main(void)
{
	int n1,n2,temp;
	printf("Enter two integers : ");
	scanf("%d %d",&n1,&n2);

	if (n1 < n2){
		temp = n1;
		n1 = n2;
		n2 = temp;
		}
	
	while (n2 != 0){
		temp = n1%n2;	
		n1 = n2;
		n2 = temp;
	}

	printf("Greatest common divisor : %d\n",n1);
		
			
	return 0;
}
