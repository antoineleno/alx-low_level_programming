#include "lists.h"
/**
 * list_len - Function that return the number of elements in the list.
 * @h: Data type
 * Return: The number of element in the linked list_t.
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
