#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a lisitin_t
* @h: head of the list
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		peintf("%d\n", h->l);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
