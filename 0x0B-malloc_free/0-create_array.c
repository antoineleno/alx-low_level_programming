#include "main.h"

/**
 * create_array - Function to create an array.
 * @size: Size of the array
 * @c: character to fill the array.
 * Return: The array created.
*/

char *create_array(unsigned int size, char c)
{
	char *buffer = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	
	return (buffer);
}
