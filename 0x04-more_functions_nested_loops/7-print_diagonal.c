#include "main.h"

/**
 *  print_diagonal - print straight line
 * @n: num of line
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
		_putchar(' ' );
	}
	_putchar('\n');
}
