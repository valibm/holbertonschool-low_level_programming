#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Is a function that returns the sum of all the data (n) of
 *                a dlistint_t linked list.
 * @head: head node of a list.
 * Return: sum of all data or if the list is empty 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head)
		temp = head;
	else
		return (0);

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum += temp->n);
}
