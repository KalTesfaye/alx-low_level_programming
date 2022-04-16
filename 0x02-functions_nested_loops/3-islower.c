#include "main.h"
#include<ctype.h>

/**
 * _islower - check the code
 * @c: the charracter to be checked
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
