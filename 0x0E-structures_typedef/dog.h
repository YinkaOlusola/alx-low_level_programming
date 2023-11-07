#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A struct file for a dog
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
