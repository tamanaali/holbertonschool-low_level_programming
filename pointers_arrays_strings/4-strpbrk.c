#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the main string we want to search
 * @accept: the string containing the characters we are looking for a match of them in s
 *
 * Return: the found matching characters
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}

			j++;

		}

		i++;
	}

	return (0);
}
