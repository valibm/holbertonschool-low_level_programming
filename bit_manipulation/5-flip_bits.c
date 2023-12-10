#include "main.h"

/**
 * flip_bits - Is a function that returns the number of bits you would
 *             need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: the number of bits you would need to
 *         flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int flips = 0;

	while (i <= 63)
	{
		if ((n & 1) != (m & 1))
			flips++;

		n >>= 1;
		m >>= 1;
		i++;
	}
	return (flips);
}
