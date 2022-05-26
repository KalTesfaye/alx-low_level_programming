#include "main.h"

/**
:x
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)i
{
	unsigned long int b;

	if (n == NULL)
		return (-1);
	b = 1 << index;
	if ((b | *n) == *n)
		*n = *n ^ b;
	return (1);
}
