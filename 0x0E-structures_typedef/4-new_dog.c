#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog struct
 * name: pointer to char
 * age: float
 * owner: pointer to char
 *
 * @Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t dog, *ptr;

	init_dog(&dog, name, age, owner);

	ptr = &dog;

/*	ptr = malloc(sizeof(dog));*/

	printf("Name: %s\n", ptr->name);
	printf("Age: %f\n", ptr->age);
	printf("Owner: %s\n", ptr->owner);

	return (ptr);

}
