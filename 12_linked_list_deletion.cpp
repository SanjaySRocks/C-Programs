// Program to do deletion in a linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

void printNodes(struct Node* ptr)
{
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

struct Node* deleteFirst(struct Node* head)
{
	struct Node* ptr = head;
	
	head = head->next;
	
	free(ptr);
	 	
	return head;
}

struct Node* deleteIndex(struct Node* head, int index)
{
	struct Node* p = head;
	struct Node* q = head->next;
	
	int i=0;
	while(i != index-1)
	{
		p = p->next;
		q = q->next;
		i++;
	}
	
	p->next = q->next;
	
	free(q);
	
	return head;
}

struct Node* deleteLast(struct Node* head)
{
	struct Node* p = head;
	struct Node* q = head->next;
	
	while(q->next != NULL)
	{
		p = p->next;
		q = q->next;	
	}
	
	p->next = NULL;
	
	free(q);
	
	return head;
	
}

struct Node* deleteAtValue(struct Node* head, int value)
{
	struct Node* p = head;
	struct Node* q = head->next;
	
	while(q->data != value && q->next != NULL)
	{
		p = p->next;
		q = q->next;
	}

	if(q->data == value)
	{
		p->next = q->next;
		free(q);
	}	
	
	
	return head;
}


int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	struct Node* fifth;
	
	head = (struct Node*) malloc(sizeof(struct Node));
	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node*) malloc(sizeof(struct Node));
	fourth = (struct Node*) malloc(sizeof(struct Node));
	fifth = (struct Node*) malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 10;
	second->next = third;
	
	third->data = 15;
	third->next = fourth;
	
	fourth->data = 17;
	fourth->next = fifth;
	
	fifth->data = 20;
	fifth->next = NULL;
	
	printf("Priniting Node:-\n");
	printNodes(head);
	
	
	printf("After deleting first Node:-\n");
	head = deleteFirst(head);
	printNodes(head);

		
	
	printf("After deleting index Node:-\n");
	head = deleteIndex(head, 2);
	printNodes(head);
	
	
	
	printf("After deleting last Node:-\n");
	head = deleteLast(head);
	printNodes(head);
	
	
	/*
	printf("After deleting at value Node:-\n");
	head = deleteAtValue(head, 17);
	printNodes(head);
	*/
	
	
	return 0;
}