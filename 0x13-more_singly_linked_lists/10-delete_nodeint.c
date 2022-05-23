#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at index of listint_t
*@head: head of the list
*@index: node to be deleted
* Return: 1 if succeeded or -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before;
	listint_t *after;

	before = *head;
	if (index != 0)
	{
		for (unsigned int x = 0; x < index - 1 && before != NULL; x++)
			before = before->next;
	}

	if (before == NULL || (before->next == NULL && index != 0))
		return (-1);

	after = before->next;
	if (index != 0)
	{
		before->next = after->next;
		free(after);
	}
	else
	{
		free(before);
		*head = after;
	}

	return (1);
}
