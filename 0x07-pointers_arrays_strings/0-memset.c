#include "main.h"

/**
 * _memset - fill memory constant size
 * @s: memory location
 * @b: constant byte 
 * @n: number of memory area
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, sign_t n)
		{
		unsigned char *ptr = s;
		while (n > 0)
		{
			*ptr++ = b;
			n--;
		}
		return (s);
		}
