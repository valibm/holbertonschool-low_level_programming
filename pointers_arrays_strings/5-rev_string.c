/**
 * rev_string - Is a function that reverses a string.
 * @s - string that's being reversed.
 * Return: Void.
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char a, b;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;
	while (i < len)
	{
		a = s[i];
		b = s[len];
		s[i++] = b;
		s[len--] = a;
	}
}
