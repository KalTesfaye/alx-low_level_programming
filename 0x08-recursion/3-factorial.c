#include "main.h"
/**
 * factorial - return the factorial of the given number
 * @n: integer the
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return i * factorial(i - 1);
	}
}
