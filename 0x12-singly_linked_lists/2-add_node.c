#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* add_node - add a new node at the beginning of list_t list.
*@head: linked list head.
*@str: string to store in the list.
* Return: addres of the new element or NULL.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	size_t word;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);

	for (word = 0; str[word]; word++)
		;

	fresh->len = word;
	fresh->next = *head;
	*head = fresh;

	return (*head);
}
