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
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = rev[n -1-i];
		rev[n - 1 - i] = temp;
	}
}
