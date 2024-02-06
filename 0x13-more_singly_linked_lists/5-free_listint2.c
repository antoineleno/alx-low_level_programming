#include "lists.h"
/**
 * free_listint2 - Function to free a linked list
 * @head: Head of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		free(head);
	}

	if (*head == NULL)
	{
		free(*head);
	}

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}

