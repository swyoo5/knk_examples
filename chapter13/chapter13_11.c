#include <stdio.h>

#define MAX 100

/*
Ex11
Modify chapter 7_13 so that it includes the following function :
double compute_average_word_length(const char *sentence);
The function returns the average length of the words in the string pointed to by sentence.
*/

char sentence[MAX];
char *p = sentence;

double compute_average_word_length(const char *sentence);

int main(void)
{
	char c;

	printf("Enter a sentence : ");
	
	while ((c = getchar()) != '\n')
	{
		*p++ = c;
	} 
	*p = '\0';

	printf("Average word length : %lf\n", compute_average_word_length(sentence));

	return 0;
}

double compute_average_word_length(const char *sentence)
{
	double avg = 0.0;
	int word_num = 1, char_num = 0;

	while (*p != '\0')
	{
		if (*p == ' ')
		{
			word_num++;
			p++;
		}else
		{
			char_num++;
			p++;
		}
	}

	avg = (double) char_num / word_num;

	return avg;
}
