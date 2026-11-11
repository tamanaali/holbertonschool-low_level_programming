#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: is pointer to string to print
 *
 * Return: nothing
 */


void puts2(char *str)
{
	int len;

	len = 0;

	while (str[len] % 2 <= 0)
	{

		_putchar(str[len]);
		str++;
		len++;
	}


	_putchar('\n');


}
