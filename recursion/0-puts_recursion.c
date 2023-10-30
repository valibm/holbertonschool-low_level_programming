#include "main.h"

/**
 * _puts_recursion - Is a function that prints a string,
 * followed by a new line.
 * @s: printed string.
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
