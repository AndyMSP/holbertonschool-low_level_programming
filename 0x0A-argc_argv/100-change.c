#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make exact change
 * using 25, 10, 5, 2 and 1 cent pieces
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char **argv)
{
	int money = 0, coins = 0, _25 = 0, _10 = 0, _5 = 0, _2 = 0, _1 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}

	_25 = money / 25;
	money = money % 25;
	_10 = money / 10;
	money = money % 10;
	_5 = money / 5;
	money = money % 5;
	_2 = money / 2;
	money = money % 2;
	_1 = money;

	coins = _25 + _10 + _5 + _2 + _1;

	printf("%d\n", coins);

	return (0);
}
