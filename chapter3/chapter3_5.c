#include <stdio.h>

/*
Ex5
Write a program that asks the user to enter the number from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangements, followed by the sums of the rows, columns and diagonals:
Enter the numbers from 1 to 16 in any order :
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums : 34 34 34 34
column sums : 34 34 34 34
Diagonal sums : 34 34
*/

int main(void)
{
	int a_1,a_2,a_3,a_4,a_5,a_6,a_7,a_8,a_9,a_10,a_11,a_12,a_13,a_14,a_15,a_16;
	printf("Enter the numbers from 1 to 16 in any order : ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a_1,&a_2,&a_3,&	a_4,&a_5,&a_6,&a_7,&a_8,&a_9,&a_10,&a_11,&a_12,&a_13,&a_14,&a_15,&a_16);
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",a_1,a_2,a_3,a_4,a_5,a_6,a_7,a_8,a_9,a_10,a_11,a_12,a_13,a_14,a_15,a_16);	
	printf("Row sums : %d %d %d %d\n",a_1+a_2+a_3+a_4,a_5+a_6+a_7+a_8,a_9+a_10+a_11+a_12,a_13+a_14+a_15+a_16);
	printf("column sums : %d %d %d %d\n",a_1+a_5+a_9+a_13,a_2+a_6+a_10+a_14,a_3+a_7+a_11+a_15,a_4+a_8+a_12+a_16);
	printf("Diagonal sums : %d %d\n",a_1+a_6+a_11+a_16,a_4+a_7+a_10+a_13);
	return 0;
}

