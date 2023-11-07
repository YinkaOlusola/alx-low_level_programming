#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 * @d: The dog's struct.
 *
 * Return: None (Only prints out data when called)
 *
 * This function takes a pointer to a struct dog and prints information
 * about the dog, including its name, age,  and owner.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
