#include <stdio.h>

/*
Ex1
Modify the repdigit.c program of Section 8.1 so that it shows which dogots (if any) were repeated:
Enter a number : 939577
*/

int main(void)
{
	long num;	
	int digit,i;
	int digit_repeat[10] = {0};

	printf("Enter a number : ");
	scanf("%ld",&num);

	while (num > 0){
		digit = num%10;
		digit_repeat[digit]++;
		num /= 10;
	}	


	for (i=0; i<10; i++){
		if (digit_repeat[i] > 1){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
