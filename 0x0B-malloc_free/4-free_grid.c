#include "main.h"

/**
 * free_grid - allocates a grid, make space and free space
 * @grid: takes in width of frid
 * @height: height of the grid
 * return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
