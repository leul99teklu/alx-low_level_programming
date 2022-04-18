#include "main.h"

/**
*puts_half - print half elements of a string.
*@str: input string.
*Return: no return.
*/
void puts_half(char *str)
{
	int sting = 0, i;

	while (sting >= 0)
	{
		if (str[sting] == '\0')
			break;
		sting++;
	}

	if (sting % 2 == 1)
		i = sting / 2;
	else
		i = (sting - 1) / 2;

	for (i++; i < sting; i++)
		_putchar(str[i]);
	_putchar('\n');
}
