#include <stdio.h>
#include <limits.h>

/**
 * _atoi - a function that convert a string to an integer.
 * @s: Pointer to a string.
 *
 * Return: integer value of string if there are
 *  numbers in the string 0 otherwise.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}
