#include "main.h"

/**
*_strcpy - copy one string to another string.
*@dest: holdes the copied value.
*@src: holeds the value to be copied.
*Return: return dust.
*/
char *_strcpy(char *dest, char *src)
{
	int sting = 0;

	while (sting >= 0)
	{
		*(dest + sting) = *(src + sting);
		if (*(src + sting) == '\0')
			break;
		sting++;
	}
	return (dest);
}
