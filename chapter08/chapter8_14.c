#include <stdio.h>
#define MAX 100
#define SIZE (sizeof(sentence_arr) / sizeof(sentence_arr[0]))

/*
Ex14
Write a program that reverses the words in a sentence.
Enter a sentence : you can cage a swallow can't you?
Reversal of sentence : you can't cage a swallow can't you?
*/

int main(void)
{
	char sentence, mark, sentence_arr[MAX] = {0}; 
	int i, j;

	printf("Enter a sentence : ");

	// 1. 입력받은 문장 배열에 저장, 구두점 또는 물음표 또는 느낌표 만나면 입력 종료. 
	for (i = 0; (sentence = getchar()) != '\n'; i++)
	{
		if (sentence_arr[i] == '.' || sentence_arr[i] == '?' || sentence_arr[i] == '!') 
		{
			mark = sentence_arr[i];
			break;
		}
		sentence_arr[i] = sentence;
	}
	printf("%d",i);

	// 2. 끝에서부터 반대로 내려오면서 띄어쓰기 기준으로 단어 출력. 
	while (i >= 0){
		while (sentence_arr[i] != ' ' && i != 0)

	}
	printf("%c\n", mark);
	
	return 0;
}
