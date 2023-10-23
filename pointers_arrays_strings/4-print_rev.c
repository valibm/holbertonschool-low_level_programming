#include "main.h"

/**
 * print_rev - Is a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string type parameter that is reverse printed.
 * Return: Void.
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
