#include "dog.h"
/**
 * print_dog - Function to print a structure
 * @d: argument of the structure
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name) != NULL ? (d->name) : "(nill)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) != NULL ? (d->name) : "(nill)");
}
