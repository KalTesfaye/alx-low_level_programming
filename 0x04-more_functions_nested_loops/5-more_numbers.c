#include "main.h"

/**
 * more_numbers - print numbers 0 to 9
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;
	int first_num;
	int second_num;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
			second_num = i;
		}
		else
		{
			first_num = i / 10;
			second_num = i % 10;
			_putchar(first_num + '0');
		}
		_putchar(second_num + '0');
	}
	_putchar('\n');
	}
}
