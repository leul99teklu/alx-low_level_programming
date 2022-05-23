#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - reverses a data in listint_t
*@head: head of the list
* Return: pointer to reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *l;
	listint_t *t;

	l = NULL;
	t = NULL;

	while (*head != NULL)
	{
		l = (*head)->next;
		(*head)->next = t;
		t = *head;
		*head = l;
	}

	*head = t;
	return (*head);
}
