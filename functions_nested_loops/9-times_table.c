#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Void
 */
void times_table(void)
{
	int i, j, multiplication;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiplication = i * j;
			if (multiplication < 10)
			{
				if (j == 0)
				{
					_putchar(multiplication + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(multiplication + '0');
				}
			}
			else
			{
				if (j == 0)
				{
					_putchar((multiplication / 10) + '0');
					_putchar((multiplication % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multiplication / 10) + '0');
					_putchar((multiplication % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
