#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: width of the dimension
 * @height: height of the dimension
 *
 * Return: pointer to a 2 dimensional array of ints
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **memoryptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	memoryptr = malloc(sizeof(int *) * height);

	if (memoryptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		memoryptr[i] = malloc(sizeof(int) * width);

		if (memoryptr[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(memoryptr[i]);
			}
			free(memoryptr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			memoryptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (memoryptr);
}
