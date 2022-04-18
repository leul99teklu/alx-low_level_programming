#include "main.h"

/**
*swap_int - performs swap of value.
*@a: input value.
*@b: swap vlaue.
*Return: no return.
*/
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
