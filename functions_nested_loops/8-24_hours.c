#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from
 * 00:00 to 23:59.
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hour_tens;
	int hour_ones;
	int min_tens;
	int min_ones;

	for (hour_tens = 48; hour_tens <= 50; hour_tens++)
	{
		if (hour_tens != 50)
		{
			for (hour_ones = 48; hour_ones <= 57; hour_ones++)
			{
				for (min_tens = 48; min_tens <= 53; min_tens++)
				{
					for (min_ones = 48; min_ones <= 57;
					     min_ones++)
					{
						_putchar(hour_tens);
						_putchar(hour_ones);
						_putchar(':');
						_putchar(min_tens);
						_putchar(min_ones);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (hour_ones = 48; hour_ones <= 51; hour_ones++)
			{
				for (min_tens = 48; min_tens <= 53; min_tens++)
				{
					for (min_ones = 48; min_ones <= 57;
					     min_ones++)
					{
						_putchar(hour_tens);
						_putchar(hour_ones);
						_putchar(':');
						_putchar(min_tens);
						_putchar(min_ones);
						_putchar('\n');
					}
				}
			}
		}
	}
}
