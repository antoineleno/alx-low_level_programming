#include "main.h"

/**
 * malloc_checked - Function to allocate memory
 * @b: Number of byteto allocate
 * Return: The allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
