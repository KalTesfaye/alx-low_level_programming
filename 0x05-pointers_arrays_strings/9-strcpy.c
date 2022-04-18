#include "main.h"

/**
 * _strcpy - copy one string to other
 * @dest: pointer to be copied
 * @src: pointer to the first str
 *
 * Return: 0
 */
char  *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);	
}
