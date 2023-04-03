#include <stdio.h>
#define MAX 80
/*
Enter message to be encrypted : Go ahead, make my day.
Enter shift amount (1-25) : 3
Encrypted message : Jr dkhdg, pdnh pb gdb.

The program can decrypt a message if the user enters 26 minus the original key:

Enter message to be encrypted : Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25) : 23
Encrypted message : Go ahead, make my day.
*/

int main(void)
{
	char message[MAX], text;
	int key, i, j;

	printf("Enter message to be encrypted : ");
	
	// 입력한 메시지 배열에 저장
	for (i = 0; (text = getchar()) != '\n'; i++){
		message[i] = text;
	}	
	
	printf("Enter shift amount (1-25) : ");
	scanf("%d", &key);

	for (j = 0; j < i; j++){
		if (message[j] >= 'A' && message[j] <= 'Z'){
			message[j] = (((message[j] - 'A') + key) % 26) + 'A';	
		}else if (message[j] >= 'a' && message[j] <= 'z'){
			message[j] = (((message[j] - 'a') + key) % 26) + 'a';
		}
	}

	for (j = 0; j < i; j++){
		printf("%c",message[j]);
	}
	printf("\n");
		
	return 0;
}


