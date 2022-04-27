#include "main.h"

/**
 * _sqrt_recursion - find the sqrt of a given num
 * @n: the num
 *
 * Return:sqrt of given num
 */
int _sqrt_recursion(int n)
{
	int i;

	i = n / 2;
	if (i * i  == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		_sqrt_recursion(i);
	}
	else 
	{
		_sqrt_recursion(i + i /2);
	}
}
