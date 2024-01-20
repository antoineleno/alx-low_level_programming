#include "main.h"
/**
 * _realloc - Function to realloc memory after allocating it with mallocc
 * @old_size: First size while using malloc
 * @new_size: Second size to realloc memory
 * @ptr: pointer to the allocated memory
 * Return: The new_allocated
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
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
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	free(ptr);
	return (new_ptr);
}
