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
/*
 *			printf("i = %d, s[i] = %d, c = %d, return pointer\n", i, s[i], c);
 */
			return (s + i);
		}
/*
*	printf("i = %d, s[i] = %d, c = %d, continue while\n", i, s[i], c);
*/
	i++;
	}

	if (s[i] == 0 && c == 0)
	{
/*
*		printf("i = %d, s[i] = %d, c = %d, return pointer to NULL\n", i, s[i], c);
*/
		return (s + i);
	}
/*
*	printf("i = %d, s[i] = %d, c = %d, return 0\n", i, s[i], c);
*/
	return (0);
}
