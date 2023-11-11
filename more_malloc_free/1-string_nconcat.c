#include <stdio.h>
#include <stdlib.h>

int str_len(char *str, unsigned int *n);

/**
 * string_nconcat - Is a function that concatenates two strings.
 * @s1: base string.
 * @s2: string to be concatanated.
 * @n: first n bytes of s2.
 * Return: NULL on failure, concatanated string otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = str_len(s1, NULL);
	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = str_len(s2, &n);
	con_str = malloc((s1_len + s2_len) * sizeof(char) + sizeof(char));
	if (con_str == NULL)
		return (NULL);
	for (i = 0; i < s1_len + s2_len; i++)
	{
		if (i < s1_len)
		{
			con_str[i] = s1[i];
		}
		else
		{
			for (j = 0; j < s2_len; j++)
			{
				con_str[i] = s2[j];
				i++;
			}
		}
	}
	con_str[i] = '\0';
	return (con_str);
}

/**
 * str_len - Measures string's length.
 * @str: string to be measured.
 * @n: length of first n bytes of str.
 * Return: null if str == null, length of string otherwise.
 */
int str_len(char *str, unsigned int *n)
{
	unsigned int i, len = 0;

        if (n == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
	}
	else
	{
		for (i = 0; str[i] != '\0' || i < *n; i++)
		{
			len++;
		}
	}

	return (len);
}
