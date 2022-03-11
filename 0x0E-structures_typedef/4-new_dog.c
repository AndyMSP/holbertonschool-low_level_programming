#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: pointer to char
 * @age: floating point integer
 * @owner: pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


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
/*
	printf("Name: %s\n", ptr->name);
	printf("Age: %f\n", ptr->age);
	printf("Owner: %s\n", ptr->owner);
*/
	return (ptr);

}
