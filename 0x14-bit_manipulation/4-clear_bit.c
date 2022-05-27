#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input
 * @index: index
 * 
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
