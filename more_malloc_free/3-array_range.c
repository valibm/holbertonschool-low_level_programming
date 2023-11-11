#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Is a function that creates an array of integers.
 * @min: begining of array.
 * @max: end of array.
 * Return: If min > max, returns NULL, If malloc fails, returns NULL,
 * if not return allocated memory.
 */
int *array_range(int min, int max)
{
	int len = max - min, i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
	        if (min == max)
			break;
		else
			arr[i] = min++;
	}

	return (arr);
}
