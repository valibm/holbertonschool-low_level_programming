#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int len1 = str_len(s1), len2 = str_len(s2), i, j;

	if (s1 == NULL)
	{
		con_str = malloc((sizeof(*s2) * len2) + sizeof(*s2));
		for (i = 0; s2[i] != '\0'; i++)
		{
			*(con_str + i) = s2[i];
		}
		return (con_str);
	}
	else if (s2 == NULL)
	{
		con_str = malloc((sizeof(*s1) * len1) + sizeof(*s1));
		for (i = 0; s1[i] != '\0'; i++)
		{
			*(con_str + i) = s1[i];
		}
		return (con_str);
	}
	else
	{
		con_str = malloc((sizeof(*s1) * len1) +
				 (sizeof(*s2) * len2) + sizeof(*s2));
		for (i = 0; s1[i] != '\0'; i++)
		{
			*(con_str + i) = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			*(con_str + (i + 1 + j)) = s2[j];
		}
		return (con_str);
	}
}

/**
 * str_len - Measures string's length.
 * @str: string to be measured.
 * Return: null if str == null, length of string otherwise.
 */
int str_len(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
