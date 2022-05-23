#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listt - frees linked list listint_t
*@head: head of the list
* Return: no return
*/

void free_listt(listt_t **head)
{
	listt_t *temp;
	listt_t *nodeprint;

	if (head != NULL)
	{
		nodeprint = *head;
		while ((temp = nodeprint) != NULL)
		{
			nodeprint = nodeprint->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
* print_listint_safe - prints a linked list.
* @head: head of a list.
*
* Return: number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t numnodes = 0;
	listt_t *headptr;
	listt_t *new;
	listt_t *add;

	headptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listt_t));
		if (new == NULL)
			exit(98);
		new->t = (void *)head;
		new->next = headptr;
		headptr = new;

		add = headptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->t)
			{
				printf("-> [%p] %d\n", (void *)head, head->l);
				free_listt(&headptr);
				return (numnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numnodes++;
	}

	free_listt(&headptr);
	return (numnodes);
}
