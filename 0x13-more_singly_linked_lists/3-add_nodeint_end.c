#include "lists.h"

/**
 * add_nodeint_end - Function to add a node at the end of the list
 * @head: Head of the node
 * @n: Elemeent to add
 * Return: the node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;


	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
