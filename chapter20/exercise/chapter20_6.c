#include <stdio.h>

/*
(a) Use the bitwise operators to write the following function :
unsigned short swap_bytes(unsigned short i);
swap_bytes should return the number that results from swapping the two bytes in i.(Short integers occupy two bytes on most computers.) For example, if i has the value 0x1234(00010010 00110100 in binary), then swap_bytes should return 0x3412 (00110100 00010010 in binary). Test your function by writing a program that reads a number in hexadecimal, then writes the number with its bytes swapped :
Enter a hexadecimal number (up to four digits) : 1234
Number with bytes swapped : 3412
(b) Condense the swap_bytes function so that its body is a single statement.
*/

unsigned short swap_bytes(unsigned short i);

int main(void)
{
	unsigned short num;

	printf("Enter a hexadecimal number (up to four digits) : ");
	scanf("%hx", &num);
	
	printf("Number with bytes swapped : %.4hx\n", swap_bytes(num));
	return 0;
}

unsigned short swap_bytes(unsigned short i)
{
	return ((i << 8) | (i >> 8));
}
