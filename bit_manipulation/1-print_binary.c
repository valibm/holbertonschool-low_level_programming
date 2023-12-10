#include "main.h"

/**
 * print_binary - Is a function that prints the binary
 *                representation of a number.
 * @n: number to be printed.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	if (n && n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
