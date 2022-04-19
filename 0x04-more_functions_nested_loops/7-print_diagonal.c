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

	for (i = n; i > 0; i--)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
