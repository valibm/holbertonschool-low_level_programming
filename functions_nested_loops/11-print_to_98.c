#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: starting number.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == n)
				printf("%d", i);
			else
				printf(", %d", i);
		}
		putchar('\n');
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == n)
				printf("%d", i);
			else
				printf(", %d", i);
		}
		putchar('\n');
	}
}
