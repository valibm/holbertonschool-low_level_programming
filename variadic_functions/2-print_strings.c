#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - Is a function that prints strings, followed by a new line.
 * @separator: separator between strings.
 * @n: number of strings.
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
