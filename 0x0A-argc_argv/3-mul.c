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
	int sum;

	if (argc == 3)
		{
			sum = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", sum);
			return (0);
		}
	else
		{
			printf("Error\n");
			return (1);
		}
}
