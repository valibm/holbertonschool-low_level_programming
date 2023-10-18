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
	int ad_stager2;

	for (adress = 48; adress < 55; adress++)
	{
		for (ad_stager = adress + 1; ad_stager <= 56; ad_stager++)
		{
			for (ad_stager2 = ad_stager + 1; ad_stager <= 57;
			     ad_stager2++)
			{
				putchar(adress);
				putchar(ad_stager);
				putchar(ad_stager2);
				if (adress == 54)
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
