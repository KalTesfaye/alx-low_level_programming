#include "main.h"

/**
 * _puts_recursion - print str with new line
 * @s:the string to be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)
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
	_puts_recursion(s + n);
	_putchar(*s);
	}
}
