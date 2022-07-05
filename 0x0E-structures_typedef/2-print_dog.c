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
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
