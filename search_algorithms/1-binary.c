#include "search_algos.h"

/**
 * binary_search - Is a function that searches for a value in a sorted
 *                 array of integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: Index where value is located, if value is not present
 *         in array or if array is NULL, returns -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low_idx = 0, high_idx = size - 1, mid_idx = 0, i = 0;

	if (!array)
		return (-1);

	while (low_idx <= high_idx)
	{
		mid_idx = (high_idx + low_idx) / 2;

		printf("Searching in array: ");
		for (i = low_idx; i <= high_idx; i++)
		{
			if (i != low_idx)
				printf(", ");
			printf("%i", array[i]);
		}
		printf("\n");

		if (array[mid_idx] == value)
			return (mid_idx);

		if (array[mid_idx] < value)
			low_idx = mid_idx + 1;
		else
			high_idx = mid_idx - 1;
	}

	return (-1);
}
