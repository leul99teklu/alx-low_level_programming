#include "main.h"

/**
*puts2 - print all element of a string.
*@str: input string.
*Return: no return.
*/
void puts2(char *str)
{
	int sting = 0;

	while (sting >= 0)
	{
		if (str[sting] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (sting % 2 == 0)
			_putchar(str[sting]);
		sting++;
	}
}
