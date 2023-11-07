#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);

/**
 * str_concat - Is a function that concatenates two strings.
 * @s1: base string.
 * @s2: string to be concatanated.
 * Return: NULL on failure, concatanated string otherwise.
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int i, s1_len, s2_len;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = str_len(s1);
	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = str_len(s2);
	con_str = malloc(s1_len * sizeof(char)
			 + s2_len * sizeof(char) + sizeof(char));
	if (con_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len + s2_len; i++)
	{
		if (i < s1_len)
			con_str[i] = s1[i];
		else
			con_str[i] = s2[i - s1_len];
	}
	con_str[i] = '\0';
	return (con_str);
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
