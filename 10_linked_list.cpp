// Program to create a linked list and print
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
	
	
	printNodes(head);
	
	return 0;
}