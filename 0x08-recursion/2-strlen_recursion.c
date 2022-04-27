#include "main.h"

/**
 * _strlen_recursion - return the length of the string
 * @s: the string to be measure
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(++s);
	}
	return (i);
}
