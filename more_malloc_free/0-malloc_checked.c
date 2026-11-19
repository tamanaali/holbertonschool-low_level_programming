#include "main.h"

/**
 * malloc_cheked - allocates memory using malloc
 * @b: number of bytes to allocate
 * void: a generic pointer that can point to different data types
 * malloc() allocates memory without knowing which data type u intend to store
 *
 * Return: returns a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	char *memoryptr;


	memoryptr = malloc(sizeof(char) * b);
	if (memoryptr == NULL)
	{
		exit(98);
	}

	return (memoryptr);
}
