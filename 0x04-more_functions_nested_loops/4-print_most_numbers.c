#include "main.h"

/**
 * print_more_numbers - print numbers 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
