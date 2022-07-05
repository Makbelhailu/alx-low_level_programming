#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: a structure
 * Description: prints stractur value
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->age == NULL)
		printf("Age: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
