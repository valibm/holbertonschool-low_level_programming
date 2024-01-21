#include "search_algos.h"

/**
 * linear_search - Is a function that searches for a value in an array
 *                 of integers using the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: Index where value is located, if value is not present in
 *         array or if array is NULL, returns -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array || !value)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
