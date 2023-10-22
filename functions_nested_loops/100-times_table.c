#include "main.h"

/**
 * print_times_table - prints the n times table, from zero till 15,
 * starting with 0.
 * @n: limit of times table
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j, multiplication;

	if (n >= 0 && n <= 15 )
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multiplication = i * j;
				time_table_conditions(multiplication, j);
			}
			_putchar('\n');
		}
	}
}

/**
 * time_table_conditions - Lays the conditions used in print_time_table
 * @n: integer number
 * @j: integer number
 * Return: Void
 */
void time_table_conditions(int n, int j)
{
	if (n < 10)
	{
		if (j == 0)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(n + '0');
		}
	}
	else if (n > 9 && n < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar((n / 100) + '0');
		_putchar((n / 10 % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
