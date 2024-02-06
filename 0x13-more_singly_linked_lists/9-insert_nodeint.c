#include "lists.h"
/**
 * insert_nodeint_at_index - Function to insert a node at position n.
 * @head: Head of the node
 * @idx: Index to insert the node
 * @n: Element to insert
 * Return: The address of the newnode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;

	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
