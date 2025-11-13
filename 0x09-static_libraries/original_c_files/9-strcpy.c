#include "main.h"

/**
 * _strcpy - copy a string to dest
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
