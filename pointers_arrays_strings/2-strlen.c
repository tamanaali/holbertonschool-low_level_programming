#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string to measure
 *
 * return: the lenght of the string
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{

		length++;
	}

	return (length);
}
