#include "dog.h"

/**
 * init_dog - Function to initialize a structure
 * @d: structre to be initialize
 * @name: Element of the structure
 * @age: Element of the structure
 * @owner: Element of the structure
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name  = name;
	d->age   = age;
	d->owner = owner;
}
