#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Is a function that allocates memory using malloc.
 * @b: size of allocated memory.
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
