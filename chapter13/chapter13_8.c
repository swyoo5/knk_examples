#include <stdio.h>
#include <ctype.h>

#define MAX 100

/*
Ex8
Modify chapter7_5 so that it includes the following function:
int compute_scrabble_value(const char *word);
The function returns the SCRABBLE value of the string pointed to by word.
*/

int compute_scrabble_value(const char *word);

int main(void)
{		
	char word[MAX];

	printf("Enter a word : ");
	scanf("%s", word);

	printf("Scrabble value : %d\n", compute_scrabble_value(word));
	
	return 0;
}

int compute_scrabble_value(const char *word)
{
	int num_array[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int sum = 0;

	while (*word != '\0')
	{
		sum += num_array[toupper(*word) - 'A'];
		word++;			
	}
	return sum;
}
