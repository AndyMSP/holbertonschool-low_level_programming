#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate n bytes of src onto dest
 * @dest: final string
 * @src: string to add to dest
 * @n: int number of bytes from src to add
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
