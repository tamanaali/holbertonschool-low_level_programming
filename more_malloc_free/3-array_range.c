#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *memoryptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	memoryptr = malloc(sizeof(int) * size);
	if (memoryptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		memoryptr[i] = min + i;
	}

	return (memoryptr);
}
