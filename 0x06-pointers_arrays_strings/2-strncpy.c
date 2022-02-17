#include "main.h"
#include <stdio.h>

/**
 *_strncpy - Copy n bytes of src to dest
 *@dest: string
 *@src: string
 *@n: number of bytes to be copied
 *
 *Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
