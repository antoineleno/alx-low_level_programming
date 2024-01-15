#include "main.h"

/**
 * _strlen - Function to find the length of a string.
 * @str: String to find its length.
 * Return: The length of the string.
*/

int _strlen(const char *str)
{
	unsigned int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
