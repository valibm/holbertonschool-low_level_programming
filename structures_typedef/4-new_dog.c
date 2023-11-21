#include "dog.h"
#include <stddef.h>

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

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while(name[name_len])
		name_len++;
	while(owner[owner_len])
		owner_len++;

	name_cpy = malloc(name_len + 1);
	if (name_cpy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_cpy[i] = name[i];

	owner_cpy = malloc(owner_len + 1);
	if (owner_cpy == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
