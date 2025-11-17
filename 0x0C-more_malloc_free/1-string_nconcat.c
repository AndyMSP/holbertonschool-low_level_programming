#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenate s2 to s1
 * @s1: first string
 * @s2: string to add to s1
 * @n: number of chars to add from s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, l1, l2;
	char *empty = "", *str;

	if (!s1)
		s1 = empty;
	if (!s2)
		s2 = empty;

	l1 = strlen(s1);
	l2 = n < strlen(s2) ? n : strlen(s2);
	str = malloc((l1 + l2 + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] && j < l2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
