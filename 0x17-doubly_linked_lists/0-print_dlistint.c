#include "lists.h"
/**
 * print_dlistint - Function to print elements of a doubly list
 * @h: pointer to head
 * Return: The number of node in a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_elements = 0;
	const dlistint_t *current = h;


	while (current != NULL)
	{
		printf("%d\n", current->n);
		number_elements++;
		current = current->next;
	}
	return (number_elements);
}

