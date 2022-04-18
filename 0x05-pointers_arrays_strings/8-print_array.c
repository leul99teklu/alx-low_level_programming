#include "main.h"
#include <stdio.h>

/**
*print_array - print n element od an array.
*@a: input array.
*@n: number of element in an array.
*Return: no return.
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
