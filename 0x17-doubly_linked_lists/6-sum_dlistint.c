#include "lists.h"
/**
 * sum_dlistint - Function to add all elements of the lists
 * @head: head of the list
 * Return: The sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

