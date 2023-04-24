#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#define RANK_NUM 13
#define SUIT_NUM 4

/*
Enter number of cards in hand : 5
Your hand : 7c 2s 5d as 2h
*/

int main(void)
{
	const char rank_arr[RANK_NUM] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
	const char suit_arr[SUIT_NUM] = {'c', 'd', 'h', 's'};
	char in_hand[SUIT_NUM][RANK_NUM] = {false};
	int card_num, suit, rank;
		
	printf("Enter number of cards in hand : ");
	scanf("%d", &card_num);

	srand((unsigned int) time(NULL));

	printf("Your hand : ");
	while (card_num-- > 0)
	{
		suit = rand() % SUIT_NUM;
		rank = rand() % RANK_NUM;
		
		if (in_hand[suit][rank] == false)
		{
			in_hand[suit][rank] = true;
			printf(" %c%c", rank_arr[rank], suit_arr[suit]); 
		}
	}
	printf("\n");
			
	return 0;
}
