#include "main.h"

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
	char *first;

	while (s[i])
	{
		if (s[i] == c)
		{
			first = s + i;
			return (first);
		}
	i++;
	}

	return ('\0');
}
