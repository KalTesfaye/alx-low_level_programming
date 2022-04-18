#include "main.h"

/**
 * _puts - print a string
 * @str: str to be print
 *
 * Return: 0
 */
void _puts(char *str)
{
	char *m;
	int c;

	c = 0;
	m = str;
	while (m[c] != '\0')
	{
		_putchar(m[c]);
		c++;
	}
}
