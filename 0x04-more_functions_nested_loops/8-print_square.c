#include "main.h"

/**
 *  print_square - print square
 * @n: num of line
 *
 * Return: 0
 */
void print_square(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('#');
		
	}
	_putchar('\n');
	}
}
