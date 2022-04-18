#include "main.h"

/**
 * puts_half - print a string int reverse
 * @str: str to be print
 *
 * Return: 0
 */
void puts_half(char *str)
{
	char *m;
	int c;
	int i;

	c = 0;
	m = str;
	while (m[c] != '\0')
	{
		c++;
	}
	for (i = (c + 1) / 2; i <= c; i++)
	{
		_putchar(m[i]);
	}
	_putchar('\n');
}
