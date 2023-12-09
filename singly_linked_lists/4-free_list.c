#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Is a function that frees a list_t list.
 * @head: head of a list.
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
