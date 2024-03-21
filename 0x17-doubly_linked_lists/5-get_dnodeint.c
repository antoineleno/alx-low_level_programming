#include "lists.h"
/**
 * get_dnodeint_at_index - function to get a node at index
 * @head: head of the node
 * @index: index of the node
 * Return: the address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
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



