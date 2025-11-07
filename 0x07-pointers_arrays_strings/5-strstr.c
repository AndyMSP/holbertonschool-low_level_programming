#include <stdio.h>
#include "main.h"

/**
 * _strstr - find a substring of a string
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int target = 0;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;

		if (haystack[i] == needle[j])
		{
			target = i;
			while (haystack[i])
			{
				if (haystack[i] == needle[j])
				{
					i++;
					j++;
					if (!haystack[i] || !needle[j])
					{
						return (&haystack[target]);
					}
				}
				else
				{
					break;
				}
			}
			i++;
		}
	}
	return (0);
}
