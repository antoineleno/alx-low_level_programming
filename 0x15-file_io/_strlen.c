#include "main.h"
/**
 * _strlen - Function to find the length of the string
 * @string: String of the string
 * Return: the lenght of the string
*/

int _strlen(char *string)
{
	int lenght = 0;

	if (string == NULL)
	{
		return (0);
	}

	while (*string != '\0')
	{
		lenght++;
		string++;
	}

	return (lenght);
}
