#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: age of the dog
 * @owner: owner name
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t *d;
	d = malloc(sizeof(struct dog));
	
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
