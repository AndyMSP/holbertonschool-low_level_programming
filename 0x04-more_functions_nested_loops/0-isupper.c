#include "main.h"

/**
 * _isupper - Determines whether is uppercase
 * @c: integer representing a char
 *
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
