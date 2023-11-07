#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Is a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of 2d array.
 * @height: height of 2d array.
 * Return: NULL on failure, pointer to the array otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(sizeof(int) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
