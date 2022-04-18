#include "main.h"

/**
 * _puts - print a string
 * @str: str to be print
 *
 * Return: 0
 */
void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
}
