#include "main.h"
/**
 * _strlen - Function to find the length of the string.
 * @string: String to find the length
 * Return: The length of the string
*/

unsigned int _strlen(char *string)
{
	unsigned int length = 0;

	if (string == NULL)
	{
		return(0);
	}

	while (*string != '\0')
	{
		length++;
		string++;
	}

	return (length);
}
