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

	_memset(array, 0, nmemb * size);

	return (array);
}

/**
 * _memset - Function like memset
 * @s: buffer
 * @b: character 
 * @n: number of character to set
 * Return: The set string.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
