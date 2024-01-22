#include "dog.h"
/**
 * new_dog - Function to create a new dog.
 * @name: argument of the structure
 * @age: Argument of the structure
 * @owner: Argument of the structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
	}

	new_dog_ptr->age  = age;
	return (new_dog_ptr);
}


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
