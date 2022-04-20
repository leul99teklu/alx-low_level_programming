#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int sting = 0;

	while (*(s + sting) != '\0')
	{
		if ((*(s + sting) >= 97) && (*(s + sting) <= 122))
			*(s + sting) = *(s + sting) - 32;
		sting++;
	}

	return (s);
}
