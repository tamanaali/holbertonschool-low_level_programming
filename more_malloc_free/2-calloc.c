#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each elements in bytes
 *
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int total;
	char *memoryptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	memoryptr = malloc(sizeof(char) * total);
	if (memoryptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		memoryptr[i] = 0;
	}
	return (memoryptr);
}
