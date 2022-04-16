#include "main.h"

/**
 * times_table - check code
 *
 * Return : 0
 */
void times_table(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 9; hour++)
	{
		for (minute = 0; minute <= 9; minute++)
		{
			_putchar(hour * minute + '00');
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
