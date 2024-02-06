#include "lists.h"
/**
 * delete_nodeint_at_index - Function to delecte a note at index n.
 * @head: Head of the list
 * @index: Index to delecte the node
 * Return: 1 if successful otherwise -1 if it feailed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (-1);
	}
	
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL ||  current->next == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
