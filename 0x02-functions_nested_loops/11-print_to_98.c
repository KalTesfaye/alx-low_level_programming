#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - print upto 98
 * @n: num to be checked
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d",i);
		}
	}
	else
	{
		for (i = 98; i < n; i++)
		{
			printf("%d",i);
		}
	}
	printf("\n")

}
