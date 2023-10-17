#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low_ch;
	char up_ch;

	for (low_ch = 'a'; low_ch <= 'z'; low_ch++)
	{
		putchar(low_ch);
	}

	for (up_ch = 'A'; up_ch <= 'Z'; up_ch++)
	{
		putchar(up_ch);
	}

	putchar('\n');

	return (0);
}
