#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n, i, sum = 0;

        while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
