#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num3 = 48; num3 <= 57; num3++)
	{
	for (num2 = 48; num2 <= 57; num2++)
	{
	for (num = 48; num <= 57; num++)
	{
		if (num3 >= num2 && num2 >= num)
		{
			continue;
		}
		putchar(num3);
		putchar(num2);
		putchar(num);
		if (num == 57 && num2 == 56 && num3 == 55)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
