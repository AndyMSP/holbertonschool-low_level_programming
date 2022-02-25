#include <stdio.h>

int main()
{
	int i;
	char arr[5];

	for (i = 0; i < 100; i++)
	{
		printf("arr[%d] = %d, address = %p\n",i, arr[i], &arr[i]);
	}

	return (0);
}
