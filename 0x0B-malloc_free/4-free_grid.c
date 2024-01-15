#include "main.h"

/**
 * free_grid - Function to free the 2D array.
 * @grid: 2D array to be free.
 * @height: Number of lines of the array
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

