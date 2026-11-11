#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int digit;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result < INT_MIN / 10 ||
				(result == INT_MIN / 10 && -digit < INT_MIN % 10))
			return (sign == -1 ? INT_MIN : INT_MAX);

		result = result * 10 - digit;

		i++;
	}

	if (sign == -1)
		return (result);

	return (-result);
}
