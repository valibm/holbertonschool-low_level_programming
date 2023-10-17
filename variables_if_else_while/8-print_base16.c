#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii_adress;

	for (ascii_adress = 48; ascii_adress <= 57; ascii_adress++)
	{
		putchar(ascii_adress);
	}

	for (ascii_adress = 97; ascii_adress <= 102; ascii_adress++)
	{
		putchar(ascii_adress);
	}

	putchar('\n');

	return (0);
}
