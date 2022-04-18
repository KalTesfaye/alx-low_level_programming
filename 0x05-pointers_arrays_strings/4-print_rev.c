#include "main.h"

/**
 * print_rev - print a string int reverse
 * @s: str to be print
 *
 * Return: 0
 */
void print_rev(char *s)
{
	char *m;
	int c;
	int i;

	c = 0;
	m = s;
	while (m[c] != '\0')
	{
		c++;
	}
	for (i = c; i >= 0; i--)
	{
		_putchar(m[i]);
	}
	_putchar('\n');

