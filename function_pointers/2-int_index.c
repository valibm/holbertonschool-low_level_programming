#include <stddef.h>

/**
 * int_index - Is a function that searches for an integer.
 * @array: Array to be searched.
 * @size: Size of array.
 * @cmp: Is a pointer to the function to be used to compare values.
 * Return: The index of the first element for whichthe cmp function
 *         does not return 0, If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
