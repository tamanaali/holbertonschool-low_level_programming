#include "main.h"

/**
 * rev_string - reverses a string in place
 *
 * @s: pointer to the string to reverse*
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;

	while (i < len)
	{

		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;

		i++;
		len--;
	}
}
