#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate s1 with s2 in new memory space
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1 = 0, l2 = 0, len, i, j, k;
	char *cat, *empty = "";

	/* handle case of blank or null */
	if (!s1)
		s1 = empty;
	if (!s2)
		s2 = empty;

	/* find length of s1 and s2 (len = 0 if Null) */
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	len = l1 + l2;

	/* allocate memory to new string with checks */
	cat = malloc((len + 1) * sizeof(char));
	if (!cat)
		return (NULL);

	/* write data into new string */
	for (i = 0, j = 0, k = 0; i < len + 1; i++)
	{
		if (s1[j])
		{
			cat[i] = s1[j];
			j++;
		}
		else if (s2[k])
		{
			cat[i] = s2[k];
			k++;
		}
		else
		{
			cat[i] = '\0';
		}
	}
	return (cat);
}
