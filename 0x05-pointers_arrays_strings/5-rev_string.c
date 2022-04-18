#include "main.h"

/**
 * rev_string - print a string int reverse
 * @s: str to be print
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char *m;
	int c;
	int i;
	int j;

	c = 0;
	m = s;
	j = 0;
	while (m[c] != '\0')
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		s[j] = m[i];
		j++;
	}
}
