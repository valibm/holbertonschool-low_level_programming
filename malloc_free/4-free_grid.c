#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Is a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
