#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _atoi - Converts string to integer
* @s: pointer to string
*
* Return: integer value
*/

int _atoi(char *s)
{
	int i = 0;
	int mins = 0;
	int first = 0;
	int digits = 0;
	int sum = 0;
	int j = 0;
	int multiplier = 0;
	int place = 0;

	/* Count minus signs and find first digit location */
	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			mins++;
		if (s[i] == '\0')
			return (0);
		i++;
		first = i;
	}
	/* Determine number of digits */
	i = first;
	while (s[i] >= '0' && s[i] <= '9')
	{
		digits++;
		i++;
	}
	/* Convert digits in string to an integer value */
	place = digits;
	for (i = first; i < first + digits; i++)
	{
		j = 1;
		multiplier = 1;
		while (j < place)
		{
			multiplier = multiplier * 10;
			j++;
		}
		place--;
		sum = sum + (s[i] - 48) * multiplier;
	}
	/* Make negative if necesary */
	if (mins % 2 == 1)
		sum = -1 * sum;
	/* Return sum */
	return (sum);
}
