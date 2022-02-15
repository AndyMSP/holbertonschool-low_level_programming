#include "main.h"
#include <stdio.h>

int len(char *s);

/**
 * rev_string - Reverses the string
 * @str: pointer to a char variable
 *
 * Return: No return value
 */

void rev_string(char *str)
{

	int i;
	int l = len(str);
	char ts, tf;

	for (i = 0; i <= l / 2; i++)
	{
		ts = str[i];
		tf = str[l - i - 1];
		str[i] = tf;
		str[l - i - 1] = ts;
	}
}

/**
 * len - Calculates length of a string
 * @s: a string ending with '\0'
 *
 * Return: int length of string
 */

int len(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);

}
