#include "dog.h"
/**
 * free_dog - Function to free a structure
 * @d: structure to be free
*/

void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}

free(d->name);
free(d->owner);
free(d);
}
