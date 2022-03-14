#include <stdio.h>
#include "variadic_functions.h"

void print_char(void *ptr);
void print_int(void *ptr);
void print_float(void *ptr);
void print_string(void *ptr);
void (*get_print_op(char))(void *);

int main()
{
	void (*operation)(void *);

	char c = 'T';
	void *v_char = &c;
	int i = 22;
	void *v_int = &i;
	float f = 5.27;
	void *v_float = &f;
	char *str = "String_test";
	void *v_str = (void *)str;

	print_char(v_char);
	print_int(v_int);
	print_float(v_float);
	print_string(v_str);
	printf("\n\n");

	operation = get_print_op('s');
	operation(v_str);
	printf("\n");

	return (0);

}
