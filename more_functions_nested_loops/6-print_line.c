#include "main.h"

/**
 * print_line - Is a function that draws a straight line in the terminal.
 * @n: length of line.
 * Return: Void.
 */
void print_line(int n)
{
	int i;

        if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
