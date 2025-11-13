#include "main.h"

/**
 * _isalpha - determines if input is alphabet character
 * @c: an integer representing a character
 *
 * Return: 1 if c is aplhabetic and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
