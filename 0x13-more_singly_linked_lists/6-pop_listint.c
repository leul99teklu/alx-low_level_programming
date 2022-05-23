#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - deletes the head node
*@head: head of the list
* Return: head node data or 0
*/

int pop_listint(listint_t **head)
{
	int delhead;
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeod(listint_t));

	if (new == NULL)
		return (NULL);

	new-> = l;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}	
