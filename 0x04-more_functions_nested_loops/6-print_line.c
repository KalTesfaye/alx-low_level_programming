#include "main.h"

/**
 * print_line - print straight line
 * @n: num of line
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
