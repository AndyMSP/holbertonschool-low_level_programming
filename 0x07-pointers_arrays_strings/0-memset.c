#include "main.h"
#include <stdio.h>

/**
 * _memset - set n bytes to b in s
 * @s: string to be modified
 * @b: byte to write into s
 * @n: number of bytes to write to
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
