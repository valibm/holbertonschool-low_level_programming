#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Is a function that prints all the elements of a list_t list.
 * @h: Head of a list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t n = 0;

	ptr = h;
	while (ptr != NULL)
	{
		n++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (n);
}
