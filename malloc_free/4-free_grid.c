#include "main.h"

/**
 * free_grid - frees the 2 dimensional grid created by alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid (rows containing width (columns inside))
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	i = 0; /** moves through each row*/
	while (i < height)
	{
		free(grid[i]);
		/** frees the memory allocated to int in that particular row*/
		i++;
	}

	free(grid);
	/** after freeing rows, it frees the memory allocated for the row pointers*/

}
