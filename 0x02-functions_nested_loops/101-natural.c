#include<stdio.h>
/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	int mul;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			mul += i;
		}
	}
	printf("%d",mul);
	printf("\n");
	return (0);
}
