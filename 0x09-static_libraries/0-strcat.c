#include "main.h"
#include <stdio.h>

/**
 *_strcat - Concatenates src to dest
 *@dest: string
 *@src: string
 *
 *Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len])
		len++;

	do {
		dest[len + i] = src[i];
		i++;
	} while (src[i]);

	return (dest);

}
