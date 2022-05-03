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
	if (size == 0)
	{
		return (NULL);
	}
	str = malloc (sizeof(char) * size);
	str[0] = c;
	return (str);

}

