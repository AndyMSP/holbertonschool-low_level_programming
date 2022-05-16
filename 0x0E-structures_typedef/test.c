#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog, new;

/*	my_dog = new_dog("Poppy", 3.5, "Bob");*/

	my_dog = &new;

	my_dog->name = "Winnie";
	my_dog->age = 10;
	my_dog->owner = "Katie";

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	return (0);
}
