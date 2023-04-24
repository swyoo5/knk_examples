#include <stdio.h>

/*
Ex3
Enter ISBN : 978-0-393-97950-3
GS1 prefix : 978
Group identifier : 0
Publisher code : 393
Item number : 97950
check digit : 3
*/

int main(void)
{	
	int a,b,c,d,e;
	printf("Enter ISBN : ");
	scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
	printf("GS1 prefix : %d\n",a);
	printf("Group identifier : %d\n",b);
	printf("Publisher code : %d\n",c);
	printf("Item number : %d\n",d);
	printf("check digit : %d\n",e);	
	return 0;
}
