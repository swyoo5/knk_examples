#include <stdio.h>
#include <ctype.h>

/*
Ex6
The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing messages. Here's a ty[oca; B1FF communique:
H3Y DUD3, C 15 R1LLY C00L!!!!
Write a B1FF filter that reads a message entered by the user and translates it into B1FF-speak:
Enter message : Hey dude, C is rilly cool
In B1FF-speak : H3Y DUDE, C 15 R1LLY C00L
Your program should convert the message to upper case letters, substitude digits for certain letters(A=4, B=8, E=3, I=1, O=0, S=5), and then append 10 or so exclamation marks.
*/

int main(void)
{
	int arr[2];

	for (int i=0;i<2;i++){
		scanf("%d",&arr[i]);
	}

	for (int i=0;i<2;i++){
		printf("%d",arr[i]);
	}

	return 0;
}

