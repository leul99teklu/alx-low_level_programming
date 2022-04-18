#include "main.h"

/**
*print_rev - print a string in reverse.
*@s: input value
*
*Return: no return.
*/
void print_rev(char *s)
{
	int sting = 0;

	while (sting >= 0)
	{
		if (s[sting] == '\0')
			break;
		sting++;
	}

	for (sting--; sting >= 0; sting--)
		_putcahr(s[sting]);
	_putchar('\n');
}
