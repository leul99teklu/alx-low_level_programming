#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list.
*@h: linked list(single).
* Return: number of elements in list_t.
*/

size_t list_len(const list_t *h)
{
	size_t start;

	start = 0;
	while (h != NULL)
	{
		h = h->next;
		start++;
	}
	return (start);
}
