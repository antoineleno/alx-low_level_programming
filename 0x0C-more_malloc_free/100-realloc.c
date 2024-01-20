#include "main.h"

/**
 * _realloc - Function to realloc memory after allocating it with mallocc
 * @old_size: First size while using malloc
 * @new_size: Second size to realloc memory
 * Return: No value to be return.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	{
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	if (old_size < new_size)
	{
		memcpy(new_ptr, ptr, new_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}
	free(ptr);
	return (new_ptr);
}
