#include <stdio.h>
#include <stdlib.h>

int detect_chars(char *s);

/**
 * main - print the result of numbers added together
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if succesfull or 1 if error occurs
 */

int main(int argc, char **argv)
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < argc; ++i)
	{
		if (detect_chars(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * detect_chars - detects non numeric characters
 * @s: pointer to char
 *
 * Return: 0 if all digits or 1 if a non digit exists
 */
int detect_chars(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}

		++i;
	}

	return (0);
}
