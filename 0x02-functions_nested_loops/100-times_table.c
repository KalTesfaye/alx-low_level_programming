#include "main.h"

/**
 *print_times_table - check code
 *@n: vaue to be checked
 *
 * Return : 0
 */
void print_times_table(int n)
{
	int hour;
	int minute;
	int prod;

	if (n < 15 && n > 0)
	{
	for (hour = 0; hour <= n; hour++)
	{
		for (minute = 0; minute <= n; minute++)
		{
			prod = hour * minute;
			if (prod > 9)
			{
			_putchar(prod / 10 + '0');
			}
			if (minute != 0 && prod <= 9)
			{
				_putchar(' ');
			}
			_putchar(prod % 10 + '0');
			if (minute == n)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
}
