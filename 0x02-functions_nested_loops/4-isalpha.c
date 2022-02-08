#include "main.h"

/**
 * _isalpha - determines if a letter or not
 * @c a: character
 *
 * Return: Return 1 if letter or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'a'))
		return (1);
	else
		return (0);
}
