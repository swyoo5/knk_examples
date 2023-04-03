#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100

/*
Ex14
Modify chapter8_16 so that it includes the following function:
bool are_anagrams(const char *word1, const char *word2);
The function returns true if the strings pointed to by word1 and word2 are anagrams.
*/

bool word1_bool[26] = {0}, word2_bool[26] = {0};

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
	char word1[MAX], word2[MAX];
	char *p = word1, *q = word2;
	char c,d ;
	
	printf("Enter first word : ");
	while ((c = toupper(getchar())) != '\n')
	{
		*p++ = c;
	}
	*p = '\0';

	printf("Enter second word : ");
	while ((d = toupper(getchar())) != '\n')
	{
		*q++ = d;
	}
	*q = '\0';

	if (are_anagrams(word1,word2))
	{
		printf("The words are anagrams.\n");
		return 0;
	}
	
	printf("The words are not anagrams.\n");
	return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
	while (*word1 != '\0')
	{
		word1_bool[*word1 - 'A'] = 1;	
		word1++;	
	}

	while (toupper(*word2) != '\0')
	{
		word2_bool[*word2 - 'A'] = 1;
		word2++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (word1_bool[i] != word2_bool[i])
		{
			return false;	
		}
	}
	return true;
}
