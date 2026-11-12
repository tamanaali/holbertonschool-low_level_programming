#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: points to the array of integers
 * @n: points to the number of elements of array to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int len;
	int temp;

	i = 0;
	len = n - 1;


	while (i < len)
	{
		temp = a[i];
		a[i] = a[len];
		a[len] = temp;

		i++;
		len--;
	}








}
