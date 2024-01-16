#include "main.h"

/**
 * strtow - Function that split a string into words
 * @str: String to be split
 * Return: The split string.
*/


char **strtow(char *str)
{
	int i, j, wordIndex = 0, numberWords = word_count(str);
	char *token;
	char *copy_of_string = _strdup(str);

	if (numberWords == 0 || *copy_of_string == '\0')
	{
		free(copy_of_string);
		return (NULL);
	}
	char **ArrayofWords = (char **)malloc((numberWords + 1) * sizeof(char *));

	if (ArrayofWords == NULL)
	{
		free(copy_of_string);
		return (NULL);
	}
	token = _strtok(copy_of_string, " \t\n");
	while (token != NULL)
	{
		ArrayofWords[wordIndex] = (char *)malloc((_strlen(token) + 1) * sizeof(char));
		if (ArrayofWords[wordIndex] == NULL)
		{
			free(copy_of_string);
			for (i  = 0; i < wordIndex; i++)
			{
				free(ArrayofWords[i]);
			}
			free(ArrayofWords);
		}
		_strcpy(ArrayofWords[wordIndex], token);
		wordIndex++;
		token = _strtok(NULL, "\t\n");
	}
	free(copy_of_string);
	ArrayofWords[wordIndex] = NULL;
	return (ArrayofWords);
}


/**
 * word_count - Function to count the number of words in the string.
 * @string: Argument of the function
 * Return: The number of words
*/

int word_count(char *string)
{
	int count = 0;

	if (*string == '\t' || *string == ' ' || *string == '\n')
	{
		string++;
	}

	while (*string != '\0')
	{
		if (*string == '\t' || *string == ' ' || *string == '\n')
		{
			count++;
			while (*string == '\t' || *string == ' ' || *string == '\n')
			{
				string++;
			}
			if (*string == '\0')
			{
				break;
			}
		}
		else
		{
			string++;
		}
	}
	return (count);
}

/**
 * _strcpy - Function to copy n characters of a string.
 * @destination: Destination string
 * @source: String to copy
 * Return: The destination stringqs.
*/

char *_strcpy(char *destination, char *source)
{
	int i = 0, j = 0;

	while (source[j] != '\0')
	{
		destination[i] = source[j];
		i++;
		j++;
	}

	destination[i] = '\0';

	return (destination);
}

