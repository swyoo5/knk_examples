#include <stdio.h>
#include <ctype.h>

#define MAX 100

/*
Ex9
Modify chapter7_10 so that it includes the following function :
int compute_vowel_count(const char *sentence);
The function returns the number of vowels in the string pointed to by the sentence parameter.
*/

int compute_vowel_count(const char *sentence);

int main(void)
{
	char sentence[MAX];
	char *p = sentence, c;

	printf("Enter a sentence : ");

	while ((c = getchar()) != '\n' && p < sentence + MAX)
	{
		*p++ = c;
	}
 
	printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

	return 0;
}

int compute_vowel_count(const char *sentence)
{
	int vowels = 0;
	
	while (*sentence != '\0')
	{
		switch(toupper(*sentence))
		{
		case 'A': case 'E': case 'I': case 'O': case 'U':
			vowels++;
			break;
		}
		sentence++;
	}
	return vowels;
}
