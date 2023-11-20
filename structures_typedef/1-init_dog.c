#include "dog.h"

/**
 * init_dog - It's a function that initialize a variable of type struct dog.
 * @d: struct of a dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
