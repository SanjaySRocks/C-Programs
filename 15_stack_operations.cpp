// Program to perform operations on stack
#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

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

void stackPush(struct stack* ptr, int value)
{
	if(isFull(ptr))
	{
		printf("Stack is Overflow! cannot add elements\n");
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top] = value;
	
		printf("Value Pushed to Stack - %d\n", ptr->arr[ptr->top]);
	}
}

int stackPop(struct stack* ptr)
{
	if(isEmpty(ptr))
	{
		printf("Stack is Underflow! cannot pop from empty stack!\n");
		return -1;
	}
	else{
		int val = ptr->arr[ptr->top];
		ptr->top--;
		
		printf("Value Popped from stack! - %d\n", val);
		return val;
	}
}

int main()
{
	struct stack* s;
	s = (struct stack*) malloc(sizeof(struct stack));

	
	s->size = 5;
	s->top = -1;
	s->arr = (int *) malloc(s->size * sizeof(int));

	printf("Total Elements in Stack - %d \n", s->top+1);
	   
	// Push value 
	stackPush(s, 5);
	stackPush(s, 10);
	stackPush(s, 22);
	stackPush(s, 25);
	stackPush(s, 40);
	
	// Pop top most element
	stackPop(s);
	
	printf("Total Elements in Stack After Pop - %d \n", s->top+1);
	
	free(s->arr);
	free(s);
	
	return 0;
}