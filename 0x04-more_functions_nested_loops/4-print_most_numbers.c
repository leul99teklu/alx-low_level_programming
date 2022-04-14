#include "main.h"

/**
*print_most_numbers - prints 0 - 9 except 2 and 4.
*
*Return: no return.
*/
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 50 || ch == 52)
			break;
		_putchar(ch);
	}
	_putchar('\n');
}
