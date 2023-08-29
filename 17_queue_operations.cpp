// Program to perform queue operations like enqueue, dequeue and display
#include<stdio.h>
#include<stdlib.h>


struct Queue{
	int size;
	int *arr;
	int front;
	int rear;
};

void Enqueue(struct Queue* q, int n)
{
	if(q->rear == q->size -1)
	{
		printf("Queue is Full! Overflow!\n");
	}else
	{
		if(q->front == -1) q->front = 0;
		
		q->rear++;
		
		q->arr[q->rear] = n;
	
		printf("Inserted Element - %d\n", n);
		
	}	
}

void Dequeue(struct Queue* q)
{
	if(q->front == -1 || q->front > q->rear)
	{
		printf("Queue is Empty! Underflow!\n");
	}else
	{
		printf("Element Deleted - %d\n", q->arr[q->front]);
		q->front++;
	}
}

void display(struct Queue* q)
{
	if(q->rear == -1)
	{
		printf("No Element Found to Print!\n");
	}
	else
	{
		for(int i=q->front; i<=q->rear; i++)
			printf("%d\t", *(q->arr + i));
		
		printf("\n");		
	}

}

int main()
{
	struct Queue* q;
	
	q = (struct Queue*) malloc(sizeof(struct Queue));
	
	q->size = 10;
	q->front = -1;
	q->rear = -1;
	
	q->arr = (int *) malloc(q->size * sizeof(int));
	
	Enqueue(q, 20);
	Enqueue(q, 30);
	Enqueue(q, 40);
	Enqueue(q, 50);
	Enqueue(q, 40);
	
	display(q);
	
	Dequeue(q);
	
	Dequeue(q);
	Dequeue(q);
	Dequeue(q);
	Dequeue(q);
	Dequeue(q);
	
	display(q);
	
	return 0;	
}
