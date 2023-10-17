#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int adress;
	int ad_stager;

	for (adress = 48; adress < 57; adress++)
	{
		for (ad_stager = adress + 1; ad_stager <= 57; ad_stager++)
		{
			putchar(adress);
			putchar(ad_stager);
			if (adress == 56)
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
