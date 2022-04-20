#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: the destination string
 * @src: source string 
 * @n: number of bytes
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (j < n)
	{
	dest[i + j] = '\0';
	}
	return (dest);
}
