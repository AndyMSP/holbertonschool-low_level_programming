#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - prints a random number and describes it as positive, negative or 0
 *
 *Return: Always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%i is ", n);
	if (n < 0)
		printf("negative\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("positive\n");
	return (0);
}
