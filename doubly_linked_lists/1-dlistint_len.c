#include "lists.h"

/**
 * dlistint_len - Is a function that returns the number of elements in
 *                a linked dlistint_t list.
 * @h: head of a list.
 * Return: the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}

	return (n);
}
