#include "main.h"

/**
*_puts - print a string
*@str: pointer with string value.
*
*Return: no return.
*/
void _puts(char *str)
{
	int sting = 0;

	while (sting >= 0)
	{
		if (str[sting] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[sting]);
		sting++;
	}
}
