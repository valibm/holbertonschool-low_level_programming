#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Is a function that adds a new node at the end of a
 *                list_t list.
 * @head: pointer to a head of a list.
 * @str: data to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head, *temp;

	if (str == NULL)
		return (*head);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);

	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
