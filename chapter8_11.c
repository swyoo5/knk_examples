#include <stdio.h>

/*
Ex11
Modify Programming Project 4 from chapter 7 so that the program labels its output:
Enter phone number : 1-800-COL-LECT
In numeric form : 1-800-265-5328
The program will need to store the phone number(either in its original form or in its numeric form)
in an array of characters until it can be printed. you may assume that the phone number is no more than 15 characters long.
*/

int main(void)
{
	char phone_array[15], phone_num;
	int i;

	printf("Enter phone number : ");
	
	for (i = 0; i < 15; i++){
		phone_array[i] = getchar();
	}

	for (i = 0; i < ((int) sizeof(phone_array)/sizeof(phone_array[0])); i++){
		switch (phone_array[i]){
		case 'A': case 'B': case 'C':
			putchar('2');	
			break;
		case 'D': case 'E': case 'F':
			putchar('3');	
			break;
		case 'G': case 'H': case 'I':
			putchar('4');	
			break;
		case 'J': case 'K': case 'L':
			putchar('5');	
			break;
		case 'M': case 'N': case 'O':
			putchar('6');	
			break;
		case 'P': case 'R': case 'S':
			putchar('7');	
			break;
		case 'T': case 'U': case 'V':
			putchar('8');	
			break;
		case 'w': case 'X': case 'Y':
			putchar('9');	
			break;
		default :
			putchar(phone_array[i]);
			break;
		}
	}
	return 0;
}
