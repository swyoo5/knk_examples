#include <stdio.h>
#include <string.h>

#define MSG_LEN 60
#define MAX_REMIND 50

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

void save_message( );

int main(void)
{
	int day, i, j, num_remind = 0;
	char day_str[3], msg_str[MSG_LEN + 1], reminder[MAX_REMIND][MSG_LEN];
	
	while (1)
	{
		if (num_remind == MAX_REMIND) 
		{
			printf("No space left");
			break;
		}	
		
		printf("Enter day and reminder : ");
		scanf("%2d", &day);

		if (day == 0) break;

		sprintf(day_str, "%2d", day);
		save_message(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
		{
			if (strcmp(day_str, reminder[i]) < 0)
				 break;
		}
		
		for (j = num_remind; j > i; j--)
		{
			strcpy(reminder[j], reminder[j-1]);
		}	

		strcpy(reminder[i], day_str);
		strcat(reminder[i], msg_str);
		num_remind++;
	}
	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
	{
		printf(" %s\n", reminder[i]);	
	}
	return 0;
}

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


