#include "main.h"
#include<stdlib.h>

/**
 * _strdup - duplicate the fgiven string
 * @str: the given string
 *
 * Return: pointer to copy 
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*str != '\0')
	{
		i++;
		str += 1;
	}
	dup = malloc(sizeof(*str) * i + 1);

	while (*str != '\0')
	{
		*dup = *str;
		str += 1;
		dup += 1;
	}
	*dup = '\0';
	return (dup);
}
