#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e')
		{
			continue;
		}
		else if (letter == 'q')
		{
			continue;
		}

		putchar(letter);
	}

	putchar('\n');

	return (0);
}
