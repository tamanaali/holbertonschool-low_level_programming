#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string to join/append to
 * @src: source string to join/append to dest
 *
 * Return: points to the joined src and dest string
 */

char *_strcat(char *dest, char *src)
{

	char *start;

	start = dest;


	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = ('\0');

	return (start);

}

