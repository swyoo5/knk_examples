#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define RANK_NUM 13
#define SUIT_NUM 4


int rank_arr[RANK_NUM] = {0}, suit_arr[SUIT_NUM] = {0}, pair = 0;	
bool three = false, four = false, flush = false, straight = false;

int main(void)
{

	void read_card(void);
	void classify_card(void);
	void print_result(void);

	read_card();
	classify_card();
	print_result();

	return 0;
}

void read_card(void)
{
	int i, j, k, rank;
	char suit;


	for (i = 0; i < 5; i++){
	printf("Enter a card : ");
		while (1){
			scanf("%d%c", &rank, &suit);
			rank = toupper(rank);
			suit = toupper(suit);

			switch(rank){
			case 2: case 3: case 4: case 5: 
			case 6: case 7: case 8: case 9:
			rank_arr[rank-2]++;
			break;

			case 'T': rank_arr[8]++; break;

			case 'J': rank_arr[9]++; break;

			case 'Q': rank_arr[10]++; break;

			case 'K': rank_arr[11]++; break;
			
			case 'A': rank_arr[12]++; break;

			default :
				printf("Bad card; ignored.");
				break;
			}

			switch(suit){
			case 'C': suit_arr[0]++; break;
			
			case 'D': suit_arr[1]++; break;

			case 'H': suit_arr[2]++; break;

			case 'S': suit_arr[3]++; break;

			default :
				printf("Bad card; ignored.");
				break;
			}

			for (j = 0; j < RANK_NUM; j++){
				for (k = 0; k < SUIT_NUM; k++){
					if (((rank_arr[j] == 2) && (suit_arr[k] == 2))){
						printf("Duplicate card; ignored.");
						rank_arr[j]--;
						suit_arr[j]--;
						continue;
					}
				}	
			}	
			break;
		}
	}
}

void classify_card(void)
{
	int i;
		
	for (i = 0; i < RANK_NUM; i++){
		if (rank_arr[i]	== 2){
			pair++;	
		}if (rank_arr[i] == 3){
			three = true;
		}if (rank_arr[i] == 4){
			four = true;
		}
	}
	
	for (i = 0; i < RANK_NUM-4; i++){
		if (rank_arr[i] == 1 && rank_arr[i+1] == 1 && rank_arr[i+2] == 1 && rank_arr[i+3] == 1 && rank_arr[i+4] == 1){
			straight = true;
		}
	}

	for (i = 0; i < SUIT_NUM; i++){
		if (suit_arr[i] == 5){
			flush = true;
		}
	}
}

void print_result(void)
{
	if (straight && flush){
		printf("Straight flush\n");
	}else if (four){
		printf("Four of a kind\n");
	}else if (three && pair == 1){
		printf("Full house\n");
	}else if (flush){
		printf("Flush\n");
	}else if (straight){
		printf("Straight\n");
	}else if (three){
		printf("Three of a kind\n");
	}else if (pair == 2){
		printf("Two pairs\n");
	}else if (pair == 1){
		printf("Pair\n");
	}else{
		printf("High card\n");
	}

	return;
}
