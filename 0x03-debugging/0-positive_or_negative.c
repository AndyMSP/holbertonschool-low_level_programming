#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * positive_or_negative - Determine the sign of a number
 * @n: Integer number to test
 *
 * Return: Always 0
 */
void positive_or_negative(int n)
{

	/*
	 * srand(time(0));
	 * n = rand() - RAND_MAX / 2;
	 * your code goes there
	 */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
	/* your code ends here*/
}
