#include "lists.h"
/**
 * listint_len - Function to return the element in a linked list
 * @h: Declared linked list to access elements of the lists
 * Return: The number of elements in a linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t number_of_element = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_element++;
	}

	return (number_of_element);
}
