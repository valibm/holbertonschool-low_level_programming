#include <stdio.h>

/**
 * print_diagsums - Is a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: 2d array casted to (int *).
 * @size: size of a.
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int i, max = size * size, sum1 = 0, sum2 = 0;

	for (i = 0; i < max; i += size + 1)
	{
		sum1 += a[i];
	}

	for (i = max - 1; i >= 0; i -= size - 1)
	{
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);
}
