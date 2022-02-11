#include "main.h"

/**
 * main - determines if a character is uppercase
 * @c: an integer input
 *
 * Return: 1 if c is uppercase or 0 if something else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
