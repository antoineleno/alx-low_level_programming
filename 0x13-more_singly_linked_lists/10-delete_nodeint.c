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
	listint_t *current;
	unsigned int i;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
