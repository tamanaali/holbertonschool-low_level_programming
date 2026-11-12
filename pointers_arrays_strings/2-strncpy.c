#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 * @dest: points to the dest string to copy characters into
 * @src: points to the src string to copy characters from
 * @n: maximum number of characters to copy
 *
 * Return: pointer to the resulting destination string(start)
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *start;

	start = dest;



	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (start);

}






