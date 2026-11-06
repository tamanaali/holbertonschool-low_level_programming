#include "main.h"

/**
 *
 * main - jack bauer prints every minutes of the day
 *
 * return - nothing
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;

	while (hour < 24)
	{
		minute = 0;

		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

			minute++;
		}

		hour++;

	}
}
