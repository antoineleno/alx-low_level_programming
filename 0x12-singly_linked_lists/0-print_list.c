#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_list - Function to print the elements of the linked list
 * @h: Node
 * Return: The number of node
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)");
		}
		else
		{
			printf("[%lu] %s", strlen(h->str), h->str);
		}
		count++;
		h = h->next;
		printf("\n");
	}
	return (count);
}
