#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: input
 * @index: index
 
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int b;

	if (n == NULL)
		return (-1);
	b = 1 << index;
	if ((b | *n) == *n)
		*n = *n ^ b;
	return (1);
}
