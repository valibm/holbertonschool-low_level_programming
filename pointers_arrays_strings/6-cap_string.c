#include <stdbool.h>

bool check_seperators(char c);

/**
 * cap_string - Is a function that capitalizes all words of a string.
 * @str: string type parameter.
 * Return: str with necessary capitalized words.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i + 1] >= 97 && str[i + 1] <= 122)
		{
			str[i] = str[i] - 32;
		}

		if (check_seperators(str[i]) &&
		    str[i + 1] >= 97 && str[i + 1] <= 122)
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}

	return (str);
}

/**
 * check_seperators - check if a is a eparators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @c: char type parameter.
 * Return: 1 if seperator, 0 otherwise.
 */
bool check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
		{
			return (true);
		}
	}

	return (false);
}
