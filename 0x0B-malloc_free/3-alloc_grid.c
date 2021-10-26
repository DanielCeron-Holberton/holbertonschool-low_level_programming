#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Null if error exists or Grid allocated on succesfully execution.
 */

int **alloc_grid(int width, int height)
{
	int **gridAlloc;
	int i = 0;

	if (width == 0 && height == 0)
	{
		return (NULL);
	}
	
	gridAlloc = (int **)malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
		gridAlloc[i] = (int *)malloc(height * sizeof(int *));

	if (gridAlloc == NULL)
	{
		return (NULL);
	}

	return (gridAlloc);
}
