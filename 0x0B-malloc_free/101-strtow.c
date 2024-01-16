#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * strtow - Function that split a string into words
 * @str: String to be split
 * Return: The split string.
*/


char **strtow(char *str)
{
	char **result;
	
	
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
		}
		else
		{
			string++;
		}
	}
	return (count);
}
