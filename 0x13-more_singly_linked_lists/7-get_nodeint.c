#include "lists.h"

/**
 * get_nodeint_at_index - Function to get the index of the node
 * @head: Head of the node
 * @index: Index of the node to search
 * Return: The node at index index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int node_index = 0;

	while (current != NULL)
	{
		if (index == node_index)
		{
			return (current);
		}
		current = current->next;
		node_index++;
	}
	return (NULL);
}

