#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: pointer to dog struct
 * @name: char * dog's name
 * @age: float age of dog
 * @owner: char * owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
