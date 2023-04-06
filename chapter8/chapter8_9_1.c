#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int walk_array[10][10] = {0};
	int alphabet = 'A', row = 0, column = 0, i, j, direction;

	srand((unsigned) time(NULL));

	walk_array[row][column] = alphabet++;

	while (alphabet <= 'Z')
	{
		direction = rand() % 4;
		switch(direction){
		case 0: // up
			if (row > 0 && walk_array[row-1][column] == 0){
				walk_array[row-1][column] = alphabet++;
				row--;
			}			
			break;	
		case 1: // down
			if (row < 9 && walk_array[row+1][column] == 0){
				walk_array[row+1][column] = alphabet++; 
				row++;
			}
			break;	
		case 2: // left
			if (column > 0 && walk_array[row][column-1] == 0){
				walk_array[row][column-1] = alphabet++;
				column--;
			}
			break;	
		case 3: // right
			if (column < 9 && walk_array[row][column+1] == 0){
				walk_array[row][column+1] = alphabet++;
				column++;
			}
			break;
		default :
			break;
		}
	
		// 네방향 모두 막힘 	
		if (walk_array[row+1][column] && walk_array[row-1][column] && walk_array[row][column+1] && walk_array[row][column-1]){
			alphabet = 'B';	
			row = 0;
			column = 0;
			
			for (i = 0; i < 10; i++){
				for (j = 0; j < 10; j++){
					walk_array[i][j] = 0;
				}
			}
			walk_array[0][0] = 'A';
			continue;
		}
		
		// 옮겨야 할 자리가 차있는 경우
		if ((walk_array[row-1][column] && direction == 0) || (walk_array[row+1][column] && direction == 1) || (walk_array[row][column-1] && direction == 2) || (walk_array[row][column+1] && direction == 3)){
			alphabet = 'B';
			row = 0;
			column = 0;
			
			for (i = 0; i < 10; i++){
				for (j = 0; j < 10; j++){
					walk_array[i][j] = 0;
				}
			}
			walk_array[0][0] = 'A';
			continue;	
		}
	
	}

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (walk_array[i][j] == 0)
				walk_array[i][j] = '.';
			printf("%c ",walk_array[i][j]);	
		}
		printf("\n");
	}	
	
	return 0;
}
