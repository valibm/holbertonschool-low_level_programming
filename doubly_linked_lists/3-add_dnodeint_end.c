#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Is a function that adds a new node at the end of
 *                    a dlistint_t list.
 * @head: pointer to the head node of a list.
 * @n: data to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
	}
	return (NULL);
}
