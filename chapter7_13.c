#include <stdio.h>

/*
Ex13
Write a program that calculates the average word length for a sentence:
Enter a sentence : It was deja vu all over again.
Average word length : 3.4
For simplicity, your program should consider a punctuation mark to be part of the word to which it is attached. Display the average word length to one decimal place.
*/

int main(void)
{
	float length=0.0f,num=0.0f;
	char ch;

	printf("Enter a sentence : ");

	while ((ch = getchar()) != '\n'){
		if (ch != ' ')
			length++;
		else
			num++;	
	}
	printf("Average word length : %.2f\n",length/(num+1));

	return 0;
}
