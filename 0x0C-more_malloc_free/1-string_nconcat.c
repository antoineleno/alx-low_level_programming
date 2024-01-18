#include "main.h"

/**
 * string_nconcat - Function to concatenate n character
 * @s1: First string
 * @s2: Second string
 * @n: The number of character to be concatenate
 * Return: concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, i, j = 0;
	char *dest_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (_strlen(s2) < n)
	{
		m = _strlen(s1) + _strlen(s2);
	}
	else
	{
		m = _strlen(s1) + n;
	}
	dest_string = malloc((m + 1) * sizeof(char));
	if (dest_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		dest_string[i] = s1[i];
	}

	while (j < n && *s2 != '\0')
	{
		dest_string[i] = s2[j];
		j++;
		i++;
	}
	dest_string[i] = '\0';

	return (dest_string);
}
