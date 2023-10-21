#include "main.h"

/**
 * print_diagonal - Is a function that draws a diagonal line on the terminal.
 * @n: length of diagonal.
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i == 1)
				_putchar('\\');
			else
				for (j = 0; j < i; j++)
				{
					if (j == (i - 1))
						_putchar('\\');
					else
						_putchar(' ');
				}
			_putchar('\n');
		}
	}
}
