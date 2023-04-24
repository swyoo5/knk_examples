#include <stdio.h>

/*
Ex5
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time, instead of entering one digit, then five digits, and then another five digits.
Enter the first 11 digits of a UPC : 01380015173
Check digit : 5
*/

int main(void)
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,a,b,c;
	printf("Enter the first 11 digits of UPC : ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
	a = n1+n3+n5+n7+n9+n11;
	b = n2+n4+n6+n8+n10;
	c = 9-(a*3+b-1)/10;
	printf("Check digit : %d\n",c);
	return 0;
}
