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
	long int sum;

	for (i = 1; i <= 50; i++)
	{
		if (nex >= 4000000)
		{
			break;
		}
		if (nex % 2 == 0)
		{
			sum += nex;
		}

		t1 = t2;
		t2 = nex;
		nex = t1 + t2;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
