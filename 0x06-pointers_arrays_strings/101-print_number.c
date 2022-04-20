#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, d, sting;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	sting = 1;

	while (d > 9)
	{
		d /= 10;
		sting *= 10;
	}

	for (; sting >= 1; sting /= 10)
	{
		_putchar(((m / sting) % 10) + 48);
	}
}
