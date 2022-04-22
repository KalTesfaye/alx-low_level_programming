#include "main.h"

/**
 * _strcmp - compare two chars
 * @s1: the first char
 * @s2: the second chars
 *
 * Return -ve +ve or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\n' || s2[i] != '\n'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (15 * -1);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
