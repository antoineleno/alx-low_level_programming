#include "lists.h"
/**
 * add_node - Function to add node at the beginning
 * @head: Head of the node
 * @str: String to be add
 * Return: The address of the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(struct list_s));

	if (str == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
