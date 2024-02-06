#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}antoine;

int main(void)
{
	// Node definition 
	antoine *one = NULL;
	antoine *Two = NULL;
	antoine *Three = NULL;
	antoine *head = NULL;

	// Memory allocation for the node
	one = malloc(sizeof(struct node));
	Two = malloc(sizeof(struct node));
	Three = malloc(sizeof(struct node));
	head = malloc(sizeof(struct node));

	// Asigne value to the node
	one->data = 1;
	Two->data = 2;
	Three->data = 3;

	// connect node
	one->next = Two;
	Two->next = Three;
	Three->next = NULL;

	// Connect the address of the first node to one 
	head = one;

	// Declare a temploraire node for printing

	struct node *current = head;
	
	

	while (current != NULL)
	{
		printf("%d - ", current->data);
		current = current->next;
	}

	//free(head);
	free(one);
	free(Two);
	free(Three);
	printf("\n");

	return (0);
}
