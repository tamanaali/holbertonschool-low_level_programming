#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string we want to search
 * @c: the character we are looking for
 *
 * Return: pointer to the first occurance of c, or NULL
 */


char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}


	return (0);

}
