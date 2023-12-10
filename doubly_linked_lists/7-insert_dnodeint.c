#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Is a function that inserts a new node at
 *                            a given position.
 * @h: head node of a list.
 * @idx: index for a pointer to be added.
 * @n: data to be added.
 * Return:  the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp1, *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = NULL;
	if (!h || !(*h))
		*h = node;
	else
	{
		temp = *h;
		while (idx && temp->next)
		{
			temp = temp->next;
			idx--;
		}
		if (idx)
		{
			temp->next = node;
			node->prev = temp;
		}
		else
		{
			temp1 = temp->prev;
			temp->prev = node;
			temp1->next = node;
			node->prev = temp1;
			node->next = temp;
		}
	}

	return (node);
}
