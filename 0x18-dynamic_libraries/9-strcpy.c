#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy source string to destination string
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
