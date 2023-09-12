#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a sruct dog variable
 * @name: name of the dog
 * @d: pointer to the struct dog
 * @owner: owner of dog
 * @age: age of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
