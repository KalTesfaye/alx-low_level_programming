#include "main.h"

/**
 * swap_int - swap 2 values
 * @a: first arg
 * @b: second arg
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
