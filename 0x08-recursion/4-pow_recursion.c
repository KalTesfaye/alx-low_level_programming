#include "main.h"

/**
 * _pow_recursion - return the power of a given num
 * @x: the given number
 * @y: the power to be r
 *
 * Return: the power of x
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y <= 0)
	{
		return(-1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
		return (pow);
	}
}
