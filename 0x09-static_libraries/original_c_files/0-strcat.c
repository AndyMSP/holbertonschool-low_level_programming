#include "main.h"

/**
 * _strcat - concatentate src to dest
 * @dest: pointer to char (destination string)
 * @src: pointer to char (string to be added to dest)
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
