#include <stdio.h>

/*
Write a program that asks the user for a two digit number, then prints the English word for the number:
Enter a two digit number : 45
You entered the number forty-five.
*/

int main(void)
{
	int num, ten_digit, one_digit;	

	printf("Enter a two digit number : ");
	scanf("%d", &num);

	ten_digit = num / 10;
	one_digit = num % 10;

	if (num == 10){
		printf("ten\n");	
	}else if (num == 11){
		printf("eleven\n");
	}else if (num == 12){
		printf("twelve\n");	
	}else if (num == 13){
		printf("thirteen\n");
	}else if (num == 14){
		printf("fourteen\n");
	}else if (num == 15){
		printf("fifteen\n");
	}else if (num == 16){
		printf("sixteen\n");
	}else if (num == 17){
		printf("seventeen\n");
	}else if (num == 18){
		printf("eighteen\n");
	}else if (num == 19){
		printf("nineteen\n");
	}		
	
	
	switch(ten_digit)
	{
	case 2 :
		printf("twenty");
		break;

	case 3 :
		printf("thirty");
		break;

	case 4 :
		printf("forty");
		break;

	case 5 :
		printf("fifty");
		break;

 	case 6 :
		printf("sixty");
		break;

	case 7 :
		printf("seventy");
		break;

	case 8 :
		printf("eighty");
		break;

	case 9 :
		printf("ninety");
		break;
	default :
		break;
	}	


	if (ten_digit != 1){
		printf("-");
		switch(one_digit)
		{
		case 1 :
			printf("one\n");
			break;
	
		case 2 :
			printf("two\n");
			break;

		case 3 :
			printf("three\n");
			break;
	
		case 4 :
			printf("four\n");
			break;
	
		case 5 :
			printf("five\n");
			break;
	
		case 6 :
			printf("six\n");
			break;
	
		case 7 :
			printf("seven\n");
			break;
	
		case 8 :
			printf("eight\n");
			break;
	
		case 9 :
			printf("nine\n");
			break;
	
		case 0 :
			printf("\n");
			break;
		}
	}
	return 0;
}
