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

	return (i);
}


/**
 * _match - determines if a char ch matches any char from a string
 * @ch: character
 * @accept: pointer to character
 *
 * Return: int 1 if match and 0 if no match
 */

int _match(char ch, char *accept)
{
	int i = 0;

	while (accept[i])
	{
		if (accept[i] == ch)
			return (1);
		i++;
	}

	return (0);
}


/**
 * sub_match - determines if two strings are the same
 * @s1: string
 * @s2: string
 * @len: integer length of s2
 *
 * Return: 1 if matching, 0 if not
 */

int sub_match(char *s1, char *s2, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
			return (0);
	}

	return (1);
}


/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int len_n, len_h;
	int i = 0;

	len_n = _strlen(needle);
	len_h = _strlen(haystack);

	for (i = 0; i < len_h; i++)
	{
		if (sub_match((haystack + i), needle, len_n))
			return (haystack + i);
	}

	return (NULL);
}
