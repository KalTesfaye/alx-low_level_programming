#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

int main (int argc, char *argv[])
{
	int num1, num2, ans;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") || strcmp(argv[2], "-") || strcmp(argv[2], "*") || strcmp(argv[2], "/") || strcmp(argv[2], "%"))
	{
		if (num2 == 0 && (strcmp(argv[2], "/") || strcmp(argv[2], "%")))
		{
			printf("Error\n");
			exit(100);
		}
		ans = (*get_op_func(argv[2]))(num1, num2);
		printf("%d\n",ans);
		return (0);
	}
	exit(99);
}
