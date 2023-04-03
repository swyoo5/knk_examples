#include <stdio.h>
#include <string.h>

#define MAX 20

/*
Write a program that finds the smallest and largest in a series of words. After the user enters the words, the program will determine which words would come first and last if the words were listed in dictionary order. The program must stop accepting input when the user enters a four letter word. Assume that no word is more than 20 letters long. An interactive session with the program might look like this:

Enter word : dog
Enter word : zebra
Enter word : rabbit
Enter word : catfish
Enter word : walrus
Enter word : cat
Enter word : fish 

smallest word : cat
Largest word : zebra
*/

char smallest[MAX+1], largest[MAX+1], word[MAX+1];

void get_first_word(void);
void get_compare_word(void);
void get_word(void);

int main(void)
{
	get_first_word();

	while (strlen(word) != 4)
	{
		get_compare_word();	
	}

	printf("Smallest word : %s\n", smallest);
	printf("Largest word : %s\n", largest);
	
}

void get_word(void)
{
	printf("Enter word : ");
	scanf("%20s", word);
}

void get_first_word(void)
{
	get_word();
	strcpy(smallest, word);
	strcpy(largest, word);
}

void get_compare_word(void)
{
	get_word();

	if (strcmp(word, smallest) < 0)
	{
		strcpy(smallest, word);
	}else if (strcmp(word, largest) > 0)
	{
		strcpy(largest, word);
	}		
}
