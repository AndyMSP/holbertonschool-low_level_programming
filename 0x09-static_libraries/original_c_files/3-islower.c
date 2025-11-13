#include "main.h"

/**
 * _islower - determines if input is lowercase letter
 * @c: an integer representing a character
 *
 * Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
