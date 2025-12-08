#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - get appropriate function for operation
 * @s: string indicating type of operation
 *
 * Return: pointer to appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	/* Match s to ops[i][o] */
	/* return ops[i][1] or NULL*/
	for (i = 0; i < 6; i++)
	{
		if (s[0] == ops[i].op[0] && s[1] == 0)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
