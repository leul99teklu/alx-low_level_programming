#include "main.h"

/**
*_isdigit - checks code for digit (0 - 9).
*@c: input digit to be chacked.
*Return: 1 if c is digit and 0 else.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
