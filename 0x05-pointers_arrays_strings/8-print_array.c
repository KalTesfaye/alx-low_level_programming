#include<stdio.h>

/**
 * print_array - print element of an array
 * @a:pointer to the array
 * @n: number of element to be printed 
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
		if (i == n -1)
		{
			continue;
		}
		printf(", ");
	}
}
