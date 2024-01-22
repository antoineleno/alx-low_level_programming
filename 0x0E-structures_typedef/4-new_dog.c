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

	new_dog_ptr->name = _strdup(name);
	new_dog_ptr->owner = _strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
	}

	new_dog_ptr->age  = age;
	return (new_dog_ptr);
}
