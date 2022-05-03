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
	int j;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	dup = malloc(i * sizeof(char));
	while (str[j] != '\0')
	{
		dup[j] = str[j];
	}
	dup[i] = '\0';
	return (dup);
}
