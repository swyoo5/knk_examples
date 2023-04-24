#include <stdio.h>

/*
Ex1
The square2.c program of Section 6.3 will fail if i*i exceeds the maximum int  value. Run the program and determine the smallest value of n that causes failure. Try changing the type of i to short and running the program again. Then try long. From these experiments, what can you conclude about the number of bits used to store integer types on your machine?
*/

int main(void)
{
	int n = 20;
	long i = 1;
	
	/*		
	for (;i<=n;i++)
		printf("%hd\t%hd\n",i,i*i);
	*/
	while (i*i > 0){
		printf("%10ld\t%10ld\n",i,i*i);
		i++; 	
	}
	return 0;
}
