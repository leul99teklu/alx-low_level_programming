#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of the head.
*/

list_t *add_node_end(list_t **head, const *str)
{
	list_t *fresh, *temp;
	size_t word;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);

	for (word = 0; str[word]; word++)
		;

	fresh->len = word;
	fresh->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = fresh;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = fresh;
	}

	return (*head);
}

