#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Ex9
Write a program that generates a random walk across a 10x10 array. The array will contain characters(all '.' initially). The program must randomly 'walk' from element to element, always going up, down, left, or right by one element. The elements visited by the program will be labeled with the letters A through Z, in the order visited.
*/

int main(void)
{
	char walk_board[10][10] = {0};
	int i, j, row = 0, column = 0, alphabet = 'A', direction;

	walk_board[0][0] = alphabet++;	

	srand((unsigned)time(NULL));

	while (alphabet <= 'Z'){ 
		direction = rand()%4;
		switch (direction){
		case 0: // up
			if (row > 0 && walk_board[row-1][column] == 0){
				walk_board[--row][column] = alphabet++;
			}
			break;
		case 1: // down
			if (row < 9 && walk_board[row+1][column] == 0){
				walk_board[++row][column] = alphabet++;
			}	
			break;
		case 2: // left
			if (column > 0 && walk_board[row][column-1] == 0){
				walk_board[row][--column] = alphabet++;
			}	
			break;
		case 3: // right
			if (column < 9 && walk_board[row][column+1] == 0){
				walk_board[row][++column] = alphabet++;
			}	
			break;
		}

		// 모든방향이 막힌경우
		if (walk_board[row+1][column] && walk_board[row-1][column] && walk_board[row][column+1] && walk_board[row][column-1]){
			break;
		}
		
		// 이미 옮길 자리에 알파벳이 있는 경우	
		if (walk_board[row-1][column] && direction == 0)
			continue;
		if (walk_board[row+1][column] && direction == 1)
			continue;
		if (walk_board[row][column-1] && direction == 2)
			continue;
		if (walk_board[row][column+1] && direction == 3)
			continue;
	}

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			printf("%c ",walk_board[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
