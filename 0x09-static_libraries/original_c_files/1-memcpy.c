#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy n bytes from src to dst
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
