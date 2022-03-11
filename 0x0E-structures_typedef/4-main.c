#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Andy", 3.5, "Bob");

	printf("Name: %s + 1\n", my_dog->name);
/*	printf("Age: %f\n", my_dog->age);
	printf("Owner: %s\n", my_dog->owner);
*/
	printf("Name again: %s\n", my_dog->name);

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	return (0);
}
