#include <stdio.h>

#include "readline.h"

/*
Printing a one month reminder list

Enter day and reminder : 24 Susan's birthday
Enter day and reminder : 5 6:00 - Dinner with Marge and Russ
Enter day and reminder : 26 Movie - "Chinatown" 
Enter day and reminder : 7 10:30 - Dental appointment
Enter day and reminder : 12 Movie - "Dazed and confused"
Enter day and reminder : 5 Saturday class
Enter day and reminder : 12 Saturday class 
Enter day and reminder : 0

Day Reminder
  5 Saturday class
  5 6:00 - Dinner with Marge and Russ
  7 10:30 - Dental appointment
 12 Saturday class
 12 Movie - "Dazed and Confused"
 24 Susan's birthday
 26 Movie - "Chinatown"
*/

void save_message(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = ch;
		}
	}
	str[i] = '\0';
}	


