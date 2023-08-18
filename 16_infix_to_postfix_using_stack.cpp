// Program to convert infix to postfix using stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
	int size;
	int top;
	char *arr;
};

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int isEmpty(struct stack* ptr)
{
	if(ptr->top == -1)
		return 1;
	
	return 0;	
}

int isFull(struct stack* ptr)
{
	if(ptr->top == ptr->size-1)
		return 1;
	
	return 0;
}

void Push(struct stack* ptr, char value)
{
	if(isFull(ptr))
	{
		printf("Stack is Overflow! cannot add elements\n");
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = value;
	
		//printf("Value Pushed to Stack - %c\n", ptr->arr[ptr->top]);
	}
}

char Pop(struct stack* ptr)
{
	if(isEmpty(ptr))
	{
		printf("Stack is Underflow! cannot pop from empty stack!\n");
		return -1;
	}
	else{
		char val = ptr->arr[ptr->top];
		ptr->top--;
		
		//printf("Value Popped from stack! - %c\n", val);
		return val;
	}
}


int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}

int precedence(char ch)
{
	if(ch == '*' || ch == '/')
		return 3;
	else if(ch == '+' || ch == '-')
		return 2;
	else
		return 0;
}


char* infixToPostfix(char* infix)
{
	struct stack* s = (struct stack*) malloc(sizeof(struct stack));
	s->size = 10;
	s->top = -1;
	s->arr = (char *) malloc(s->size * sizeof(char));

	char* postfix = (char* ) malloc((strlen(infix)+1) * sizeof(char));
	
	int i=0; // infix scanner
	int j=0; // postfix counter
	
	while(infix[i] != '\0')
	{
		if(!isOperator(infix[i]))
		{
			postfix[j] = infix[i];
			i++;
			j++;
		}
		else
		{
			if(precedence(infix[i]) > precedence(stackTop(s)))
			{
				Push(s, infix[i]);
				i++;
			}
			else
			{
				postfix[j] = Pop(s);
				j++;
			}
		}
	}
	
	while(!isEmpty(s))
	{
		postfix[j] = Pop(s);
		j++;
	}
	
	postfix[j] = '\0';
	
	free(s); // free s
	
	return postfix;
	
}


int main()
{
	char *infix = (char*) malloc(sizeof(char));
	
	printf("Enter infix expression:\n");
	gets(infix);
	
	printf("Infix - %s\n", infix);
	printf("Postfix - %s\n", infixToPostfix(infix));
	
	free(infix); // free infix
	
	return 0;
}