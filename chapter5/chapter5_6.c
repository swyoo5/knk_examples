#include <stdio.h>

/*
Ex6
Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid. After the user enters a UPC, the program will display either VALID or NOT VALID.
*/

int main(void)
{
	int d,f1,f2,f3,f4,f5,s1,s2,s3,s4,s5,b1;
	printf("Enter the code : ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&f1,&f2,&f3,&f4,&f5,&s1,&s2,&s3,&s4,&s5,&b1);

	int a1,a2,check;
	a1 = d+f2+f4+s1+s3+s5;
	a2 = f1+f3+f5+s2+s4;
	check = 9 - (a1 * 3 + a2 -1)%10;	
	if (d==0 || d==2 || d==3 || d==5 || d==7){
		if (b1 == check){
			printf("VALID\n");
		}else{
			printf("NOT VALID\n");
		}	
	}else{
		printf("NOT VALID\n");
	}	
	return 0;
}
