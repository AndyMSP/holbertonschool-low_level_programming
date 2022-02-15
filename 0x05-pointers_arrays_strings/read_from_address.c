#include <stdio.h>

int main(void)
{
	char c2
	char *p2;
	p2 = 0x7ffe7e3787ff;
	c2 = *p2;

	printf("%c\n", c2);

	return (0);
}
