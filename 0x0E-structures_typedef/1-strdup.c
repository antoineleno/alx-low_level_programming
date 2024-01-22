#include "dog.h"

/**
 * _strdup - Function to duplicate a string?
 * @str: String to be duplicate
 * Return: The duplicate string.
*/

char *_strdup(char *str)
{
	unsigned int length_of_str = 0, i;
	char *new_str = str;
	char *buffer;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*new_str != '\0')
	{
		length_of_str++;
		new_str++;
	}


	buffer = (char *)malloc((length_of_str + 1) * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_of_str; i++)
	{
		buffer[i] = str[i];
	}

	buffer[i] = '\0';

	return (buffer);
}
