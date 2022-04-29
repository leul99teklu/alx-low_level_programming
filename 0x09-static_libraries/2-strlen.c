#include "main.h"

/**
*_strlen - function that shows the length of a string.
*@s: pointer variable that has the address of the string.
*
*Return: length of the string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
