#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of dog
 * @d: pointer to a dog element
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
