#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - frees a memory in listint_t
*@head: head of thr list
* Return: no return
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *newhead;

	if (head != NULL)
	{
		newhead = *head;
		while ((temp = newhead) != NULL)
		{
			newhead = newhead->next;
			free(temp);
		}
		*head = NULL;
	}
}
