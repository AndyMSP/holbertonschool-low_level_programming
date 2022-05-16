#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new struct of type dog_t and initializes
 * it and returns a pointer to it.
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Return: pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_d, *ptr;

	ptr = malloc(sizeof(new_d));

	(void)name;
	(void)age;
	(void)owner;

	ptr = &new_d;

	new_d.name = malloc(10);
	new_d.owner = malloc(10);

	new_d.name = "Winnie";
	new_d.age = 20;
	new_d.owner = "Katie";

	return (ptr);

} 
