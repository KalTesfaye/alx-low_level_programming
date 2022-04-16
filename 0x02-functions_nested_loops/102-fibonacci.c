#include<stdio.h>
/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	int t1 = 0, t2 = 1;
	int i;
	int nex = t1 + t2;

	for (i = 1; i < 50; i++)
	{
		printf("%d", nex);
		printf(", ");

		t1 =t2;
		t2 = nex;
		nex = t1 + t2;
	}
	printf("%d", mul);
	printf("\n");
	return (0);
}
