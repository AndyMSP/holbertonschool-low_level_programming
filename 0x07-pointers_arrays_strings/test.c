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

	if (s[0] == '\0' && c == '\0')
	{
		printf("returns pointer to NULL character\n");
		return (s);
	}

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			printf("returns pointer to letter\n");
			return (s + i);
		}
	i++;
	}
	printf("returns 0\n");
	return (0);
	
}
