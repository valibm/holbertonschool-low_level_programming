#include <stddef.h>

/**
 * _strpbrk - Is a locates the first occurrence in the string s of any of
 * the bytes in the string accept.
 * @s: searched string.
 * @accept: checked characters.
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}

	return (NULL);
}
