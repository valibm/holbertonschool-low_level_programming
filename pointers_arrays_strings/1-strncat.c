#include "main.h"

/**
 * _strlen - Is a function that returns the length of a string.
 * @s: pointer to string.
 * Return: length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strncat - Is a function that concatenates two strings to a given length.
 * @dest: destination string.
 * @src: added string.
 * @n: limitation integer.
 * Return: concatanated strings.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, len;

	len = _strlen(src);

	while (dest[i] != '\0')
	{
		i++;
	}

	if (n <= len)
	{
		for (j = 0; src[j] < len; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	else
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	return (dest);
}
