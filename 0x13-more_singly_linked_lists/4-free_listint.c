#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - frees memory of listint_t
*@head: head of the list
* Return: no return
*/

void free_listint(listint_t *head)
{
	listint_t = *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
