#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
	char *nam, *own;
	int i = 0, lenn = 0, leno = 0;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name != NULL && owner != NULL)
	{
		while (name[i++])
			lenn++;
		i = 0;
		while (owner[i++])
			leno++;
		i = 0;
	}
	nam = malloc(sizeof(char) * (lenn + 1));
	own = malloc(sizeof(char) * (leno + 1));
	if (nam == NULL || own == NULL)
		{
			free(d), free(nam), free(own);
			return(NULL);
		}
	while (name[i])
	{
		nam[i] = name[i];
		i++;
	}
	nam[i] = name[i];
	i = 0;
	while (owner[i])
	{
		own[i] = owner[i];
		i++;
	}
	own[i] = owner[i];
	d->name = nam;
	d->age = age;
	d->owner = own;
	return (d);
}
