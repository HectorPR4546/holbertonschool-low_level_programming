#include "dog.h"
#include <stdio.h>
/**
 * init_dog - init structure dog
 * @d: pointer of structure
 * @name: pointer of name
 * @age: pointer of age
 * @owner: poiner of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

