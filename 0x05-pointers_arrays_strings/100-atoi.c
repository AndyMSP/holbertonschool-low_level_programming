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

	while (!(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			mins++;
		if (s[i] == '\0')
			return (0);
		i++;
		first = i;
	}
	i = first;
	while (s[i] >= '0' && s[i] <= '9')
	{
		digits++;
		i++;
	}
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
		sum = sum + -1 * (s[i] - 48) * multiplier;
	}
	if (mins % 2 == 0)
		sum = -1 * sum;
	return (sum);
}
