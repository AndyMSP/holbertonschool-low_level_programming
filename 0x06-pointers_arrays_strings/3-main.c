#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp("12", "123"));
	printf("%d\n", _strcmp("", "1"));
	printf("%d\n", _strcmp("1", ""));
	printf("%d\n", _strcmp(s1, s2));
	return (0);
}
