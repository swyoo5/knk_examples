#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Ex3
Modify Programming Project 9 from chapter 8 so that it includes the following functions :
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
main first calls generate_random_walk, which initializes the array to contain '.' characters and then replace some of these characters by the letters A through Z, as described in the original project. main then calls print_array to display the array on the screen.
*/

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void)
{
	void generate_random_walk(char walk[10][10]);
	void print_array(char walk [10][10]);
	
	srand((unsigned int) time(NULL));
	char walk[10][10] = {0};

	generate_random_walk(walk);
	print_array(walk);

	return 0;
}

void generate_random_walk(char walk[10][10])
{
	int row = 0, col = 0, direction, i, j, letter = 'A';

	walk[row][col] = letter++;

	srand((unsigned) time(NULL));

	while (letter <= 'Z'){
		direction = rand() % 4;
		switch(direction){
		case 0:
			if (row > 0 && walk[row-1][col]	== 0){
				walk[--row][col] = letter++;
			}
			break;
		case 1:
			if (row < 9 && walk[row+1][col] == 0){
				walk[++row][col] = letter++;
			}	
			break;
		case 2:
			if (col > 0 && walk[row][col-1] == 0){
				walk[row][--col] = letter++;
			}	
			break;
		case 3:
			if (col < 9 && walk[row][col+1] == 0){
				walk[row][++col] = letter++;
			}	
			break;
		default :
			break;
		}

		// 네방향 모두 막힘
		if (walk[row+1][col] && walk[row-1][col] && walk[row][col+1] && walk[row][col]-1){
			continue;
		}	

		// 이미 자리가 차있을때
		if (direction == 0 && walk[row-1][col] != 0){
			continue;
		}else if (direction == 1 && walk[row+1][col] != 0){
			continue;
		}else if (direction == 2 && walk[row][col-1] != 0){
			continue;
		}else if (direction == 3 && walk[row][col+1] != 0){
			continue;
		}
	}
	return;	
}

void print_array(char walk[10][10])
{
	int i, j;

	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (walk[i][j] == 0){
				walk[i][j] = '.'; 
			}	
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}
