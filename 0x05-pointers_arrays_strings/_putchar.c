#include<unistd.h>

/**
 * _putchar - write the output to stdout
 * @c: char to be printed
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
