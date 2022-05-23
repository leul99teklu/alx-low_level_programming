#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node
*@head: head of the list
*@index: node starting at 0
* Return: NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (unsigned int x = 0; x < index && head != NULL; x++)
		head = head->next;

	return (head);
}
