#include <stdio.h>
#define MAX 100

/*
Ex16
Write a program that tests whether two words are anagrams (permutation of the same letters):

Enter first word : smartest
Enter second word : mattress
The words are anagrams.

Enter first word : dumbest
Enter second word : stumble
The words are not anagrams.
*/

int main(void)
{
	char first_arr[MAX], second_arr[MAX];
	char first_word, second_word;
	int first_bool[26] = {0}, second_bool[26] = {0};
	int i, j, k;	

	printf("Enter first word : ");
	for (i = 0; (first_word = getchar()) != '\n'; i++){
		first_arr[i] = first_word;
	}
	
	printf("Enter second word : ");
	for (j = 0; (second_word = getchar()) != '\n'; j++){
		second_arr[j] = second_word;
	}
	
	// 첫번째 단어 bool 배열에 입력
	for (k = 0; k < i; k++){
		first_bool[first_arr[k]-'a'] = 1;
	}

	// 두번째 단어
	for (k = 0; k < j; k++){
		second_bool[second_arr[k]-'a'] = 1;
	}

	// bool 배열 비교
	for (k = 0; k < 26; k++){
		if (first_bool[k] != second_bool[k]){
			printf("The words are not anagrams.\n");
			return 0;
		}
	}	
	printf("The words are anagrams.\n");
	return 0;
}
