#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - prints sums of all data in listint_t
*@head: head of the list
* Return: Always 0.
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->l;
		head = head->next;
	}

	return (sum);
}
