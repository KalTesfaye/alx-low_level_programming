#include "main.h"

/**
 * _print_rev_recursion - print str with new line
 * @s:the string to be printed
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n =+ 1;
	}
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
	_print_rev_recursion(s + n);
	_putchar(*s);
	}
}
