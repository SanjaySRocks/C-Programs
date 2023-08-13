// Program to do insertion in a linked list
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

struct Node* insertFirst(struct Node* head, int data)
{
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	
	newNode->next = head;
	newNode->data = data;
	
	return newNode;
}

struct Node* insertAtIndex(struct Node* head, int data, int pos)
{
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	struct Node* temp = head;
	
	newNode->data = data;
	
	int i=0;
	
	while(i != pos-1)
	{
		temp = temp->next;	
		i++;
	}
	
	newNode->next = temp->next;
	temp->next = newNode;
	
	return head;
}

struct Node* insertAtEnd(struct Node* head, int data)
{
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	struct Node* temp = head;
	
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	
	temp->next = newNode;
	
	newNode->data = data;
	newNode->next = NULL;
	
	return head;	
}

struct Node* insertAfterNode(struct Node* head, struct Node* ptrNode, int data)
{
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = data;
	
	newNode->next = ptrNode->next;
	ptrNode->next = newNode;
	
	return head;
}

int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	
	head = (struct Node*) malloc(sizeof(struct Node));
	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node*) malloc(sizeof(struct Node));
	
	head->data = 5;
	head->next = second;
	
	second->data = 10;
	second->next = third;
	
	third->data = 15;
	third->next = NULL;
	
	printf("Priniting Node:-\n");
	printNodes(head);
	
	printf("After Insert at first of node:-\n");
	head = insertFirst(head, 1);
	printNodes(head);
	
	
	printf("After Insert at index of node:-\n");
	head = insertAtIndex(head, 7, 2);
	printNodes(head);
	
	printf("After Insert at the end of node:-\n");
	head = insertAtEnd(head, 99);
	printNodes(head);
	
	
	printf("After Insert at node -\n");
	head = insertAfterNode(head, second, 11);
	printNodes(head);
	
	
	return 0;
}