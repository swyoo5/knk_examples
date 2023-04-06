#include <stdio.h>
#include <ctype.h>

/*
Ex10
Write a program that counts the number of vowels(a,e,i,o,u) in a sentence:
Enter a sentence : And that's the way it is.
Your sentence contains 6 vowels
*/

int main(void)
{
	int vowel;
	char ch;

	printf("Enter a sentence : ");	
	while ((ch = toupper(getchar())) != '\n'){
		switch (ch){
		case 'A': case 'E': case 'I': case 'O': case 'U':
			vowel++;
			break;			 
		}	
	}
	printf("Your sentence contains %d vowels.\n",vowel);

	return 0;
}
