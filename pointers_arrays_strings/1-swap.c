#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a:  pointer to integer a
 * @b:  pointer to integer b
 *
 * return- nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
