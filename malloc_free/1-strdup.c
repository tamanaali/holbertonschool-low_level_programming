#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string that the pointer is returned to
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{

	char *memory;
	unsigned int len;
	unsigned int i;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	memory = malloc((len + 1) * sizeof(char));

	if (memory == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		memory[i] = str[i];
		i++;
	}

	memory[len] = '\0';
	return (memory);
}
