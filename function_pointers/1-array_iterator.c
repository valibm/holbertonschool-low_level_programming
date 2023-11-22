#include <stddef.h>

/**
 * array_iterator - Is a function that executes a function
 * given as a parameter on each element of an array.
 * @array: Array to be iterated.
 * @size: Size of array.
 * @action: Is a pointer to the function needed to be used.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
