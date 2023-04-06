#include <stdio.h>

/*
Ex2
Write a program that formats product information entered by the user. A session with the program should look like this:
Enter item number : 583
Enter unit price : 13.5
Enter purchase date (mm/dd/yyyy) : 10/24/2010
Item		Unit Price		Purchase Date
583		$13.50			10/24/2010
The item number and date should be left justified; the unit price should be right justified. Allow dollar amounts up to $9999.99.
Hint : Use tabs to line up the columns.
*/

int main(void)
{
	int item_num,m,d,y;
	float unit_price;
	printf("Enter item number : ");
	scanf("%d",&item_num);
	printf("Enter unit price : ");
	scanf("%f",&unit_price);
	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d",&m,&d,&y);
	
	printf("Item		");
	printf("Unit Price		");
	printf("Purchase Date		\n");
	printf("%-d		",item_num);
	printf("$%4.2f			",unit_price);
	printf("%-2d/%-2d/%-4d\n",m,d,y);
	return 0;
}

