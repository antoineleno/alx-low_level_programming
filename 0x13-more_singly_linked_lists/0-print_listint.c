#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function to print all the elements of a listint_t list
 * @h: The list to be printed
 * Return: The number of node in the lists
*/

size_t print_listint(const listint_t *h)
{
	size_t number_of_node = 0;

	while (h)
	{
		printf("%d ", h->n);
		number_of_node++;
		h = h->next;
	}

	return (number_of_node);
}
