#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Is a function that returns the sum of a and b.
 * @a: number
 * @b: number
 * Return:  returns the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Is a function that returns the difference of a and b.
 * @a: number
 * @b: number
 * Return: returns the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Is a function that returns the product of a and b.
 * @a: number
 * @b: number
 * Return: returns the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Is a function that returns the result of the division of a by b.
 * @a: number
 * @b: number
 * Return: returns the result of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Is a function that returns the remainder of the division of a by b.
 * @a: number
 * @b: number
 * Return: returns the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
