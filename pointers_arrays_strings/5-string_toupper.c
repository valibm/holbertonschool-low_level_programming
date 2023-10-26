/**
 * string_toupper - Is a function that changes all lowercase letters of a
 * string to uppercase.
 * @str: string type argument.
 * Return: str with uppercase characters.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
