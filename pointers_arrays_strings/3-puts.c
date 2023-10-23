#include "main.h"

/**
 * _puts - Is a function that prints a string, followed by a new line,
 * to stdout.
 * @str: prameter string that is printed.
 *
 * Return: Void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
