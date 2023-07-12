#include "main.h"
/**
 * alloc_grid - allocate a grid, make space and and free space
 * alloc_grid - Allocates a two-dimwnsional array of integers
 * @width: takes in width of grid
 * @height: height of the grid
 *
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
/*declaring variable*/
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	grid = malloc(sizeof(int *) * height); /*malloc*/

	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	for (i = i - 1; i >= 0; i--)
	{
	free(grid[i]);
	}
	free(grid);
	return (NULL);
	}
	}
	for (i = 0; j < width; j++)
		grid[i][j] = 0;
	return (grid);
}
