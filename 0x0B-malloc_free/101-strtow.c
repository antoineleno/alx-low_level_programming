#include"main.h"
#include <stdio.h>
/**
 * strtow - Function that split a string into words
 * @str: String to be split
 * Return: The split string.
*/


char **strtow(char *str)
{
	int i, wordIndex = 0, numberWords = word_count(str);
	char *token;
	char **ArrayofWords;
	char *copy_of_string = _strdup(str);

	if (numberWords == 0 || *copy_of_string == '\0')
	{
		free(copy_of_string);
		return (NULL);
	}
	ArrayofWords = (char **)malloc((numberWords + 1) * sizeof(char *));

	if (ArrayofWords == NULL)
	{
		free(copy_of_string);
		return (NULL);
	}
	token = strtok(copy_of_string, " \t\n");
	while (token != NULL)
	{
	ArrayofWords[wordIndex] = (char *)malloc((_strlen(token)) * sizeof(char));
		if (ArrayofWords[wordIndex] == NULL)
		{
			free(copy_of_string);
			for (size_t i = 0; i < wordIndex; i++)
			{
				free(ArrayofWords[i]);
			}
			free(ArrayofWords);
		}
		_strcpy(ArrayofWords[wordIndex], token);
		wordIndex++;
		token = strtok(NULL, " \t\n");
	}
	free(copy_of_string);
	return (ArrayofWords);
}


/**
 * word_count - Function to count the number of words in the string.
 * @s: Argument of the function
 * Return: The number of words
*/

int word_count(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
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


	return (destination);
}

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

#include "main.h"

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

