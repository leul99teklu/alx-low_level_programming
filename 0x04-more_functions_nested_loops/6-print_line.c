#include "main.h"

/**
*print_line - printes line using miltiple _.
*@n: number of times the character is printed.
*Return: no return.
*/
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
