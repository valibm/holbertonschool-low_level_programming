#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Is a function that frees a dlistint_t list.
 * @head: first node of a list.
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
