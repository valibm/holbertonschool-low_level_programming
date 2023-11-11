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
	unsigned int i, s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[s1_len])
		s1_len++;

	if (s2 == NULL)
		s2 = "";
	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	con_str = malloc((s1_len + n + 1) * sizeof(char));
	if (con_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len + n; i++)
	{
		if (i < s1_len)
			con_str[i] = *s1, s1++;
		else
			con_str[i] = *s2, s2++;
	}
	con_str[i] = '\0';
	return (con_str);
}
