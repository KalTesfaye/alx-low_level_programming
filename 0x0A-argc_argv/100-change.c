#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * main - the entry point
 * @argc: count of arguments
 * @argv: the array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int d, mod;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
	}
		else
		{
			d = atoi(argv[1]) / 25;
			mod = atoi(argv[1]) % 25;
			d += mod / 10;
			mod %= 10;
			d += mod / 5;
			mod %= 5;
			d += mod / 2;
			mod %= 2;
			printf("%d\n", mod + d);

		}

	return (0);
}
