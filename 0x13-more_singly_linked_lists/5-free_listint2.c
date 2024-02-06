#include "lists.h"
/**
 * free_listint2 - Function to free a linked list
 * @head: Head of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (*head == NULL || head == NULL )
	{
		return;
	}
	current = *head;
	while (*head != NULL)
	{
		temp = current->next;
		free(current);
	}
	*head = NULL;
}

