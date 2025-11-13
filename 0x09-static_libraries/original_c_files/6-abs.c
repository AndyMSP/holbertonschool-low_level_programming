#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n: an integer
 *
 * Return: Absolute value of n
 */
int _abs(int n)
{
	int absVal;

	if (n >= 0)
		absVal = n;
	else
		absVal = -1 * n;

	return (absVal);
}
