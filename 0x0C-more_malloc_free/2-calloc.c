#include "main.h"

/**
 * _calloc - Function to allocate memory
 * @nmemb: elements
 * @size: Size of the array
 * Return: The memory allocated/
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
