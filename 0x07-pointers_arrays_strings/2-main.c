#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ012345678910abcdefghijklmnopqrstuvwxyz";
	char *f;

	f = _strchr(s, 'B');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
