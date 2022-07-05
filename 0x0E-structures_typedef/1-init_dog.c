#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: pointer
 * @name: name
 * @age: float
 * @owner:char
 * Description: initialize the dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
