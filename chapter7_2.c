#include <stdio.h>

/*
Ex2
Modify the square2.c program of Section 6.3 so that it pauses after every 24 squares and displays the following message:
Press Enter to continue...
After displaying the message, the program should use getchar to read a character. getchar won't allow the program to continue until the user presses the Enter key.
*/

int main(void)
{
	int i,n;

	printf("Enter number of entries in table : ");
	scanf("%d",&n);
	getchar(); //이전 scanf()에서 남아있는 개행문자를 제거. getchar()이 없다면 개행문자가 버퍼에 남게됨

	for (i = 1; i <= n; i++){
		printf("%d\t%d\n",i,i*i);
		if (i % 24 == 0){
			printf("Press Enter to continue\n");
			if (getchar() == '\n'){
				continue;
			}
		}
	}
	return 0;
}
