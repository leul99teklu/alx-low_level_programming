#include "main.h"

/**
 *_strncat - concatenates two strings,
 *@dest: destination.
 *@src: source.
 *@n: amount of bytes used from src.
 *Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int sting1 = 0;
	int sting2 = 0;

	while (*(dest + sting1) != '\0')
	{
		sting1++;
	}

	while (sting2 < n)
	{
		*(dest + sting1) = *(src + sting2);
		if (*(src + sting2) == '\0')
			break;
		sting1++;
		sting2++;
	}
	return (dest);
}
