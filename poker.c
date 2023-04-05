#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define RANK_NUM 13
#define SUIT_NUM 4

void read_card(void);

int occupied_rank[RANK_NUM] = {0}, occupied_suit[SUIT_NUM] = {0}, pair = 0, three = 0, four = 0, flush = 0, straight = 0;
bool in_hand[RANK_NUM][SUIT_NUM] = {false};	

void read_card(void);
void classify_card(void);
void print_result(void);
void clear_array(void);

int main(void)
{
	read_card();

	return 0;
}

void read_card(void)
{
	int i, rank_index, suit_index, card_count, bad_card;
	char suit, rank;

	while (1){
		clear_array();
		card_count = 5;
		while (card_count > 0){
			printf("Enter a card : ");
			scanf(" %c%c", &rank, &suit);
			rank = toupper(rank);
			suit = toupper(suit);

			switch(rank){
			case '0': exit(EXIT_SUCCESS);
			case '2': rank_index = 0; break;
			case '3': rank_index = 1; break;
			case '4': rank_index = 2; break;
			case '5': rank_index = 3; break;
			case '6': rank_index = 4; break;
			case '7': rank_index = 5; break;
			case '8': rank_index = 6; break;
			case '9': rank_index = 7; break;
			case 'T': rank_index = 8; break;
			case 'J': rank_index = 9; break;
			case 'Q': rank_index = 10; break;
			case 'K': rank_index = 11; break;
			case 'A': rank_index = 12; break;
			default :
				bad_card = 1;
				break;
			}

			switch(suit){
			case 'C': suit_index = 0; break;
			case 'D': suit_index = 1; break;
			case 'H': suit_index = 2; break;
			case 'S': suit_index = 3; break;
			default :
				bad_card = 1;	
				break;
			}

			if (bad_card == 1){
				printf("Bad card; ignored\n");
				bad_card = 0;
			}else if (in_hand[rank_index][suit_index]){
				printf("Duplicate card; ignored\n");
			}else{
				occupied_rank[rank_index] += 1;
				occupied_suit[suit_index] += 1;
				in_hand[rank_index][suit_index] = true;
				card_count--;
			}	
		}

		classify_card();
		print_result();
	}
}

void clear_array(void)
{
	int i, j;
	for (i = 0; i < RANK_NUM; i++){
		occupied_rank[i] = 0;	
		for (j = 0; j < SUIT_NUM; j++){
			occupied_rank[j] = 0;
			in_hand[i][j] = false;	
		}
	}
}

void classify_card(void)
{
	int i;

	pair = 0;
	three = 0;
	four = 0;
	flush = 0;
	straight = 0;
	
	for (i = 0; i < RANK_NUM; i++){
		if (occupied_rank[i] == 2){
			pair++;	
		}else if (occupied_rank[i] == 3){
			three = 1;
		}else if (occupied_rank[i] == 4){
			four = 1;
		}else if (occupied_rank[i] == 1 && occupied_rank[i+1] == 1 && occupied_rank[i+2] == 1 && occupied_rank[i+3] == 1 && occupied_rank[i+4] == 1){
			straight = 1;
		}
	}

	for (i = 0; i < SUIT_NUM; i++){
		if (occupied_suit[i] == 5){
			flush = 1;
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
	printf("\n");
}
