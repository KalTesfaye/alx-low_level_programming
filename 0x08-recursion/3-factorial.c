#include "main.h"
/**
 * factorial - return the factorial of the given number
 * @n: integer the
 *
 * Return: factorial
 */
int factorial(int n)
{
	int fact;

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
		fact = n * factorial(n - 1);
		return (fact);
	}
}
