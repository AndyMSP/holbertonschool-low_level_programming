#include <stdio.h>
#include "variadic_functions.h"

void print_void(void *, void *);

int main()
{
	char c = 'T';
	void *v_char = &c;
	int i = 22;
	void *v_int = &i;
	
	print_char(v_char);

	return (0);



}

void print_void(void *var1, void *var2)
{
	char *str;
	int *num_p, num;

	(void)num_p;
	(void)num;
/*	num_p = (int *)var2;*/
	num = *(int *)var2;

	str = (char *)var1;

	printf("%s\n%i\n", str, *(int *)var2);

}
