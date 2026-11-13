#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: points to the dest string to copy characters into
 * @src: points to the src string to copy characters from
 * @n: number of bytes to be copied from memory area src to dest
 *
 * Return: pointer to modified destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start;

	start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (start);

}
