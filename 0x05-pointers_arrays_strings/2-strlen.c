#include "main.h"

/**
 * _strlen -return the length of str
 * @s: the str to be measure
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int c;

	c =0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
