/**
 * _strlen_recursion - Is a function that returns the length of a string.
 * @s: String type parameter.
 * Return: Length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
