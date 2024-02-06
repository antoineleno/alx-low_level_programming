#include "lists.h"

/**
 * add_nodeint - Function to add an node in a linked list
 * @head: head of the node
 * @n: Element to be add.
 * Return: The address of the new element, or null if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}


	new_node->n = n;

	if (head == NULL)
	{
		new_node = *head;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
