#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Is a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be dublicated.
 * Return: NULL if str = NULL otherwise a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *str_dub;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	str_dub = malloc((sizeof(*str) * len) + sizeof(*str));

	if (str_dub == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		*(str_dub + i) = str[i];
	}

	return (str_dub);
}
