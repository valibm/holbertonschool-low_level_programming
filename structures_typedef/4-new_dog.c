#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *name_cpy, *owner_cpy;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	name_cpy = malloc((name_len + 1) * sizeof(char));
	if (name_cpy == NULL)
	{
		free(new_dog);
		free(name_cpy);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_cpy[i] = name[i];
	owner_cpy = malloc((owner_len + 1) * sizeof(char));
	if (owner_cpy == NULL)
	{
		free(new_dog);
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
