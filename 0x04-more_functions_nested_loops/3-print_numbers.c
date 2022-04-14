#include "main.h"

/**
*print_numbers - prints from 0 - 9.
*
*Return: no return.
*/
void print_numbers(void)
{
	int ch;

	ch = 48;
	while (ch <= 57)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
