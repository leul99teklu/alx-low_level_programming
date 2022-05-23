#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* find_listint_loop - loops in a linked list
*@head: head of the list
* Return: adress of node where loop start or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l2;
	listint_t *before;

	l2 = head;
	before = head;
	while (head && l2 && l2->next)
	{
		head = head->next;
		l2 = l2->next->next;

		if (head == l2)
		{
			head = before;
			before = l2;
			while (1)
			{
				l2 = before;
				while (l2->next != head && l2->next != before)
					l2 = l2->next;
				if (l2->next == head)
					break;
				head = head->next;
			}
			return (l2->next);
		}
	}
	return (NULL);
}
