// Program to do dynamic creation of a linked list
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
	struct Node* head = NULL;
	struct Node* tail = NULL;
	
	int numNodes;
	
	printf("Enter number of nodes to create\n");
	scanf("%d", &numNodes);
	
	for(int i=0; i< numNodes; i++)
	{
		struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
		
		printf("Enter the value of node %d \n", i+1);
		scanf("%d", &newNode->data);
		
		newNode->next = NULL;
		
		if (tail == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
	}
	
	printf("Values Entered in Nodes\n");
	printNodes(head);
	
	
	
	
	return 0;
}