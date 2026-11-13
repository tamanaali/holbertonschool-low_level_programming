#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @b: the value/byte we wanna use to fill
 * @n: the number of bytes to fill
 * @s: pointer to the memory we want to modify/add b
 *
 * Return: the filled pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);

}
