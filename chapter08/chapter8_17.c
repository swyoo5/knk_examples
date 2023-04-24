#include <stdio.h>
#define MAX 99

/*
Ex17
Write a program that prints an nxn magic square(a square arrangement of the numbers 1, 2, ..., n^2 in which the sums of the rows, columns, and diagonals are all the same). The user will specify the value of n:

This program creates a magic square of a specified size.
The size must be an odd number between 1 and 99.
Enter size of magic square : 5
   17   24    1    8   15
   23    5    7   14   16
    4    6   13   20   22
   10   12   19   21    3
   11   18   25    2    9

Store the magic square in a two dimensional array. Start by placing the number 1 in the middle of row 0. Place each of the remaining numbers 2, 3, ..., n^2 by moving up one row and over one column. Any attempt to go outside the bounds of the array should "wrap around" to the opposite side of the array. If a particular array element is already occupied, put the number directly below the previously stored number.
If your compiler supports variable length arrays, declare the array to have n rows and n columns. If not, declare the array to have 99 rows and 99 columns.
*/

int main(void)
{
	int row = 0, col, size, num = 1, i, j, temp_row, temp_col;
	int magic_square[MAX][MAX];
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99\n");
	
	printf("Enter size of magic square : ");
	scanf("%d",&size);


	col = (size-1)/2;
	magic_square[row--][col++] = num++;

	for (i = 0; i < size * size - 1; i++){
		temp_row = row;
		temp_row = col;
		
		if (row < 0){
			row = size-1;
		}else if (col > size-1){
			col = 0;
		}else if (magic_square[row][col] != 0){ 
			magic_square[++temp_row][temp_col]= num;
			row = temp_row;
			col = temp_col;	
		}

		magic_square[row--][col++] = num++;	
	}

	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++){
			printf("\t%d",magic_square[i][j]);	
		}
		printf("\n");
	}	
	return 0;
}
