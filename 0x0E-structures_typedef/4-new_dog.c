#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new instance of dog struct
 * @name: char* dog's name
 * @age: float age;
 * @owner: char* owner
 *
 * Return: dog_t *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, size_name = 0, size_owner = 0;
	dog_t *d = NULL;

	/* Allocate memory for dog_t struct */
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	/* Determine size of each member */
	while (name[size_name])
		size_name++;
	while (owner[size_owner])
		size_owner++;

	/* Allocate memory for each member */
	d->name = malloc(sizeof(char) * size_name);
	if (!d->name)
	{
		free(d);
		d = NULL;
		return (d);
	}
	d->owner = malloc(sizeof(char) * size_owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		d = NULL;
		return (d);
	}
	/* Assign values */
	for (i = 0; i < size_name; i++)
		d->name[i] = name[i];
	d->age = age;
	for (i = 0; i < size_owner; i++)
		d->owner[i] = owner[i];

	return (d);
}
