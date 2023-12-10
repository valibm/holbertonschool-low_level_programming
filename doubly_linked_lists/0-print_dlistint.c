#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Is a function that prints all the elements of
 *                  a dlistint_t list.
 * @h: head of a list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}

	return (n);
}
