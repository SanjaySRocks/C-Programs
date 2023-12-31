// Program to perform queue operations like enqueue, dequeue and display
// Limitation once the queue is full even after you delete the elements you wont get queue empty it will show full
#include<stdio.h>
#include<stdlib.h>


struct Queue{
	int size;
	int *arr;
	int front;
	int rear;
};

int isEmpty(struct Queue *q){
    if(q->rear == q->front){
        return 1;
    }
    return 0;
}

int isFull(struct Queue *q)
{
	if(q->rear == q->size-1)
		return 1;
	
	return 0;
}

void Enqueue(struct Queue* q, int n)
{
	if(isFull(q))
	{
		printf("Queue is Full! Overflow!\n");
	}else
	{
		if(q->front == -1) q->front = 0;
		
		q->rear++;
		
		q->arr[q->rear] = n;
	
		printf("Element Inserted - %d\n", n);
		
	}	
}

void Dequeue(struct Queue* q)
{
	if(isEmpty(q))
	{
		printf("Queue is Empty! Underflow!\n");
	}else
	{
		printf("Element Deleted - %d\n", q->arr[q->front]);
		q->front++;
		
		if(q->front > q->rear)
			q->front = q->rear = -1
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
			printf("%d ", *(q->arr + i));
  		printf("\n");		
	}

}

int main()
{
	struct Queue* q;
	
	q = (struct Queue*) malloc(sizeof(struct Queue));
	
	q->size = 5;
	q->front = -1;
	q->rear = -1;
	
	q->arr = (int *) malloc(q->size * sizeof(int));
	
	/*while(1)
	{
		printf("Choose Options\n");
		printf("1. Show Elements \n2. Insert Elements \n3. Delete Elements \n4. Exit\n");
		
		int a;
		scanf("%d", &a);
		
		switch(a)
		{
			case 1:{
				display(q);
				break;
			}
			
			case 2:{
				printf("Enter the elements:\n");
				int n;
				scanf("%d", &n);
				Enqueue(q, n);
				
				display(q);
				
				break;
			}
			
			case 3:{
				Dequeue(q);
				display(q);
				
				break;
			}
			case 4: exit(0);
			default: {
				printf("Invalid Choice\n");
				break;
			}
		}
	}*/
	
	Enqueue(q, 20);
	Enqueue(q, 30);
	Enqueue(q, 40);
	Enqueue(q, 50);
	Enqueue(q, 60);
	
	display(q);
	
	Dequeue(q);
	
	Enqueue(q, 70);
	
	display(q);
	
	return 0;	
}
