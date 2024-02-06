#include "lists.h"
/**
 * free_listint - Function to free a linked list
 * @head: Head node of the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}

}
