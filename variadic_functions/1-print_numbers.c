#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - Is a function that prints numbers, followed by a new line.
 * @separator: separator between numbers.
 * @n: number.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
