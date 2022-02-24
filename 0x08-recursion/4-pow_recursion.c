#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - calculates x to the power of y
 * @x: an integer
 * @y: an integer
 *
 * Return: x raised to the power of y or -1 if y is a negative value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
