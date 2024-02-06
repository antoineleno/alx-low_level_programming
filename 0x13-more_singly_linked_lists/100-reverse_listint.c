#include "lists.h"
/**
 * reverse_listint - Function to reserve a list
 * @head: head of the list
 * Return: The reverse list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_or_head = NULL;
	listint_t *next;

	while (head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev_or_head;
		prev_or_head = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
