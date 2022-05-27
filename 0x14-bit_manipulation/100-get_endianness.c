#include <stdio.h>
#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 * Prototype: int get_endianness(void).
 * Return: 1, if architecture is little endian, 0 in case of big endian.
 */
int get_endianness(void)
{
	unsigned int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
