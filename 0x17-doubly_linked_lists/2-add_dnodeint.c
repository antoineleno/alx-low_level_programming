#include "lists.h"

/**
 * add_dnodeint - function to add a node at the beginning
 * of a doubly linked list
 * @head: pointer to the head of the list
 * @n: value to be inserted in the new node
 * Return: The address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}



