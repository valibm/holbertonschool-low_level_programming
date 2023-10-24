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
        int j, len;
	char *temp = dest;

	len = _strlen(src);

	while (*dest)
	{
		dest++;
	}

	if (n <= len)
	{
		for (j = 0; j < n; j++)
		{
			*dest++ = *src++;
		}
	}
	else
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			*dest++ = *src++;
		}
	}

	*dest = '\0';

	return (temp);
}
