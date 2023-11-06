#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Is a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: first element of array.
 *
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size <= 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] == '\0'; i++)
	{
		*(str + i) = c;
	}

	return (str);
}
