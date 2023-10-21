#include "main.h"

/**
 * print_triangle - Is a function that prints a triangle,
 * followed by a new line.
 * @size: size of the triangle.
 * Return: Void.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= (size - i))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
