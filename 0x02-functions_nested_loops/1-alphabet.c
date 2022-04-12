#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int ch;
ch = 97;
while (ch < 123)
{
_putchar("%c", ch);
ch++;
}
_putchar('\n');
}

