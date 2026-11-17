#include "main.h"

/**
 * create_array - creates an array of char, initialized with specific char
 * @size: the size of the memory to print(how many characters should contain)
 * @c: the character to fill the array with (0x48) in every position
 *
 * Return: pointer to the array or NULL if it fails/ is 0
 */



char *create_array(unsigned int size, char c)
{
	/** Declares a pointer to store the address of the array*/
	char *arr;
	/** Declares a counter to track array positions.*/
	unsigned int i;

	arr = malloc((size) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	i = 0;
	/** Repeats the loop while the counter is smaller than the requested size.*/
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}









