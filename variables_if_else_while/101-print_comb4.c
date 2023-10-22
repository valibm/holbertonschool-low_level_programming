#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 48; hundreds < 56; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 56; tens++)
		{
			for (ones = tens + 1; ones <= 57;
			     ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				if (hundreds == 55)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
