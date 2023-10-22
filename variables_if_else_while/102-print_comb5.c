#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int comb1, comb2;

	for (comb1 = 0; comb1 <= 98; comb1++)
	{
		for (comb2 = comb1 + 1; comb2 <= 99; comb2++)
		{
			putchar((comb1 / 10) + '0');
			putchar((comb1 % 10) + '0');
			putchar(' ');
			putchar((comb2 / 10) + '0');
			putchar((comb2 % 10) + '0');

			if (comb1 == 98 && comb2 == 99)
			{
				break;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
