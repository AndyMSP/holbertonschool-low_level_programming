#include "main.h"

/**
 * _isdigit - determines if a character is a digit
 * @c: an integer input
 *
 * Return: 1 if c is a digit or 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
