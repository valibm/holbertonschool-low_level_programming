#include "dog.h"
#include <stdlib.h>
#include <string.h>

char *_strcopy(char *dest, char *src);

/**
 * new_dog - It creates a new dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
        new_dog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
        new_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	new_dog->name = _strcopy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcopy(new_dog->owner, owner);
	return (new_dog);
}

/**
 * _strcopy - Is a function that copies a string pointed to by src.
 * @dest: coppied string.
 * @src: The source string.
 * Return: pointer to the coppied string.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
