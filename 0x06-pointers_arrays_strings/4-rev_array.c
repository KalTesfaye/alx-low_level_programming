#include "main.h"
/**
 * reverse_array - reverse the given array
 * @a: the array
 * @n: no of element inthe array
 *
 * Return: reve_array
 */
void reverse_array(int *a, int n)
{
	int rev[n];
	int i;

	for (i = 0; i < n; i++)
	{
		rev[n - 1 - i] = a[i];
	}
	return (rev);
}
