#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Is a function that adds a new node at the beginning of a
 *            list_t list.
 * @head: adress of head of a list.
 * @str: data to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
