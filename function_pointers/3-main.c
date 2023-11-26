#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 and 1 on error;
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		return (1);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		return (1);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
