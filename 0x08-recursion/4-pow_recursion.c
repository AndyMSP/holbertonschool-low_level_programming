#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculate x to the power of y recursively
 * @x: base
 * @y: power
 *
 * Return: int x to the power of y
 */
int _pow_recursion(int x, int y)
{
	/**
	 * x^y = x*(x^(y-1))
	 * x^0 = 1
	 */

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
