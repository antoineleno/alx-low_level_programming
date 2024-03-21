#include "lists.h"
/**
 * insert_dnodeint_at_index - Function to insert node at index
 * @h: head of the node
 * @idx: index to insert the node
 * @n: value to be insert
 * Return: The address of the new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	unsigned int i;


	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
    	current = current->next;
	}


	if (i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}

