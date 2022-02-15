#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses the string
 * @str: pointer to a char variable
 *
 * Return: No return value
 */

void rev_string(char *s)
{
	int count = 0;
	int rev = 0;
	char temp[1000];

	while (s[count] != '\0')
	{
		count++;
	}

	count--;

	while (count >= 0)
	{
		temp[rev] = s[count];
		count--;
		rev++;
	}

	temp[rev] = '\0';
	count = 0;
	while (temp[count] != '\0')
	{
		s[count] = temp[count];
		count++;
	}
}
