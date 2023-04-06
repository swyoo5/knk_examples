#include <stdio.h>

#define WORD_MAX 30
#define CHARACTER_MAX 20

/*
Ex12
Modify chapter 8_14 so that it stores the words in a two dimensional char array as it reads the sentence, with each row of the array storing a single word. Assume that the sentence contains no more that 30 words and no word is more than 20 characters long. Be sure to store a null character at the end of each word so that it can be treated as a string.
*/

int main(void)
{
	char sentence_arr[WORD_MAX][CHARACTER_MAX+1];
	char sentence, *p, mark = 0;
	int row = 0;

	printf("Enter a sentence : ");
	
	while ((sentence = getchar()) != '\n')
	{
		for (p = sentence_arr[row]; sentence != ' ' && p < sentence_arr[row] + CHARACTER_MAX; p++)
		{
			*p = sentence;
		}
		*p = '\0';
		row++;
	}
	*p = '\0';

	for (p = sentence_arr[row]; p >= sentence[0]; p++)
	{
		putchar(*p++);
	}
	
	return 0;
}

