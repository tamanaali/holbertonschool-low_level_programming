#include "main.h"

/**
 * _strcmp - compares two strings(index numbers not exact alphabets)
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: difference between the first differing characters (ASCII no. diff)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		/** first condition guarantees that s1&s2 are equal*/
	{
		i++;
	}

	return (s1[i] - s2[i]);

}
