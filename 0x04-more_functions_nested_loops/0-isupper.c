#include "main.h"
/**
 * _isupper - check the code.
 * @c: input character.
 * Return: 1 if it is uppercase character else 0.
 */
int _isupper(int c)
{
	int c;

	printf("Enter any character uppercase ro lowercase: ");
	scanf("%c", &c);
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
