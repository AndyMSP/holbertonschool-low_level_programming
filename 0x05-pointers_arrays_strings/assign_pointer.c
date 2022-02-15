#include <stdio.h>

int main(void)
{
	char c;
	c = 'f';
	char *p;
	p = &c;
	printf("%p\n",p);

	return (0);
}
