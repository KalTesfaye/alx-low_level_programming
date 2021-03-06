#include "main.h"

/**
 * _strncpy - string that copyto dest
 * @dest: destination string
 * @src: source
 * @n: lengthof char
 *
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for  (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
