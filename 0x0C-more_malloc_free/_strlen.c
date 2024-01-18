#include "main.h"

/**
 * _strlen - Function to calculate the length of a string.
 * @string: String to calculate the length
 * Return: The lenght of the string
*/

unsigned int _strlen(char *string)
{
	unsigned int lenght = 0;

	while (*string != '\0')
	{
		lenght++;
		string++;
	}

	return (lenght);
}
