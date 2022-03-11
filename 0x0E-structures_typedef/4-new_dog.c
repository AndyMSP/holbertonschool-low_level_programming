#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog struct and pointer to it
 * @name: pointer to char
 * @age: floating point integer
 * @owner: pointer to char
 *
 * Return: pointer to initialized dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t ndog, *ptr;
	char *name_copy, *owner_copy;

	name_copy = malloc(sizeof(char) * (strlen(name) + 1);
	owner_copy = malloc(sizeof(char) * (strlen(owner) + 1);

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	ndog.name = name_copy;
	ndog.age = age;
	ndog.owner = owner_copy;

	ptr = &ndog;

	return (ptr);
}
