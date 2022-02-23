#include "main.h"
#include <stdio.h>


/**
* _strchr - Returns a pointer to the first occurance of the character c
* in the string s or NULL if the character is not found
* @s: Pointer to a character
* @c: Character we are searching for
*
* Return: pointer to first instance of character or NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}

	return (0);
}
