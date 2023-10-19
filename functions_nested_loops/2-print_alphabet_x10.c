#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase followed by a new line
 * but 10 times over
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
