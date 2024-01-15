#include "main.h"
/**
 * argstostr - Function to  concatenate all the arguments
 * @ac: Number of argument passed
 * @av: Arguments passed
 * Return: Concatenate string.
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, total_length = 0;
	char *concatenate_string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av != NULL)
		{
			total_length += _strlen(av[i]) + 1; 
		}
	}

	concatenate_string = (char *)malloc(total_length * sizeof(char));

	if (concatenate_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av != NULL)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				concatenate_string[k++] = av[i][j];
			}
			concatenate_string[k++] = '\n';
		}
	}
	concatenate_string[k] = '\0';
	return (concatenate_string);
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
