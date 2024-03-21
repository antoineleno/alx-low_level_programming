#include "lists.h"
/**
 * dlistint_len - Function that return the number of elements
 * @h: head node
 * Return: the number of node in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		number_of_elements++;
		current = current->next;
	}
	return (number_of_elements);
}


