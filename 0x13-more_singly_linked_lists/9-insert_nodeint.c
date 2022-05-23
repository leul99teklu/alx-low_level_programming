#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
*@head: head of the list
*@idx: place whare new node starts(0)
*@n: position of new node placed
* Return: address of idx or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *y;

	y = *head;
	if (idx != 0)
	{
		for (unsigned int x = 0; x < idx - 1 && y != NULL; x++)
			y = y->next;
	}

	if (y == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->l = l;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = y->next;
		y->next = newnode;
	}

	return (newnode);
}
