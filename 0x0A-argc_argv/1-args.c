#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter */
	printf("%d\n", argc - 1);
	return (0);
}
