#include "main.h"

/**
 * _islower - determines if character is lowercase
 *
 * Return: 1 for lowercase, 0 for other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
