#include <stdio.h>

/*
Ex10
Using switch statement, write a program that converts a numerical grade into a letter grade:
Enter numerical grade : 84
Letter grade : B
Use the following grading scale : A=90-100, B=80-89, C=70-79, D=60-69, F=0-59.
Print an error message if the grade is larger than 100 or less than 0.
*/

int main(void)
{
	int grade;
	printf("Enter numerical grade : ");
	scanf("%d",&grade);
	
	if (grade < 0 || grade > 100){
		printf("illegal grade\n");
		return 0;
	}	
	switch (grade/10){
	case 10:
	case 9 :printf("A\n");
		break;
	case 8 : printf("B\n");
		break;
	case 7 : printf("C\n");
		break;
	case 6 : printf("D\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: printf("F\n");
		break;
	}
	

	return 0;
}
