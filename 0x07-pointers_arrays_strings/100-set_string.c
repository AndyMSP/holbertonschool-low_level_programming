#include <stdio.h>
#include "main.h"

/**
 * set_string - changes the address of a pointer
 * @s: pointer to pointer to char
 * @to: pointer to char
 *
 * Return: No return value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
