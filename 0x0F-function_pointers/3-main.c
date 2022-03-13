#include "3-calc.h"

/**
 * main - perform an operation on input
 * @argc: number of arguments
 * @argv: array of arguments as strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, result, (*operation)(int, int);
	char *symbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	symbol = argv[2];

	operation = get_op_func(symbol);

	if (operation == 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*symbol == '/' || *symbol == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(a, b);

	printf("%i\n", result);

	return (0);
}
