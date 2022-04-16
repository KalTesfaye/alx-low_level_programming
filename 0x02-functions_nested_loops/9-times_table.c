#include "main.h"

/**
 *times_table - check code
 *
 * Return : 0
 */
void times_table(void)
{
	int hour;
	int minute;
	int prod;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			prod = hour * minute;
			if (prod < 9)
			{
			_putchar(prod / 10 + '0');
			}
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
