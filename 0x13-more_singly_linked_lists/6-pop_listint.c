#include "lists.h"
/**
 * pop_listint - Function to delete the head node of a listint_t
 * @head: Head node
 * Return: 0 if the linked list is emplty
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		temp = *head;
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}

	else
	{
		return (0);
	}

	return (data);
}

