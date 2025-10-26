#include "main.h"

/**
 * _isdigit - Determines if input is digit or not
 * @c: int that represents a character
 *
 * Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
