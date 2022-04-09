#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets;
	char alphabetc;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabetc = 'A'; alphabetc <= 'Z'; alphabetc++)
	{
		putchar(alphabetc);
	}
	putchar('\n');
	return (0);
}
