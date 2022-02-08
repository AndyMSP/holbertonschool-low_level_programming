#include "main.h"
/**
* abs - returns absolute value of input argument
* @n: any integer
* 
* Return: absolute value of input
*/

int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (n * -1);
	else
		return (n);
}
