#include "main.h"

/**
 * set_bit - Set bit value to 1
 * @n: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (n == NULL)
		return (-1);

	b = 1 << index;

	*n = *n | b;

	return (1);
}
