#include "main.h"

/**
 * jack_bauer - check code
 *
 * Return : 0
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			int prod;
			prod = hour * minute;
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
			if (minute == 9)
					{
					continue;
					}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
