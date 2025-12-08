#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Read command line args and perform basic arithmetic operations
 * @argc: number of command line args
 * @argv: pointer to array of strings
 *
 * Return: Result or error code
 */
int main(int argc, char **argv)
{
	int a, b, answer;
	char op, *op_string;

	/* Error handling - check for correct number of args */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Assign command line args to variables and convert types */
	a = atoi(argv[1]);
	op_string = argv[2];
	op = argv[2][0];
	b = atoi(argv[3]);

	/* Error handling - check for appropriate operator */
	if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%') ||
		op_string[1] != 0)
	{
		printf("Error\n");
		exit(99);
	}

	/* Error handling - check for divide by zero */
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Perform operation */
	answer = get_op_func(op_string)(a, b);

	printf("%d\n", answer);

	return (0);
}
