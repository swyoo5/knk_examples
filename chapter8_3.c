#include <stdio.h>
#include <stdbool.h>

/*
Ex3
Modify the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0
*/

int main(void)
{
	long num,temp;
	int digit;
	int digit_repeat[10] = {0};

	printf("Enter a number : ");
	scanf("%ld",&num);
	getchar();

	while (num>0){
		temp = num;
		while (num > 0){
			digit = num%10;
			if (digit_repeat[digit]){
				printf("%ld is repeated digit\n",temp);
				break;	
			}
			digit_repeat[digit]++;
			num/=10;	
		}
		if (num==0){
			printf("%ld is no repeated digit\n",temp);
		}
		printf("Enter a number : ");
		scanf("%ld",&num);
		getchar();
		for (int i=0; i<10; i++){
			digit_repeat[i] = 0;
		}
	}


	return 0;
}
