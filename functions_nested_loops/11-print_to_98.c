#include "main.h"

/**
 * print_number - Prints an integer
 * @number: Number to print
 *
 * Return: Nothing
 */
static void print_number(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number / 10)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}

/**
 * print_to_98 - Prints integers from n to 98
 * @n: Starting integer
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (1)
	{
		print_number(n);

		if (n == 98)
			break;

		_putchar(',');
		_putchar(' ');

		if (n < 98)
			n++;
		else
			n--;
	}

	_putchar('\n');
}
