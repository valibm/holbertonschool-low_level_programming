#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: value to be computed.
 * Return: absolute value of argument.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * n);
	}
	else
	{
		return (n);
	}
}
