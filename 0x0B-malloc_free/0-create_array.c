#include "main.h"
#include<stdlib.h>

/**
 * create_array - create an arrayof char and intialize it
 * @size: size of the memory
 * @c: the char to be initialize
 *
 * Return: pointer 
 */
char *create_array(unsigned int size, char c)
{
	char  *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc (sizeof(char) * size);
	i = 0;
	while (i < size)
	{
	str[0] = c;
	i++;
	}
	str[i] = '\0';
	return (str);

}

