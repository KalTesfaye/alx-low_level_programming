#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: value to be checked
 *
 * return: 0
 */
int print_last_digit(int n)
{
	int m;

	m= n%10;
	if (m < 0)
		m *=-1;
	_putchar('%d',m);
	return (m);
}
