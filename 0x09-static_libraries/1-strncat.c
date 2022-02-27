#include "main.h"
#include <stdio.h>

/**
 *_strncat - Concatenates n byts of src to dest
 *@dest: string
 *@src: string
 *@n: number of bytes to be appended
 *
 *Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len])
		len++;

	while (i < n && src[i])
	{
		dest[len + i] = src[i];
		i++;
	}

	return (dest);
}
