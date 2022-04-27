#include "main.h"

/**
 * _is_prime_number - check if the given number is prime num
 * @n: the number
 *
 * Return: 1 or -1
 */
int _is_prime_number(int n)
{
	int i;

	i = n;
	if (i % __is_prime_number(n - 1) == 0)
	{
		return (1);
	}
	else 
	{
		return (-1);
	}
}
