#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listt2 - frees a linked list
* @head: head of a list.
*
* Return: no return.
*/

void free_listt2(listt_t **head)
{
	listt_t *temp;
	listt_t *newhead;

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

/**
* free_listint_safe - frees linked list
*@h: head of the list
* Return: siaze of the list free'd
*/

size_t free_listint_safe(listint_t **h)
{
	size_t numnodes = 0;
	listt_t *headptr;
	listt_t *new;
	listt_t *add;
	listint_t *newhead;

	headptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listt_t));
		if (new == NULL)
			exit(98);

		new->t = (void *)h;
		new->next = headptr;
		headptr = new;

		add = headptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->t)
			{
				*h = NULL;
				free_listt2(&headptr);
				return (numnodes);
			}
		}

		newhead = *h;
		*h = (*h)->next;
		free(newhead);
		numnodes++;
	}

	*h = NULL;
	free_listt2(&headptr);
	return (numnodes);
}
