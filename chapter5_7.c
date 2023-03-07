#include <stdio.h>

/*
Ex7
Write a program that finds the largest and smallest of four integers entered by the user.

Enter four integers : 21 43 10 35
Largest : 43
smallest : 10
Use as few if statements as possible. Hint : Four if statements are sufficient
*/

int main(void)
{	
	int i1,i2,i3,i4;
	printf("Enter four integers : ");
	scanf("%d %d %d %d",&i1,&i2,&i3,&i4);
	
	int min1,max1,min2,max2;

	if (i1 < i2){
		min1 = i1;
		max1 = i2;
	}
	else {
		min1 = i2;
		max1 = i1;
	}
	if (i3 < i4){
		min2 = i3;
		max2 = i4;
	}else {
		min2 = i4;
		max2 = i3;
	}
	
	if (min1 < min2){
		printf("smallest : %d\n",min1);
	}else {
		printf("smallest : %d\n",min2);
	}

	if (max1 < max2){
		printf("largest : %d\n",max2);
	}else {
		printf("largest : %d\n",max1);	
	}
	
	 
	return 0;
}
