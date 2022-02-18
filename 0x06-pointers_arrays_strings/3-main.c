#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Expect The Best. Prepare For The Worst. Capitalize On What Comes. Hello World! Hello-world 0123456hello World Hello World.Hello World Expect The Best. Prepare For The Worst. Capitalize On What Comes. Hello World! Hello-world 0123456hello World Hello World.Hello World";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
