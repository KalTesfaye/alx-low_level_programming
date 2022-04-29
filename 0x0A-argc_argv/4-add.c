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
	int i;

	if (argc == 1)
	{
		printf("%d\n",0);
	}
	for (i = 0; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
	printf("%d\n",sum);
	return (0);
}
