#include "main.h"
#include <stddef.h>

/**
 * set_bit - Set bit value to 1
 * @n: input
 * @index: index
 *
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
	{
		return (-1);
	}
	bits = 1 << index;
	*n = *n | bits;
	return (1);
}
