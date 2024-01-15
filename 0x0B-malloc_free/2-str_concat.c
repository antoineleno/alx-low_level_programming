#include "main.h"

/**
 * str_concat - Function to concatenate two string and the return the result.
 * @s1: First string
 * @s2: Second string
 * Return: Concatenate string.
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int length_of_s1 = 0;
	unsigned int length_of_s2 = 0;
	char *buffer;
	unsigned int i, j;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	length_of_s1 = _strlen(s1);
	length_of_s2 = _strlen(s2);

	buffer = (char *)malloc((length_of_s1 + length_of_s2 + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length_of_s1; i++)
	{
		buffer[i] = s1[i];
	}

	for (j = length_of_s1; j < (length_of_s1 + length_of_s2); j++)
	{
		buffer[j] = s2[j - length_of_s1];
	}

	buffer[j] = '\0';

	return (buffer);
}

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





