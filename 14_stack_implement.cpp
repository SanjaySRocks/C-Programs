// Program to implement stack
#include<stdio.h>
#include<stdlib.h>

struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack* ptr)
{
	if(ptr->top < 0)
		return 1;
	
	return 0;	
}

int isFull(struct stack* ptr)
{
	if(ptr->top == ptr->size-1)
		return 1;
	
	return 0;
}

int main()
{
	struct stack* s;
	s = (struct stack*) malloc(sizeof(struct stack));

	
	s->size = 5;
	s->top = -1;
	s->arr = (int *) malloc(s->size * sizeof(int));
	
	s->arr[0] = 2;
	s->top++;

	
	if(isFull(s))
		printf("Stack is Full\n");
	
	if(isEmpty(s))
		printf("Stack is Empty\n");
		
		
	free(s->arr);
	free(s);
	
	return 0;
}