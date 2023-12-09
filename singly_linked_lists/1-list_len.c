#include "lists.h"

/**
 * list_len - Is a function that returns the number of elements in a
 *            linked list_t list.
 * @h: head of a list.
 * Return: number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t n = 0;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}

	return (n);
}
