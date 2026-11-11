#include "main.h"

/**
 * puts_half - print the second half of the string followed by new line
 * @str: pointer to the string lenght
 *
 * Return: nothing
 */


void puts_half(char *str)
{
	int i;
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = len / 2;

		if (len % 2 != 0)
		/** by if statement we do lenght(10) % 2 = 5, so the value of i is 5*/
		{
			i++;
		}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
