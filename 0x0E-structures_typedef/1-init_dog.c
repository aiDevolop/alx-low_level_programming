#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - initializes struct dog
 * @d: adress of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
