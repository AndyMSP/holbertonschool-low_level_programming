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

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	dest[i + 1] = '\0';

	printf("%d %d %d\n", i, src[i], dest[i]);

	return (dest);
}
