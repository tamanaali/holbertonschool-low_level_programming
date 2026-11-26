#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameter
 * @n: number of arguments
 *
 *Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);


}
