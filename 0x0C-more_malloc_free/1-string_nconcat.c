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
	unsigned int lenght1, lenght2, i, j;
	char *dest_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		lenght1 = _strlen(s1);
		lenght2 = _strlen(s2);
	}

	if (n >= lenght2)
	{
		n = lenght2;
	}
	dest_string = malloc(lenght1 + n + 1);
	if (dest_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lenght1; i++)
	{
		dest_string[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		dest_string[i++] = s2[j];
	}
	dest_string[i++] = '\0';


	return (dest_string);
}
