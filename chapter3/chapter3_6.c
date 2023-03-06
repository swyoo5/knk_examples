#include <stdio.h>

/*
Ex6
Modify the addfrac.c program of Section 3.2 so that the user enters both fractions at the same time, seperated by a plus sign:
Enter two fractions seperated by a plus sign : 5/6+3/4
The sum is 38/24
*/

int main(void)
{
	int a,b,c,d;
	printf("Enter two fractions seperated by a plus sign : ");
	scanf("%d/%d+%d/%d",&a,&b,&c,&d);
	printf("The sum is %d/%d",a*d+b*c,b*d);
	return 0;
}
