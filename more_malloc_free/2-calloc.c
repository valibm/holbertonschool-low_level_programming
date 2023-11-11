#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Is a function that allocates memory for an array, using malloc.
 * @nmemb: count of elements.
 * @size: size of one element.
 * Return: If nmemb or size is 0, then returns NULL,
 * if malloc fails, then _calloc returns NULL, if not returns allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*(arr + i) = 0;
	}

	return (arr);
}
