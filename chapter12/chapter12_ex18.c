#include <stdio.h>

/*
Write the evaluate_position function described in Ex 13 of chapter 9. Use pointer arithmetic to visit array elements. Use a single loop instead of nested loop.
*/

int evaluate_position(char board[8][8])
{
	char *p;
	int white = 0, black = 0;

	for (p = board; p < board + 64; p++)
	{
		switch(*p)
		{
		case 'Q':
			white += 9;
			break;
		case 'q':
			black += 9;
			break;
		case 'R':
			white += 5;
			break;
		case 'r':
			black += 5;
			break;
		case 'B':
			white += 3;
			break;
		case 'b':
			black += 3;
			break;
		case 'N':
			white += 3;
			break;
		case 'n':
			black += 3;
			break;
		case 'P':
			white += 3;
			break;
		case 'p':
			black += 3;
			break;
		default :
			break;
		}
	}
	return white - black;
}
