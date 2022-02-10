#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *positive_or_negative - describes a number as positive, negative or 0
 *
 *Return: Always return 0
 */
int positive_or_negative(int n)
{
	printf("%i is ", n);
	if (n < 0)
		printf("negative\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("positive\n");
	return (0);
}
