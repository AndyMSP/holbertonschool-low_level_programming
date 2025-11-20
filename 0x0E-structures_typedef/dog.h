#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data representing a dog
 * @name: char * dogs name
 * @age: float age of dog
 * @owner: char * owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
