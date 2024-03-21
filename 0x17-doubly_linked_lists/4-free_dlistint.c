#include "lists.h"
/**
 * free_dlistint - Function to free a list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		free(head);
	}

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}


