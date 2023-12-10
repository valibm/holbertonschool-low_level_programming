#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Is a function that returns the nth node of
 *                         a dlistint_t linked list.
 * @head: head node of a list.
 * @index: index of the element to be returned.
 * Return: the node on the index if the node does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			break;
		head = head->next;
	}
	return (head);
}
