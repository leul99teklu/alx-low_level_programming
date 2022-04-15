#include "main.h"

/**
*print_diagonal - printes diagonal using miltiple \.
*@n: number of times the character is printed.
*Return: no return.
*/
void print_diagonal(int n)
{
	int j, i;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (j < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
