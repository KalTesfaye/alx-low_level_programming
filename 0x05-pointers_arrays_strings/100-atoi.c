#include "main.h"

/**
 * _atoi - change string to number
 * @s: character to be pass
 *
 * Return: 0
 */
int _atoi(char *s)
{
	unsigned int number,i;
	int sign;

	sign = 1;
	number = 0;
	i = 0;

	while (s[i] != '\0')
	{
		number = (s[i] - 48) + number * 10;
		if (s[i + 1] == ' ')
		{
			break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (number * sign);
}
