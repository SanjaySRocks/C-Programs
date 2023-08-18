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

void Push(struct stack* ptr, int value)
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

int Pop(struct stack* ptr)
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
	Push(s, 5);
	Push(s, 10);
	Push(s, 22);
	Push(s, 25);
	Push(s, 40);
	
	// Pop top most element
	Pop(s);
	
	printf("Total Elements in Stack After Pop - %d \n", s->top+1);
	
	free(s->arr);
	free(s);
	
	return 0;
}