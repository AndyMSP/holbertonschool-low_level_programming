#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - Calculates length of a string
 * @s: a string ending with '\0'
 *
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i + 1);
}


/**
 * str_concat - concatenates s2 to s1
 * @s1: a string
 * @s2: a string
 *
 * Return: pointer to new copy of s2 concatenated to s1 or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int len3;
	int i = 0;
	int j = 0;
	char *s3;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len3 = len1 + len2 - 1;

	s3 = malloc(sizeof(char) * len3);
	if (s3 == NULL)
		return (NULL);

	while (j < len1 - 1)
	{
		s3[i] = s1[j];
		++i;
		++j;
	}

	j = 0;
	while (j < len2)
	{
		s3[i] = s2[j];
		++i;
		++j;
	}

	return (s3);
}
