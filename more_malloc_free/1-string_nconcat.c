#include "main.h"

/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: 2nd string
 * @n: number of characters/bytes to concat from s2
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, cpylen;
	char *memoryptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	cpylen = 0;
	while (cpylen < n && cpylen < len2)
	{
		cpylen++;
	}
	memoryptr = malloc(sizeof(char) * (len1 + cpylen + 1));
	if (memoryptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		memoryptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < cpylen)
	{
		memoryptr[i] = s2[j];
		i++;
		j++;
	}
	memoryptr[i] = '\0';
	return (memoryptr);
}
