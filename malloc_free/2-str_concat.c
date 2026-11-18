#include "main.h"

/**
 * str_concat - concats two strings
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 *
 * Return: the concated strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j; /**counter to calculate lenght*/
	char *memory; /** pointer to the beginning of  newly allocated memory*/

	if (s1 == NULL)
	{
		s1 =  "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}
	memory = malloc(sizeof(char) * (len1 + len2 + 1));
	if (memory == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;

	for ((i = 0); i < len1; i++)
	{
		memory[i] = s1[j];
		j++;
	}

	for (j = 0; j < len2; j++)
	{
		memory[i] = s2[j];
		i++;
	}

	memory[len1 + len2] = '\0';
	return (memory);
}
