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
 * puts_half - Is a function that prints half of a string,
 * followed by a new line.
 * @str: string which is printed from the half.
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len, i;

	len = _strlen(str);

	if ((len % 2) == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
