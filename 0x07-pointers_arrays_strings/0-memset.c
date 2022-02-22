#include "main.h"

/**
 * _memset - Fills n bytes of the memory area pointed to by s with constant b
 * @s: pointer to memory area
 * @b: a character
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
