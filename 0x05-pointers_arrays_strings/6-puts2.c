#include "main.h"

/**
 * puts2 - print a string
 * @str: str to be print
 *
 * Return: 0
 */
void puts2(char *str)
{
	char *m;
	int c;

	c = 0;
	m = str;
	while (m[c] != '\0')
	{
		if (c % 2 == 0)
		{
		_putchar(m[c]);
		c++;
		}
	}
	_putchar('\n');
}
