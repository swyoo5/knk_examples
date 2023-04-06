#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_MAX 100

/*
Ex1
Modify the stack example of Section 10.2 so that it stores characters instead of integers. Next, add a main function that asks the user to enter a series of parenthesis and/or braces, then indicates wheter or not they're properly nested:
Enter parenthesis and/or braces : ((){}{()})
Parenthesis/braces are nested properly
*/

int stack[STACK_MAX];
int top = -1;

void make_empty(void);
void push(char item);
char pop(void);
bool is_empty(void);
bool is_full(void);
void stack_overflow(void);
void stack_underflow(void);	

int main(void)
{
	int i;
	char parentheses;

	printf("Enter parentheses and/or braces : ");

	while ((parentheses = getchar()) != '\n'){
		if (parentheses == '}' && pop() != '{'){
			printf("Parentheses/braces are not nested properly\n");
			return 0;
		}else if (parentheses == ')' && pop() != '('){
			printf("Parentheses/braces are not nested properly\n");
			return 0;
		}else if (parentheses == '(' || parentheses == '{'){
			push(parentheses);
		}
	}	
	
	if (is_empty()){
		printf("Parentheses/braces are nested properly.\n");	
	}else if (!is_empty()){			//stack에 여는 괄호가 더 많은 경우
		printf("Parentheses/braces are not nested properly.\n");
	}	
	return 0;
}

void make_empty(void)
{
	top = 0;
}

void push(char item)
{
	if (is_full()){
		stack_overflow();	
		return;
	}else{
		stack[++top] = item;
		return;
	}	
}

char pop(void)
{
	if (is_empty()){
		stack_underflow();
		return 0;
	}else{
		return stack[top--];	
	}
}

bool is_empty(void)
{
	return top < 0;
}

bool is_full(void)
{
	return top == STACK_MAX;
}

void stack_overflow(void)
{
	printf("Stack overflow");
	exit(EXIT_FAILURE); 
}

void stack_underflow(void)
{
	printf("Stack underflow");
	exit(EXIT_FAILURE);
}
