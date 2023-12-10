#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Is a function that deletes the node at
 *                            index index of a dlistint_t linked list.
 * @head: pointer to a head of a list.
 * @index: is the index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp1 = NULL;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp->next == NULL)
	{
		temp1 = temp->prev;
		temp1->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		temp1 = temp->prev;
		temp1->next = temp->next;
		temp->next->prev = temp1;
		free(temp);
		temp = NULL;
		return (1);
	}

	return (-1);
}
