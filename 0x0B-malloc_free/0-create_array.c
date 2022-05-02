#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *lu;
	unsigned int i;

	if (size == 0)
		return (NULL);

	lu = malloc(sizeof(c) * size);

	if (lu == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		lu[i] = c;

	return (lu);
}
