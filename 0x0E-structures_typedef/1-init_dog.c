#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - A function to initialize the struct dog.
 * @d: A dog struct.
 * @name: Name of dog.
 * @age: Age of the dog.
 * @owner: Name owner of the dog.
 *
 * Return: void.
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
