#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: the string we want to examine
 * @accept: the character we allow
 *
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
		{
			return (count);
		}

		i++;

	}

	return (count);

}
