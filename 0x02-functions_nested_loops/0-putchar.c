#include "main.h"

/**
 * main - _putchar - writes _putchar to stdout.
 *
 * Return: On success 0
 */
int main(void)
{
	int str[] = {45, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
