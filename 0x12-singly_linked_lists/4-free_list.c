#include "lists.h"
/**
 * free_list - Function to free a linked list
 * @head: Head of the list
*/

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

