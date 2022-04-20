#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int sting = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + sting) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + sting) == alphabet[i])
			{
				*(s + sting) = rot13[i];
				break;
			}
		}
		sting++;
	}

	return (s);
}
