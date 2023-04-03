#include <stdio.h>
#define MAX 100

/*
Ex6
RPN(Reverse Polish Notation)
1 + 2 * 3 -> 1 2 3 * +
Enter an RPN expression : 1 2 3 * + =
value of expression : 7
Enter an RPN expression : 5 8 * 4 9 - / =
value of expression : -8
Enter an RPN expression : q
*/

char expression[MAX] = {0};
int top = -1;

int main(void)
{
	void make_empty(void);
	void push(char c);
	char pop(void);
	bool is_empty(void);
	bool is_full(void);
	void stack_overflow(void);
	void stack_underflow(void);

	char rpn;

	while (1){
		printf("Enter an RPN expression : ");
		scanf(" %c", &ch);
		push(ch);

		switch(ch){
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
		}		
	}

	
	return 0;
}

void make_empty(void)
{
	top = -1;
}
void push(char c)
{
	if (is_full()){
		stack_overflow();
	}else{
		expression[++top] = c;
		return;	
	}	
}

char pop(void)
{
	if (is_empty()){
		stack_underflow();
	}else{
		return expression[top--];
	}
}

bool is_empty(void)
{
	return top < 0;
}

bool is_full(void)
{
	return top == MAX;
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
}

void stack_underflow(void)
{
	printf("Stack underflow\n");
}
