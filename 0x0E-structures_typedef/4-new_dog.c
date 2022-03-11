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

	ndog.name = name;
	ndog.age = age;
	ndog.owner = owner;

	ptr = &ndog;

	return (ptr);
	
}
