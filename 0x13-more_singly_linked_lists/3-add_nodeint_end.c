#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - adds new node at the end
*@head: head of the list
*@n: n element
* Return: the address of the new element or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t = *end;
	listint_t = *temp;

	(void)temp;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);

	end->n = n;
	end->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = end;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}

	return (*head);
}
