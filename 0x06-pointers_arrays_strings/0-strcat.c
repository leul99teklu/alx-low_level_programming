#include "main.h"

/**
*_strcat - concatenates the string src to the string dest.
*@dest: input string.
*@src: input string.
*Return: dest (secess).
*/
char *_strcat(char *dest char *src)
{
	int sting1 = 0;
	int sting2 = 0;

	while (*(dest + sting1) != '\0')
	{
		sting1++;
	}

	while (sting2 >= 0)
	{
		*(dest + sting1) = *(src + sting2);
		if (*(src + sting2) == '\0')
			break;
		sting1++;
		sting2++;
	}
	return (dest);
}
