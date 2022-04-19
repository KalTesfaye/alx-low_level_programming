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
	int j;

	for (j = 0; j < n; j++)
	{
	for (i = 0; i <= j; i++)
	{
		if (i == j)
		{
		_putchar('\\');
		}
		else
		{
		_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
