#include <stdio.h>

/*
Ex13
Modify chapter8_15 so that it includes the following function:
void encrypt(char *message, int shift);
The function expects message to point to a string containing the message to be encrypted;
shift represents the amount by which each letter in the message is to be shifted
*/

char sentence[MAX];
char *p = sentence;

void encrypt(char *message, int shift);

int main(void)
{
	char c;
	int shift;

	printf("Enter message to be encrypted : ");
	
	while ((c = getchar()) != '\n')
	{
		*p++ = c;	
	}	
	p = '\0';

	printf("Enter shift amount(1-25) : ");
	scanf("%d",&shift);

	encrypt(sentence, shift);
	
	return 0;
}


void encrypt(char *message, int shift)
{
	for (p = sentence; *p != '\0'; p++)
	{
		if (*p >= 'A' && *p <= 'Z')
		{
			putchar((((*p) - 'A') + shift) % 26 + 'A');
		}else if (*p >= 'a' && *p <= 'z')
		{
			putchar((((*p) - 'a') + shift) % 26 + 'a');
		}
		putchar(*p);
	}
	printf("\n"); 
}
