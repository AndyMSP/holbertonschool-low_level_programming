#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains name, age and owner
 * @name: pointer to a char
 * @age: pointer to an int
 * @owner: pointer to a char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);

/*
 *	dog_t *new_dog(char *name, float age, char *owner);
 *	void free_dog(dog_t *d);
 */

#endif
