#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Is a function that prints a struct dog.
 * @d: struct of type dog.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s \nAge: %f \nOwner: %s\n", d->name, d->age, d->owner);
}
