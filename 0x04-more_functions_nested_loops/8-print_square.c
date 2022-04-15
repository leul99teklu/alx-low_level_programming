#include "main.h"

/**
*print_square - print a square using # sign.
*@size: size of th square.
*Return: no return.
*/
void print_square(int size)
{
	int j, i;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putcahr(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
