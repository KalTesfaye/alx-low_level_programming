#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog- print dog
 * @d: dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("%s", "");
	if (d->name == NULL)
		printf("Name: nil\n");
	else if (d->age == 0)
		printf("Age: nil\n");
	else if (d->owner == NULL)
		printf("Owner: nill\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
