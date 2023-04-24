#include <stdio.h>
#include <stddef.h>

/*
Write a program that declares the s strutcure (see Section 21.4) and prints the sizes and offsets of the a, b, and c members.(Use sizeof to find sizes; use offsetof to find offsets) Have the program print the size of the entire structure as well. From this information, determine whether or not the structure has any holes. If it does, describe the location and size of each.
*/

struct s {
	char a;
	int b[2];
	float c;
} s1;

int main(void)
{
	printf("Size of struct s : %ld\n", sizeof(struct s));
	printf("Size and offset of member a : %ld -- %ld\n", sizeof(s1.a), offsetof(struct s, a));
	printf("Size and offset of member b : %ld -- %ld\n", sizeof(s1.b), offsetof(struct s, b));
	printf("Size and offset of member c : %ld -- %ld\n", sizeof(s1.c), offsetof(struct s, c));

	return 0;
}
