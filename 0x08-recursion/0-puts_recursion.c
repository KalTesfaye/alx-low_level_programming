#include "main.h"

/**
 * _puts_recursion - print str with new line
 * @s:the string to be printed
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(++s);
	}
}
