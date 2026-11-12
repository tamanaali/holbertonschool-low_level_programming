#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: points to the dest we need to join src
 * @src: points to the src we need to join to the dest
 * @n:
 *
 * Return: start
 */


char *_strncat(char *dest, char *src, int n)
{
	char *start;

	start = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (start);

}






