#include "main.h"

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	b = (n >> index) & 1;

	if ((b == 1) || (b == 0))
		return (b);
	else
		return (-1);
}
