#include "main.h"

/**
 * free_grid - Frees a 2d array
 *
 * @grid: entry 2d array
 *
 * @height: entry height
 *
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);

}
