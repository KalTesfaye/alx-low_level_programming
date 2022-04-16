#include<stdio.h>
/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	long int t1 = 0, t2 = 1;
	int i;
	long int nex = t1 + t2;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", nex);
		if (i == 50)
		{
			continue;
		}
		printf(", ");

		t1 = t2;
		t2 = nex;
		nex = t1 + t2;
	}
	printf("\n");
	return (0);
}
