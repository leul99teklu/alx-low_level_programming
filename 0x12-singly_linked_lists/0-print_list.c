#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all elements of a list_t.
*@h: linked list(single).
* Return: the number of nodes(start).
*/

size_t print_list(const list_t *h)
{
	size_t start;

	start = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		start++;
	}
	return (start);
}
