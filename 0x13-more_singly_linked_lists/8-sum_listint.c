#include "lists.h"
/**
 * sum_listint - Function to sum the element of the list
 * @head: head of the list
 * Return: the sum of all data else return 0
*/

int sum_listint(listint_t *head)
{
	listint_t *current = head;
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

