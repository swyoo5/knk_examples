#include <stdio.h>

/*
Ex9
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:
Enter first date (mm/dd/yy) : 3/6/08
Enter second date (mm/dd/yy) : 5/17/08
5/17/07 is earlier that 3/6/08
*/

int main(void)
{
	int m1,d1,y1,m2,d2,y2;
	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d/%d/%d",&m1,&d1,&y1);
	printf("Enter second date : ");
	scanf("%d/%d/%d",&m2,&d2,&y2);
	
	if (y1 > y2){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",m2,d2,y2,m1,d1,y1);
	}else if (y1 < y2){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",m1,d1,y1,m2,d2,y2);
	}else if (y1 == y2){
		if (m1 < m2){
			printf("%d/%d/%.2d is earlier\n",m1,d1,y1);
		}else if (m1 > m2){
			printf("%d/%d/%.2d is earlier\n",m2,d2,y2);
		}else if (m1 == m2){
			if (d1 < d2){
				printf("%d/%d/%.2d is earlier\n",m1,d1,y1);
			}else if (d1 > d2){
				printf("%d/%d/%.2d is earlier\n",m2,d2,y2);	
			}
		}
	}	
	return 0;
}
